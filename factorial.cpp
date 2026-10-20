#include<bits/stdc++.h>
using namespace std;
long long f(int n)
{
    if (n<0) return -1;
    long long result=1;
    for (int i=1;i<=n;i++)
    {
        result *=i;
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    if (n>20) 
    {
        cout<<"数字过大，会溢出"<<endl;
    }    else
    cout<<f(n)<<endl;
    system("pause");
    return 0;
}