#include<stdio.h>
char get_int(char string[10]){
    int n;
    printf("%s\n",string);
    scanf("%d",&n);
    return n;
}
int main (){
    int n;
    n = get_int("what is the number : ");
    printf("%d is the number \n",n);
    return 0;
}
