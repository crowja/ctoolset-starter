#ifndef XXX_OPTIONS_H
#define XXX_OPTIONS_H

struct XXX_options {
   char     *appname;
   char     *appvers;
   char     *fname;                         /* input file name, if any */
   unsigned  help_flag;
   char     *prefix;
   unsigned  quiet_flag;
   unsigned  verbosity;
   unsigned  version_flag;
   char    **extras;
};

struct XXX_options *XXX_options_new(void);
void      XXX_options_free(struct XXX_options **pp);
void      XXX_options_help_msg(struct XXX_options *p, FILE *out);
void      XXX_options_parse(struct XXX_options *p, int argc, char *argv[]);

#endif
