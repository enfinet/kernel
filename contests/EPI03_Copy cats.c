#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s\n",s);
    int i=0;
    char ch;
    scanf("%c",&ch);
    int count=0;
    while(s[i]) {
        if(s[i]==ch)
        count++;
        i++;
    }
    printf("%d\n",count);
    return 0;
}
