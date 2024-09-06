#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt1=0,cnt2=0;
    int ele1,ele2;
    for(int i=0;i<n;i++)//for finding the ele1 and ele2 after that wew ill check the majority.
    {
        if(cnt1 == 0 && arr[i]!=ele2)
        {
            cnt1 = 1;
            ele1=arr[i];
        }
        else if(cnt2 == 0 && arr[i]!=ele1)
        {
            cnt2 = 1;
            ele2=arr[i];
        }

        else if(ele1 == arr[i])
        {
            cnt1++;
        }
        else if(ele2 == arr[i])
        {
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

    //now we will check the which two element are majority.
    vector<int>ls;
    int c1=0,c2=0;
    for(int i=0;i<arr.size();i++)
    {
        if(ele1 == arr[i]) c1++;
        if(ele2 == arr[i]) c2++;
    }
    int mini = (int)(n/3) + 1;
    if(c1>=mini)
    {
        ls.push_back(ele1);
    }
    if(c2>=mini)
    {
        ls.push_back(ele2);
    }
    sort(ls.begin(),ls.end());


    for(int i=0;i<ls.size();i++)
    {
        cout<<ls[i];
    }

}