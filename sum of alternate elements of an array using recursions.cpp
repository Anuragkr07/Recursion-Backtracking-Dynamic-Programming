#include<bits/stdc++.h>
using namespace std;

int calcSum(int *arr,int n)
{
    
    if(n==0)
        return 0;
    else if (n==1)
        return arr[0];
     
       int sum= arr[0]+calcSum(arr+2,n-2);
       return sum;
    
    
    
}

int main()
{
    int n,a[20];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"The sum of alternate of this array is : "<<calcSum(a,n);
    return 0;
}
