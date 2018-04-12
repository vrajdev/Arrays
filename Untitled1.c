#include<stdio.h>
#include<string.h>
int main (void)
{
char names [25];
char *p;
int i;
p= names;
printf("\n Enter Your Full Name ");
gets(names);
//n=(char**) malloc(names);
for (i=0; i<names[i]!='\0'; i=i+1)
{
if (names[i]>='a'&&names[i]<='z')
names[i]=names[i]-32;
}

printf("%s",p);
printf("\n i=%d", i);
return (0);

}
