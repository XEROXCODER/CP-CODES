#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (c>b){
            printf("%d %d %d",c,b,a);
        }
        else{
            if (c<a){
                printf("%d %d %d",b,c,a);
            }
            else{
                printf("%d %d %d",b,a,c);
            }
        }
    }
    else{
        if(c<a){
            printf("%d %d %d",c,a,b);
        }
        else{
            if(c<b){
                printf("%d %d %d",a,c,b);
            }
            else{
                printf("%d %d %d",a,b,c);
            }
        }
    }

    return 0;

}
