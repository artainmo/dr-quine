#include <stdio.h>
//A quine is a program that outputs to the console its content
void quine(){return;}
int main()
{
//This is astonishing!
char *str = "#include <stdio.h>%1$c//A quine is a program that outputs to the console its content%1$cvoid quine(){return;}%1$cint main()%1$c{%1$c//This is astonishing!%1$cchar *str = %2$c%3$s%2$c;%1$cprintf(str, 34, str, 34);%1$c}%1$c";
printf(str, 10, 34, str);
}
