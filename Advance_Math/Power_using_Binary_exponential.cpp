#include<bits/stdc++.h>
using namespace std;
double power(double x,int n)
{
    double ans = 1.0;
    long long nn = n;
    if(nn < 0) nn = -1*nn;
    while(nn)
    {
        if(nn%2)
        {
            ans = ans * x;
            nn = nn -1;
        }
        else
        {
            x = x * x;
            nn = nn/2;
        }
    } 
    if(n<0) ans = (double)(1.0)/(double)(ans);
    return ans;
}

int main(){
    double x;
    int n;
    cin>>x;
    cin>>n;

    double ans = power(x,n);
    cout<<ans<<endl;
}