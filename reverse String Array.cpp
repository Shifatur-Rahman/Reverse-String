#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s[] = {"h","e","l","l","o"};
    int n = sizeof(s)/sizeof(s[0]);
    int i;
    for(i=0; i<n/2; i++){
        string temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }

    for(i=0; i<n; i++){
        cout<<s[i]<<" ";
    }



}
