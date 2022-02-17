#include<bits/stdc++.h>
using namespace std;

bool power(int n)
{
    if(n==1)
        return true;
    else if(n<=0 || n%4!=0)
        return false;
    else 
        return power(n/4);
}

int main()
{
  
    int num;
    cin>>num;
    if(power(num))
        cout<<num<<" is a power of 4";
    else
        cout<<num<<" is Not a power of 4";
    return 0;
}
