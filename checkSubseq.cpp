/*
 Check if String b is subsequence of String a
 
 Example 1:
 Input:
 String a: abcde
 String b: ace
 
 Output: true
 
 
 Example 2:
 Input:
 String a: abcde
 String b: aec
 
 Output: false
 
 
*/

#include <bits/stdc++.h>      //header file to implement stl
using namespace std;

bool checkSubSeq(string a, string b)      // function to check if b is a subsequence of a
{
    int n=a.length();    // find the length of string a
    int m=b.length();    // find the length of string b
    int j=0;      // variable to traverse string b
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[j])       // check if character in string b matches characters in string a 
        j++;                 // if match is found then check fpor the next character of string b 
    }
    return (j==m);    // check if the length of ther matching characters equals to the length of string b
}

int main()
{
    string a = "abcde";
    string b = "aec";
    
    if(checkSubSeq(a,b))       //Function Call
    {
        cout<<b<<" is a subsequence of "<<a;     // if checkSubSeq function returns true
    }
    else
    {
        cout<<b<<" is not a subsequence of "<<a;    // if checkSubSeq function returns false
    }

    return 0;
}



// Time Complexity: O(N)
//Space Complexity: O(1)
