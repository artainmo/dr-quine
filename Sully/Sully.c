#include <stdio.h>
#include <stdlib.h>
int main() {
int number = 5;
char *name_next_quine;
char *cmd;
if (number < 1)
return(0);
asprintf(&name_next_quine, "Sully_%d.c", number - 1);
FILE *fp = fopen(name_next_quine, "w");
char *s = "#include <stdio.h>%1$c#include <stdlib.h>%1$cint main() {%1$cint number = %4$d;%1$cchar *name_next_quine;%1$cchar *cmd;%1$cif (number < 1)%1$creturn(0);%1$casprintf(&name_next_quine, %2$cSully_%%d.c%2$c, number - 1);%1$cFILE *fp = fopen(name_next_quine, %2$cw%2$c);%1$cchar *s = %2$c%3$s%2$c;%1$cfprintf(fp, s, 10, 34, s, number - 1);%1$cfclose(fp);%1$casprintf(&cmd, %2$cgcc %%s -o Sully && ./Sully%2$c, name_next_quine);%1$csystem(cmd);%1$cfree(name_next_quine);%1$cfree(cmd);%1$c}%1$c";
fprintf(fp, s, 10, 34, s, number - 1);
fclose(fp);
asprintf(&cmd, "gcc %s -o Sully && ./Sully", name_next_quine);
system(cmd);
free(name_next_quine);
free(cmd);
}
