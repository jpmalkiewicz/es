/* sigmsgs.h -- interface to signal name and message date ($Revision: 1.2 $) */

typedef struct {
	int sig;
	const char *name, *msg;
} Sigmsgs;
extern const Sigmsgs signals[];

extern const int nsignals;
