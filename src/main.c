/**
 *  @file main.c
 *  @version 0.0.0
 *  @date
 *  @copyright
 *  @license Unlicense <http://unlicense.org/>
 *  @brief FIXME
 *  @details FIXME
 */

#ifdef VERSION
#undef VERSION
#endif
#define VERSION "0.0.0"

#ifdef  HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
#include "XXX-main.h"
#include "colormsg.h"

#ifdef  IS_NULL
#undef  IS_NULL
#endif
#define IS_NULL(p)   ((NULL == (p)) ? (1) : (0))

#ifdef  FREE
#undef  FREE
#endif
#define FREE(p)      ((NULL == (p)) ? (0) : (free((p)), (p) = NULL))

static int
is_in_tuple(char *query, ...)
{
   va_list   ap;
   char     *s;

   if (query == NULL || query[0] == '\0')
      return 0;

   va_start(ap, query);
   while ((s = va_arg(ap, char *)))
      if        (strcmp(query, s) == 0)
         return 1;
   va_end(ap);

   return 0;
}

static void
main_usage(FILE *fp)
{
#define msg \
"USAGE: my-toolkit [OPTIONS]\n" \
"OPTIONS:\n" \
"  -h, --help     Print this help message and exit.\n" \
"  -V, --version  Print the version number and exit.\n\n" \
"OR     my-toolkit <toolname> [OPTIONS] ...\n" \
"where <toolname> is:\n" \
"  abc            FYI abc\n" \
"  xyz            FYI xyz"
   fprintf(fp, "%s\n", msg);
}

int
main(int argc, char *argv[])
{
   if (argc == 1) {
      main_usage(stdout);
      exit(0);
   }

   if (is_in_tuple(argv[1], "-V", "--version")) {
      printf("my-toolkit %s\n", VERSION);
      return 0;
   }

   if (is_in_tuple(argv[1], "-h", "--help")) {
      main_usage(stdout);
      return 0;
   }

   if (strcmp(argv[1], "XXX") == 0) {
      int       rc = XXX_main(argc - 1, argv + 1);
      return rc;
   }
   else if (strcmp(argv[1], "YYY") == 0) {
      printf("Need to call YYY_main()\n");
   }
   else {
      fprintf(stderr, COLOR_MSG_ERROR " Unknown argument \'%s\' to my-toolkit\n",
              argv[1]);
      exit(1);
   }
}

#undef IS_NULL
#undef FREE
