#include <iostream>
using namespace std;
int main(){
        int n,temp,r=0;
        cin>>n;
        
        while(n>0){
        temp=n%10;
        r=r*10+temp;
        n=n/10;
        }
     cout<<r<<endl;
}
