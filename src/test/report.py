#!/usr/bin/python

def freq_count(f_name):
    freq_dict = {}
    for line in open(f_name):
        line = line.strip()
        if freq_dict.has_key(line):
            freq_dict[line] += 1
        else:
            freq_dict[line] = 1
    return freq_dict

def compare_dicts(freq1, freq2):

    freq1 = freq1.copy()
    freq2 = freq2.copy()
    for key in freq1.keys():
        if freq2.has_key(key) and freq1[key] == freq2[key]:
            del freq1[key]
            del freq2[key]
            
    return (freq1,freq2)

def print_only(title_a, freq_a, a_only):

    print "\n\n%s  Only\n" % title_a
    columnize.print_table([ (k,str(freq_a[k])) for k in a_only])


import columnize
def print_report(title_a, freq_a, title_b, freq_b):
    a_all = freq_a.keys()
    b_all = freq_b.keys()
    
    a_only = list(set(a_all)-set(b_all))
    b_only = list(set(b_all)-set(a_all))

    both = list(set(a_all).intersection(set(b_all)))

    print_only(title_a, freq_a, a_only)
    print_only(title_b, freq_b, b_only)
    print "\n\nIntersection\n "
    header=[
        [title_a, "     ",  title_b, "    " , "          "],
         ["line", "count",  "line" , "count", "difference"]]
    for k in both:
        header.append(
            [k, str( freq_a[k]), k, str(freq_b[k]), str(freq_a[k] - freq_b[k])])
    columnize.print_table(header)


if __name__ == "__main__":
    rxvt = freq_count("rxvt-out")
    js = freq_count("rxvt-js-out")

    rxvt_only, js_only = compare_dicts(rxvt,js)
    print_report("rxvt", rxvt_only, "js", js_only)
