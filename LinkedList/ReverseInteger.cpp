// Here 0 is returned if ans exceeds the integer range of [-2 ki power 31 , 2 ki power 31 -1]
#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main() {
    int x , ans =0, digit=0 ;
    cout<<"Enter the number to be Reeversed.";
    cin>>x;

    while(x!=0)
    {   
    digit = x % 10;
    //ans = (digit*pow(10,i)+ans);
    if( ( INT_MAX/10  < ans) || (INT_MIN/10 > ans))
    {
        return 0;
    }
    ans = (ans*10)+digit;
    x = x/10;
    }

    cout<<"Answer is = "<<ans<< endl;
}