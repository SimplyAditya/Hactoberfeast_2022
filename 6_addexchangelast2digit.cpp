#include<iostream>
using namespace std;

int main()
{
    int p,pn,lt,sum;
    cout<<"Enter how many numbers you have = ";
    cin>>p;
    sum = 0;
    for (int i = 1; i <= p;i++)
	{
        cout<<"Enter number"<<endl;
        cin>>pn;
        lt = ((pn/100)*100)+((pn%10)*10)+(pn%100/10);

        sum = sum+lt;
    }
    cout<<"Sum of switching of last two digits = "<<sum;
    return 0;
}

