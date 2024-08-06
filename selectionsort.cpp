#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
vector<int>v{5,4,3,2,1};
int n=v.size();
for(int i=0;i<n-1;i++)
{
    int minindex=i;
    for(int j=i+1;j<n;j++)
    {
        if(v[j]<v[minindex])
        {
            minindex=j;
        }
    }
    swap(v[minindex],v[i]);
}
for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
return 0;
}
