#include <iostream>
using namespace std;

int main(){
    float ph;
    cin>>ph;
    if(ph>7) cout<<"Alkaline\n";
    else if(ph<7) cout<<"Acidic\n";
    else cout<<"Neutral\n";
    return 0;
}