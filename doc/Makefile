# doc/Makefile.in	-*- Makefile -*-

DATE=2008-06-15
VERSION=9.06
RXVTNAME=urxvt
SHELL = /bin/sh
prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
libdir = ${exec_prefix}/lib
includedir = ${prefix}/include
man1dir = ${prefix}/share/man/man1
man1ext = 1
man3dir = ${prefix}/share/man/man3
man3ext = 3
man7dir = ${prefix}/share/man/man7
man7ext = 7
PERL = /opt/local/bin/perl
INSTALL = /opt/local/bin/ginstall -c
INSTALL_PROGRAM = /opt/local/bin/ginstall -c -m 755
INSTALL_DATA = /opt/local/bin/ginstall -c -m 644

srcdir =	.


first_rule: all
dummy:

#-------------------------------------------------------------------------

SEDREPLACE = -e 's%@@RXVT_VERSION@@%$(VERSION)%g;'	\
	     -e 's%@@RXVT_NAME@@%$(RXVTNAME)%g;'	\
	     -e 's%@@RXVT_DATE@@%$(DATE)%g;'		\
	     -e 's%@@RXVT_LIBDIR@@%$(libdir)%g;'	\
	     -e 's%@@URXVT_NAME@@%urxvt%g;'

POD2MAN = pod2man -n @@RXVT_NAME@@ -r @@RXVT_VERSION@@ -q\" -c "RXVT-UNICODE"

all:
	sed $(SEDREPLACE) < $(srcdir)/rxvt.1.man.in  >rxvt.1.man
	sed $(SEDREPLACE) < $(srcdir)/rxvtc.1.man.in >rxvtc.1.man
	sed $(SEDREPLACE) < $(srcdir)/rxvtd.1.man.in >rxvtd.1.man
	sed $(SEDREPLACE) < $(srcdir)/rxvt.7.man.in  >rxvt.7.man
	sed $(SEDREPLACE) < $(srcdir)/rxvtperl.3.man.in >rxvtperl.3.man

rxvtperl.3.pod: ../src/urxvt.pm
	cp $< $@

%.tbl: %.pod
	$(srcdir)/podtbl <$< >$@

%.1.man.in: %.1.tbl
	$(POD2MAN) -s1 <$< >$@

%.3.man.in: %.3.tbl
	$(POD2MAN) -s3 <$< >$@

%.7.man.in: %.7.tbl
	$(POD2MAN) -s7 <$< >$@

%.html: %.tbl
	sed $(SEDREPLACE) <$< | pod2xhtml --css http://res.tst.eu/pod.css >$@

%.txt: %.tbl
	sed $(SEDREPLACE) <$< | pod2text >$@

../README.configure: rxvt.7.tbl
	sed $(SEDREPLACE) <$< | podselect -section "CONFIGURE OPTIONS" | pod2text >$@

../README.FAQ: rxvt.7.tbl
	sed $(SEDREPLACE) <$< | podselect -section "RXVT-UNICODE\/URXVT FREQUENTLY ASKED QUESTIONS" | pod2text >$@

tags allbin:

alldoc: rxvt.1.man.in rxvt.7.man.in rxvtc.1.man.in rxvtd.1.man.in rxvtperl.3.man.in \
	../README.configure ../README.FAQ
	infocmp -C rxvt-unicode >$(srcdir)/etc/rxvt-unicode.termcap

clean:
	rm -f rxvt.1.man rxvt.7.man rxvtc.1.man rxvtd.1.man rxvtperl.3.man

distclean: clean
	rm -f Makefile

realclean: distclean
	rm -f rxvt.1.man.in rxvt.7.man.in rxvtc.1.man.in rxvtd.1.man.in rxvtperl.3.man.in
	rm -f ../README.configure ../README.FAQ
	rm -f $(srcdir)/etc/rxvt-unicode.termcap

cleandir: realclean

install: all
	$(INSTALL) -d $(DESTDIR)$(man1dir)
	$(INSTALL) -d $(DESTDIR)$(man7dir)
	$(INSTALL_DATA) rxvt.1.man  $(DESTDIR)$(man1dir)/$(RXVTNAME).$(man1ext)
	$(INSTALL_DATA) rxvtc.1.man $(DESTDIR)$(man1dir)/$(RXVTNAME)c.$(man1ext)
	$(INSTALL_DATA) rxvtd.1.man $(DESTDIR)$(man1dir)/$(RXVTNAME)d.$(man1ext)
	$(INSTALL_DATA) rxvt.7.man  $(DESTDIR)$(man7dir)/$(RXVTNAME).$(man7ext)
	$(INSTALL) -d $(DESTDIR)$(man3dir)
	$(INSTALL_DATA) rxvtperl.3.man $(DESTDIR)$(man3dir)/$(RXVTNAME)perl.$(man3ext)
	/opt/local/bin/tic $(srcdir)/etc/rxvt-unicode.terminfo

distdepend: alldoc

