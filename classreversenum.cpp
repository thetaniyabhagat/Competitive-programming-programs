#include<iostream>
using namespace std;
class reverse
{
    private:
    int n;
    public:
    void getdata();
    void reverse_num();
   
};
void reverse::getdata()
{
 cout<<"ENTER A NUMBER = ";
 cin>>n;
}
void reverse::reverse_num()
{
 if(n<0)
 {
    n=-n;
 int i,r,rev=0;
  for(i=n;i>0;rev=rev*10+r)
 {
     r=i%10;
     i=i/10;
 }

    cout<<"REVERSE OF NUMBER="<<rev<<"-"<<endl;
    if (rev==n)
    cout<<"TRUE"<< endl;
    else
    cout<<"FALSE"<< endl;
}
else if(n>0)
{
   int i,r,rev=0;
  for(i=n;i>0;rev=rev*10+r)
 {
     r=i%10;
     i=i/10;
 }

    cout<<"REVERSE OF NUMBER="<<rev<<endl;
 if (rev==n)
 cout<<"TRUE"<< endl;
 else
 cout<<"FALSE"<< endl;
}
}

int main()
{
    reverse nn;
    nn.getdata();
    nn.reverse_num();
   
    return 0;
}
