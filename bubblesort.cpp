#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
vector<int>v{10,1,7,6,14,9};
int n=v.size();
for(int round=1;round<n;round++)
{
    bool swapped=false;
    for(int j=0;j<n-round;j++)
    {
        if(v[j]>v[j+1])
        {
            swapped=true;
            swap(v[j],v[j+1]);
        }
    }
    if(swapped == false)
    {
        break;
    }
}
for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}

return 0;
}