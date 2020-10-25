using namespace std;
int main()
{int t;
 cin>>t;
 while(t--)
 {int n;
 cin>>n;
 int a[n];
 int i;
 for(i=0;i<n;i++)
  cin>>a[i];
  int sum=0;int ans=INT_MIN;
  for(i=0;i<n;i++)
   {sum+=a[i];ans=max(ans,sum);
   if(sum<0)
     sum=0;}
     cout<<ans<<endl;}}
   
   
