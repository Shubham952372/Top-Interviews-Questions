#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &v,int n)
{
    //find the break point
    int ind;
    for(int i=n-2;i>=0;i--)
    {
        if(v[i] < v[i+1])
        {
            ind = i;
            break;
        }
    }

    //interchanging the point with minimum value

    for(int i=n-1;i>=ind;i--)
    {
        if(v[i] > v[ind])
        {
            swap(v[i],v[ind]);
            break;
        }
    }

    //sort the array after breakpoint

    sort(v.begin()+ind+1,v.end());
}

int main(){
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
}