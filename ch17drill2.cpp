#include<std_lib_facilities.h>
#include<vector>
using namespace std;


void print_array(ostream& os, int* a, int n)
 {
     for(int i=0;i<n;i++)
     {
         os<<i<<". elem:"<<a[i]<<endl;


     }
 }



 int main()
 {
     int*p=new int(7);
     int *p1=p;
   cout<<&p1<<endl;
   cout<<*p1<<endl;
   delete[]p ;
   cout<<"------------------------------"<<endl;

   int *r=new int[7];
   int *p2=r;
   for(int i=0;i<7;i++)
   {
       r[i]=pow(2,i);
       cout<<&p2[i]<<"-->"<<p2[i]<<endl;
   }
cout<<"-------------------------------"<<endl;
int* p3 = p2; //p3=r
p2 = p1;//r=p1
p2 = p3;//r=p3
    cout <<"p1= "<<&p1<<endl;
    cout <<"*p1= "<<*p1<<endl;
    cout <<"p2= "<< &p2<<endl;
    cout <<"*p2= "<<*p2<<endl;
    delete[] p2;
    delete[] r;
    cout<<"-------------------------------"<<endl;
p1=new int[10];
p2=new int[10];
for(int i=0;i<10;i++)
{
    p1[i]=pow(2,i);
}


for(int i=0;i<10;i++)
{
    p2[i]=p1[i];
}

print_array(cout,p1,10);
cout<<"-------------------------------"<<endl;
vector<int> v1;
vector<int> v2;
for (int i = 0; i<10; ++i)
{
    v1.push_back(pow(2,i));
}


for (int i = 0; i<v1.size(); ++i)
{
    v2.push_back(v1[i]);
}
for(int i=0;i<v2.size();i++)
{
    cout<<i<<".elem="<<v2[i]<<endl;
}





 }
