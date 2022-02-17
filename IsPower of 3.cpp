#include<bits/stdc++.h>
using namespace std;

bool power(int n)
{
    if(n==1)
        return true;
    else if(n<=0 || n%3!=0)
        return false;
    else 
        return power(n/3);
}

int main()
{
  
    int num;
    cin>>num;
    if(power(num))
        cout<<num<<" is a power of 3";
    else
        cout<<num<<" is Not a power of 3";
    return 0;
}
