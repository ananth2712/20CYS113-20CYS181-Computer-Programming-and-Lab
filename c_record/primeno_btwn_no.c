#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    generate_prime(a,b);
}

void generate_prime(int a,int b){
    int k = b-a,i,check;
    int it = a;
    int val[k];
    for(i=0;i<k;i++){
        val[i]=a;
        a=a+1;
    }
    printf("Prime numbers between %d and %d are: ",it,b);
    for(i=0;i<k;i++){
        check=isprime(val[i]);
        if (check==1){
            printf("%d ",val[i]);
        }
    }
}

int isprime(int a){
    int ans=1,i;
    for(i=1;i<a;i++){
        if (a%i==0){
            ans=ans+1;
        }
    }
    if (ans==2){
        return 1;
    }
    else{
        return 0;
    }
}