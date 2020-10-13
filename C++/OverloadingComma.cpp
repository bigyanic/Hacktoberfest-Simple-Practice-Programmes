#include<iostream>
using namespace std;
class comma
{

    int n;
    public:
	void getel()
    {
		cout<<"enter n:";
		cin>>n;
    }
    comma operator ,(comma q);
};
comma comma::operator,(comma q)
{
    n=q.n;
    return *this;
}
int main()
{
	comma ob2,ob1,ob;
    cout<<"'ob1'\n";
	ob1.getel();
    cout<<"'ob2'\n";
    ob2.getel();
	ob=ob1,ob2;
	cout<<"\n' ob = ob1, ob2 ' gives value of 'n' in 'ob' as = "<<ob.n<<"\n";
    return 0;
}
