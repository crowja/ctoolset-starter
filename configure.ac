dnl M4 seems to need the trailing comma below for the continuation
dnl to be treated correctly. Removing it (without doing anything
dnl else) will cause the generated configure to barf on finding
dnl a working C compiler.
AC_INIT(
  [My new package],
  [0.0.0],
  [crowja@gmail.com],
  [my_new_pkg],
  [http://example.com],
)

AC_CONFIG_HEADERS([src/config.h:config.h.in])

dnl Unique file in the source directory
AC_CONFIG_SRCDIR([src/main.c])

AC_PREREQ([2.69])
AC_COPYRIGHT([John A. Crow])
AC_CONFIG_MACRO_DIR([m4])

AC_LANG(C)
AC_PROG_CC

dnl AC_OPENMP sets the variable OPENMP_CFLAGS to the compiler
dnl flags needed for supporting OpenMP. Set to empty if (a) the 
dnl compiler already supports OpenMP, (b) if it has no way to
dnl activate OpenMP support, or if the user overrides it via
dnl "./configure --disable-openmp".
AC_OPENMP

dnl If we need to pick up SQLite3.
dnl https://www.gnu.org/software/autoconf-archive/ax_lib_sqlite3.html.
m4_include([m4/ax_lib_sqlite3.m4])
AX_LIB_SQLITE3

dnl If we need to pick up Zlib ...
dnl https://www.gnu.org/software/autoconf-archive/ax_check_zlib.html.
m4_include([m4/ax_check_zlib.m4])
AX_CHECK_ZLIB(,[
bld=$(tput bold)
red=$(tput setaf 1)
grn=$(tput setaf 2)
yel=$(tput setaf 3)
clr=$(tput sgr0)
echo -e "${bld}${yel}Configuring without Zlib support, use --with-zlib=<zlib_home> if needed.${clr}"
])

dnl Process Makefile.in to create Makefile
AC_CONFIG_FILES([Makefile])

AC_OUTPUT
