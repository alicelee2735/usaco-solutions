#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int t1(int l,int r)
{
 if(l==r) return a[l];
 int ret=0;
 for(int i=l+1;i<=r;i++) if(a[i]>a[i-1]) ret+=a[i]-a[i-1];
 return a[l]+ret;
}
int t2(int l,int r)
{
 if(l==r) return -a[l];
 int ret=0;
 for(int i=l+1;i<=r;i++) if(a[i]<a[i-1]) ret+=a[i-1]-a[i];
 return -a[l]+ret;
}
int read(){
 bool flag=false;
 int num=0;
 char c=getchar();
 while(c<'0'||c>'9')
 {
  if(c=='-')
  {
   flag=true;
  }
  c=getchar();
 }
 while(c>='0'&&c<='9')
 {
  num=num*10+(c-'0');
  c=getchar();
 }
 if(flag)
  return -num;
 return num;
}
int main()
{
 scanf("%d",&n);
 for(int i=1;i<=n;i++)a[i]=read();
 for(int i=1;i<=n;i++)
 {
  int b=read();
  a[i]-=b;
 }
 int ans=0;
 int l=1,r=1;
 while(l<=n)
 {
  if(a[l]<=0) l++;
  else
  {
   r=l;
   while(a[r]>0)r++;
   ans+=t1(l,r-1);
   l=r;
  }
 }
 l=1,r=1;
 while(l<=n)
 {
  if(a[l]>=0) l++;
  else
  {
   r=l;
   while(a[r]<0)r++;
   ans+=t2(l,r-1);
   l=r;
  }
 }
 
 printf("%d",ans);
 return 0;
}
