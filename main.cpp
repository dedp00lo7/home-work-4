#include <iostream>
using namespace std;
int main()
{

    //задание 1
    int n;
    cin>>n;
    if (n>9&&n<21)
    {cout<<"true"<<endl;}
    else
    {cout<<"false"<<endl;    }
//    задание 2
    int k,b;
    cin>>k>>b;
    if (k==10 && b==10)
    {cout<<"true"<<endl;}
    else if (k+b==10)
    {cout<<"true"<<endl;}
    else
    {cout<<"false"<<endl;}
    
//    задание 3
    for(int i=1;i<50;i+=2)
    {cout<<i<<endl;}

 
    int PrimeNumber;
    cin>>PrimeNumber;
    bool prime = true;
    for (int i = 2; i < PrimeNumber; ++i)
    {
        if (PrimeNumber % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime==true)
        cout << "Number is Prime!" << endl;
    else
        cout << "Number isn't Prime!" <<endl;

//    задание 4
    int year;
    cin>>year;
    if (year%4==0)
    {
    if (year%100!=0 || year==400)
    {cout<<"God Visokosniy "<<endl;}
        
        
    }
        
    else
    {cout<<"Ne Visokosniy"<<endl;}

        return 0;
    }
