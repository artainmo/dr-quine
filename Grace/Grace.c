#include <stdio.h>
/*
see result in Grace_kid.c
*/
#define NEVER_MIND 0
#define start main
#define F int start() {FILE *fp = fopen("Grace_kid.c", "w"); char *s = "#include <stdio.h>%1$c/*%1$csee result in Grace_kid.c%1$c*/%1$c#define NEVER_MIND 0%1$c#define start main%1$c#define F int start() {FILE *fp = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c); char *s = %2$c%3$s%2$c; fprintf(fp, s, 10, 34, s); fclose(fp);}%1$cF%1$c"; fprintf(fp, s, 10, 34, s); fclose(fp);}
F
