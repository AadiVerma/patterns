#include<stdio.h>
 int main(){
int a;
scanf("%d",&a);
for(int i=1;i<=(a+1)/2;i++){
    for(int j=1;j<=(a+1)/2-i;j++){
        printf(" ");
    }for(int l=1;l<=2*i-1;l++){
        printf("%c",'*');
    }printf("\n");}
    for(int k=1;k<(a+1)/2;k++){
        for(int i=1;i<=k;i++){
            printf(" ");
        }for(int l=(a+1)/2-k;l>=1;l--){
             printf("%c",'*');
        }for(int m=(a+1)/2-k;m>=2;m--){
printf("%c",'*');
        }printf("\n");    }
}