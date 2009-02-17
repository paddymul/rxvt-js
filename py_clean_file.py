#!/usr/bin/python

import re
import pdb
test_text="""
void
rxvt_term::asd()


void
rxvt_term::button_release (XButtonEvent &ev)
{
# 2185 "command.C"
void
rxvt_term::cmd_parse ()
{
int a = 5;
int b= (int) foo_func();
      if (len == (size_t)-2)
       {
          
          
          cmdbuf_ptr = cmdbuf_endp;
          break;
        }


      else
 {
 }
 static const int pm_h[] = { 7, 25 };
 const int pm_h[] = { 7, 25 };
   int pm_h[] = { 7, 25 };

          len = 0;
# 2185 "command.C"
          buf[len++] = ch;
            const char *str = "";
}

wchar_t
rxvt_term::next_char (int ab)
{

"""
simple_text="""
a
b
c
"""



one_line_test_string='void\nrxvt_term::next_char()'    
def one_line_functions(text):
    """
    >>> one_line_functions(test_string)
    'void rxvt_term::next_char()'
    """
    
    function_def=re.compile(r'^([a-zA-Z_]+[ ]*)\n[ ]*(rxvt_term::[a-zA-Z_]+ ?\(.*\)).*',re.MULTILINE)
    return function_def.sub(r'\1 \2',text)


def strip_macro_defs(text):
    #sed -e 's:^\([#] [0-9]\{1,\} .*\):      \/\/     \1:'
    strip_macro_defs_re=re.compile(r'^([#] [0-9]{1,} .*)', re.MULTILINE)
    return strip_macro_defs_re.sub(r'      //     \1',text)

def fix_braces(text):

    #re_=re.compile(r'(else|\))[:space:]*\n[:space:]*\{', re.MULTILINE)
    re_=re.compile("(else|\\))[ \t]*\n[ \t]*\\{", re.MULTILINE)
    return re_.sub("\\1{",text)

comment_sniffer=re.compile(r'^//CMNT:')

def line_is_generated_comment(line):
    """
    >>> line_is_generated_comment(' //CMNT:')
    False
    >>> line_is_generated_comment('//CMNT:')
    True
    >>> line_is_generated_comment('barf//')
    False
    """
    if(comment_sniffer.search(line)):
        return True
    return False

def add_comment(comment, line):
    """
    >>> add_comment('new_coment', '//CMNT: foo I am a pointer ')
    '//CMNT: new_coment foo I am a pointer '
    """
    add_comment_re=re.compile(r'^(//CMNT:)( )(.*)')
    return add_comment_re.sub("\\1 %s \\3" % comment, line)
def comment_orig(note,line):
    """
    >>> comment_orig('foo', 'I am a pointer')
    '//CMNT: foo I am a pointer '
    """
    return "//CMNT: %s ^|       %s " % (note,line)


def comment_original_strip(search_re, sub_, note, text):
    sed_command='/^'"$negated_comment_start"'.*/{s/.*'"$1"'.*/{h;x;s/^/'"$note"'/;p;x;s/'"$1"'//g;}/}'
    outputlines=[]
    previous_line=''
#    pdb.set_trace()
    for line in text.splitlines():
        if not line_is_generated_comment(line):
            if not line_is_generated_comment(previous_line):
                if(search_re.search(line)):
                    outputlines.append(comment_orig(note, line))
                outputlines.append(search_re.sub(sub_,line))

            else:
                if(search_re.search(line)):
                    outputlines[-1]=add_comment(note,outputlines[-1])
                outputlines.append(search_re.sub(sub_,line))
        else:
            outputlines.append(line)
        previous_line=line
    return '\n'.join(outputlines)

raw_c_types="void|wchar_t|char|unsigned|int|short|const|static|rend_t|unicode_t"
c_types="("+raw_c_types+")"
repeated_c_types="([ \t]*"+raw_c_types+"[ \t]*)+"
def comment_c_keywords(text):
    #c_kws_regex_string=r'(^|[ ,\)\(*&])'+c_types+'([ ,\(\)*&])'
    #c_kws_regex_string=r'(^|[ ,\)\(*&])'+repeated_c_types+'([ ,\(\)*&])'
    c_kws_re=re.compile(repeated_c_types)
    return comment_original_strip(c_kws_re,'',"c_keyword", text)
    #return comment_original_strip(c_kws_re,'\\1\\3',"c keyword", text)

def js_style_hash_functions(text):
    re_=re.compile("[ \t]*([a-zA-Z_]+)::([a-zA-Z_]+[ \t]*\(.*)")
    return comment_original_strip(re_,"function:\\2", "js_style_functions", text)

def js_style_functions(text):
    re_=re.compile("[ \t]*([a-zA-Z_]+)::([a-zA-Z_]+)[ \t]*(\(.*)")
    return comment_original_strip(re_,"\\1.\\2 =function\\3 ", "js_style_functions", text)

def remove_casts(text):
    re_=re.compile("\([ \t]*"+c_types+"[ \t]*\)")
    return comment_original_strip(re_,"", "remove_casts", text)


def js_style_variables(text):
    re_=re.compile("^[ \t]*"+c_types+"[ \t]*([a-zA-Z_]+)[ \t]*=([^=]*)")
    return comment_original_strip(re_," var \\2=\\3 ", "js_style_variables", text)

def js_style_arrays(text):
    re_=re.compile("^([ \t]*"+c_types+"[ \t]*)+[ \t]*([a-zA-Z_]+)[ \t]*\[\][ \t]*=[ \t]*\{([^\{;=]*)\}")
    return comment_original_strip(re_," \\2 \\3 = [\\4] ", "js_style_arrays", text)

def pointers(text):
    re_=re.compile("([^/])(\*)([^/])")
    return comment_original_strip(re_,"\\1 \\3 ", "possible_pointer", text)



def process_text(text):
    for f in [one_line_functions, fix_braces, strip_macro_defs, remove_casts, pointers, js_style_arrays, js_style_variables, comment_c_keywords, js_style_functions]:
        text=f(text)
        print f
    return text

def process_file(f_name):
    f_in=open(f_name)
    f_out=open(f_name+".js","w")
    f_out.write(process_text(f_in.read()))
    f_out.close()


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    process_text(test_text)
    process_file("src/command.C_exp.C")
    process_file("src/screen.C_exp.C")
