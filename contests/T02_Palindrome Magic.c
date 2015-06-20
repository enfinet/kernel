#include<stdio.h>
#include<math.h>
#include<string.h>

char out[20];

void reverseString(char *dest,char *src){
 char *iter=src;
 while (*iter) iter++;
 while (iter!=src){
  iter--;
  *dest=*iter;
   dest++;
 }
 *dest='\0';
}

char *pal(int n,int len){
  char tmp[len/2+3];
  sprintf(out,"%i",n+((int)pow(10.0,((len+1)/2)-1))-1);
  reverseString(tmp,out);
  strcat(out,tmp+len%2);
return out;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,k;
        scanf("%d%d",&n,&k);
        printf("%s\n",pal(k,n));
    }
    return 0;
}
