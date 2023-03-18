#include <stdio.h>
int main(void)
{
char c = 'a';
while(c<='z'){
if(c=='q' || c == 'e')
{
c++;
continue;
}else{
putchar(c);
c++;
}}
putchar('\n');
return(0);
}
