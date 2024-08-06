#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int num;
cin>>num;
int bit,ans=0,i=0;
while(num!=0)
{
    bit=num & 1;
    ans=bit*pow(10,i)+ans;
    num=num>>1;
    i++;
}
cout<<ans;


return 0;
}