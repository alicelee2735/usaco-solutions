#include<iostream>
using namespace std;
char s[55][55];
bool heng(int k,int l,int r)
{
 for(int i=l;i<=r;i++) if(s[k][i]=='H')
 return 0;
 return 1;
}
bool shu(int k,int u,int d)
{
 for(int i=u;i<=d;i++) if(s[i][k]=='H') return 0;
 return 1;
} 
int main()
{
 int T;
 cin>>T;
 while(T--)
 {
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++)
   scanf("%s",s[i]+1);
  int ans=0; 
  if(k>=1)
  {
   if(heng(1,1,n)&&shu(n,1,n))ans++;
   if(shu(1,1,n)&&heng(n,1,n))ans++;
  }
  if(k>=2)
  {
   for(int i=2;i<n;i++)
   {
    if(heng(1,1,i)&&shu(i,1,n)&&heng(n,i,n))ans++;
    if(shu(1,1,i)&&heng(i,1,n)&&shu(n,i,n))ans++;
   }
  }
  if(k>=3)
  {
   for(int i=2;i<n;i++)
   {  
    for(int j=2;j<n;j++)
    {
     if(heng(1,1,i)&&shu(i,1,j)&&heng(j,i,n)&&shu(n,j,n))ans++;
     if(shu(1,1,i)&&heng(i,1,j)&&shu(j,i,n)&&heng(n,j,n))ans++;
    }
   }
  }
  cout<<ans<<endl;
 }
 return 0;
}
