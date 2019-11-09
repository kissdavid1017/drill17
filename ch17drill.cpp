#include<std_lib_facilities.h>
using namespace std;
 void print_array10(ostream& os, int* a)
 {
     for(int i=0;i<10;i++)
     {
         os<<i<<". elem:"<<a[i]<<endl;


     }
 }
 void print_array(ostream& os, int* a, int n)
 {
     for(int i=0;i<n;i++)
     {
         os<<i<<". elem:"<<a[i]<<endl;


     }
 }

 void print_vector(ostream& os, vector<int> v)
  {
    for (int i=0; i<v.size(); ++i)
        os<<i<<". elem:"<<v[i] << endl;
  }




int main()
{
    int*p=new int[10];
    for(int i=0;i<10;i++)
    {
        cout<<"A(z):"<<i<<". ertek:"<<p[i]<<endl;
    }
    delete[] p;
    cout<<endl;

    int*q=new int[10];
    print_array10(cout,q);
    delete[] q;
cout<<endl;

    int*r=new int[10];
    for(int i=0;i<10;i++)
    {
        r[i]=100+i;
        cout<<"A(z):"<<i<<". ertek:"<<r[i]<<endl;
    }
    delete[]r;
cout<<endl;

    int*s=new int[11];
    print_array(cout,s,11);
    delete[] s;
    cout<<endl;

    int* t=new int[20];

    for (int i = 0; i<20; ++i)
           t[i] = 100 + i;

    print_array(cout,t,20);

    delete[] t;
    cout<<endl;

    vector<int> v;

    for (int i = 0; i<10; ++i)
        v.push_back(100+i);

    print_vector(cout,v);
   // delete[]v;

    cout << endl;
}
