
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter one numbers";
    cin>>n;
    int mask =0;
    int m = n;

//EDGE CASE
    if(n == 0){
        return 1;
    }


    while(m!=0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout<<"Answer is "<< ans<< endl;
    return 0;
}