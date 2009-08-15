__author__ = 'Darius Bacon'
__version__ = '0.1.0'
__copyright__ = 'Copyright (c) 2009 Darius'
__license__ = 'MIT X License'
 
import math
 
# (Maybe this should be called something other than see(), to avoid
# confusion? But view() is harder to type -- hmph.)
def see(x):
    "Show dir(x) in columns."
    columnize(dir(x))
 
def columnize(strings):
    "Given a sequence of strings, show them in columns."
    print_table(tabulate(strings))
 
def tabulate(strings, width=150):
    """Given a sequence of strings, return a matrix of the same
strings in column order, trying to fit them in the given width."""
    maxwidth = max([1] + map(len, strings))
    ncols = max(1, min(len(strings), width // maxwidth))
    nrows = max(1, int(math.ceil(len(strings) / float(ncols))))
    t = [strings[i:i+nrows]
         for i in range(0, len(strings), nrows)]
    if t:
        t[-1] += [''] * (nrows * ncols - len(strings))
    return transpose(t)
 
def print_table(table, sep=' '):
    """Print a list of lists of strings as a table, so that columns
line up nicely. sep is the separator between columns."""
    # Adapted from print_table in utils.py in Peter Norvig's aima-python.
    sizes = [max(map(len, column)) for column in transpose(table)]
    for row in table:
        for size, string_ in zip(sizes, row):
            print string_.ljust(size), sep,
        print
 
def transpose(m):
    return zip(*m)
 
