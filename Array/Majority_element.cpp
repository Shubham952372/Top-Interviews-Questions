#include<bits/stdc++.h>
using namespace std;

int major(vector<int> &v)
{
   int n = v.size();
   int c=0;
   int ele;
   for(int i=0;i<n;i++)
   {
        if(c==0)
        {
            c=1;
            ele = v[i];
        }
        else if(v[i] == ele)
        {
            c++;
        }
        else{
            c--;
        }
   }

   int cnt = 0;
   for(int i=0;i<n;i++)
   {
      if(ele == v[i])
      {
        cnt++;
      }
   }

   if(cnt > n/2)
   {
    return ele;
   }

   return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int x = major(v);
    cout<<x<<endl;
}

