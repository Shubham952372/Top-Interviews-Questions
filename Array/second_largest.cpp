#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(v[i] > largest)
        {
            second_largest = largest;
            largest = v[i];
        }
        else if(v[i] > second_largest && v[i] != largest)
        {
            second_largest = v[i];
        }

    }

    cout<<largest<<" "<<second_largest;
}