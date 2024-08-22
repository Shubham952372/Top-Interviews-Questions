#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &arr,int n)
{
    int idxpos = 0,idxneg = 1;
    vector<int>res(n);
    for(int i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            res[idxneg] = arr[i];
            idxneg+=2;
        }
        else 
        {
            res[idxpos] = arr[i];
            idxpos+=2;
        }
    }
    if(n%2!=0)
    {
        res.push_back(arr[n-1]);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> ans = solution(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
