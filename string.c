#include<stdio.h>
#include<stdlib.h>
main(){
char *a;
a=malloc(1000000);
scanf("%s",a);
strrev(a);
printf("%s",a);
}
