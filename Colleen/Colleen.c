#include <stdio.h>
/*
A quine is a program that outputs to the console its content
*/
void quine(){return;}
int main()
{
/*
This is astonishing!
*/
quine();
char *str = "#include <stdio.h>%1$c/*%1$cA quine is a program that outputs to the console its content%1$c*/%1$cvoid quine(){return;}%1$cint main()%1$c{%1$c/*%1$cThis is astonishing!%1$c*/%1$cquine();%1$cchar *str = %2$c%3$s%2$c;%1$cprintf(str, 10, 34, str);%1$c}%1$c";
printf(str, 10, 34, str);
}
