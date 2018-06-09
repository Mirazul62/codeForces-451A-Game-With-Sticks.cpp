#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, ans=0;
    cin>>n>>m;
     while(n!=0 && m!=0)
     {
         n--;
         m--;
         ans++;

     }
    if(ans%2!=0)
        cout<< "Akshat";
    else
        cout<<"Malvika";
}
