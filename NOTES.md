# Dev notes on ctools.

## Getting started

Easy!

1.  Run `autoconf` to generate the configure script, then ...
2.  Run the configure script, `./configure`, to generate a Makefile from
    Makefile.in.

This will help you understand what to change in `configure.ac` and `Makefile.in`.

Clean up configure.ac. It includes, for example,

     m4_include([m4/ax_lib_sqlite3.m4])
     AX_LIB_SQLITE3

in order to show how to incorporate local Autoconf macros. Macros can be
updated as shown below.

`Makefile.in` will need a substantial purge since it contains many examples of
setting variables by Autoconf templating.

## Tool templates

The files `src/XXX-main.c`, `src/XXX-main.h`, `src/XXX-options.c`, and
`src/XXX-options.h` are templates for developing each tool in your
tool-set.

## FYI

`src/Makefile` is simply a convenience for the dev; it's not called by the
top-level Makefile as part of the build.

## Updating external dependencies:

     wget -Psrc \
        https://raw.githubusercontent.com/skeeto/optparse/master/optparse.h

     wget -Psrc \
        https://raw.githubusercontent.com/crowja/linewrapper/master/linewrapper.c

     wget -Psrc \
        https://raw.githubusercontent.com/crowja/linewrapper/master/linewrapper.h

     wget -Psrc \
        https://raw.githubusercontent.com/crowja/varstr/master/varstr.c

     wget -Psrc \
        https://raw.githubusercontent.com/crowja/varstr/master/varstr.h

     http://git.savannah.gnu.org/gitweb/?p=autoconf-archive.git;a=blob_plain;f=m4/ax_lib_sqlite3.m4

