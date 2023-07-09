#include <stdio.h>
#include <math.h>
int main(){
    int a,k,ans=0,i,j;
    scanf("%d",&a);
    if (a<0){
        a=a*-1;    
    }
    
    k=log10(a)+1;
    int val[k];
    for(i=0;i<k;i++){
        val[i]=a%10;
        a=a/10;
    }
    for(i=0;i<k/2;i++){
            for(j=k/2;j<k;j++){
                if (val[i]==val[j]){
                    ans=ans+1;
                    break;
                }
                else{
                    continue;
                }
            }
        }
        if((k/2)==ans){
            printf("Is a palindrome.");
        }
        else{
            printf("Is not a palindrome.");
        }
return 0;
}