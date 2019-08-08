#include <bits/stdc++.h>
using namespace std;
int dis(int n,int k)
{
    if(n-(n*k/100)==0)
    return n;
    else
    return dis(n-(n*k/100),k);
}
int main()
{
   int x,m;
   scanf("%d%d",&x,&m);
   dis(x,m);
   return 0;
}
