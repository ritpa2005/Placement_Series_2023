#include <iostream>
using namespace std;

int main(){
    int n=13,c=0,a=1,b=1;
    printf("The Fibonacci series is: \n");
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}