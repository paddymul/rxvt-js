# ./Makefile.in			-*- Makefile -*-

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

VERNAME = rxvt-unicode-$(VERSION)

srcdir =	.


first_rule: all
dummy:

subdirs = src doc

RECURSIVE_TARGETS = all allbin alldoc tags clean distclean realclean install

#-------------------------------------------------------------------------

$(RECURSIVE_TARGETS):
	@for I in $(subdirs); do (cd $$I; $(MAKE) $@) || exit 1; done

distclean realclean: distclean-local

#
# entry points for other programs
#
rxvt:
	(cd src; $(MAKE))

#-------------------------------------------------------------------------
configure: configure.ac aclocal.m4 config.h.in
	cd $(srcdir); ./autogen.sh

config.status:
	if test -x config.status; then config.status --recheck; \
	else $(SHELL) configure; fi

config.h.in: configure.ac
	cd $(srcdir); ./autogen.sh

check: all
	echo "no tests"

Makefiles:
	$(SHELL) config.status

cleandir: realclean

distclean-local:
	rm -f config.cache config.h config.log config.status
	rm -f Makefile

distdir:
	cd doc && $(MAKE) distdepend
	cd src && $(MAKE) depend
	rm -rf $(VERNAME)
	mkdir $(VERNAME)
	rsync -aR --copy-unsafe-links `cat MANIFEST` $(VERNAME)/.

tar.gz: distdir
	tar cvf - $(VERNAME) | gzip -vf9 > $(VERNAME).tar.gz
	rm -rf $(VERNAME)

tar.bz2: distdir
	tar cvf - $(VERNAME) | bzip2 -vf9 > $(VERNAME).tar.bz2
	rm -rf $(VERNAME)

dist: tar.bz2

# ------------------------------------------------------------------------
