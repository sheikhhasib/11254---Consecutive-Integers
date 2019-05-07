#include<stdio.h>
#include<math.h>
int main()
{
    int s,p,d;
    while(scanf("%d",&s)==1, s!=-1){
        for(p = (int)sqrt(2*s); p>0; p--){
            if((2*s+p-p*p)%(2*p)==0){
                d = (2*s+p-p*p)/(2*p);
                break;
            }
        }
        printf("%d = %d + ... + %d\n",s,d,d+p-1);
    }
    return  0;
}
