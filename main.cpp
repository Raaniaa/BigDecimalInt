#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class BigDecimalInt
{
    protected:
   // int num1;
    public:
    string s1;

    string getstring()
    {
        return s1;
    }
    void setstring(string s2)
    {
        s1=s2;
    }
    BigDecimalInt (string decStr){s1=decStr;}
    BigDecimalInt (int decInt); // Initialize from integer
    BigDecimalInt operator+ ();

};

BigDecimalInt operator+ (BigDecimalInt firstDec,BigDecimalInt secDec)
{
    int size,diff,carry=0,x,y,z,counter=0;
    BigDecimalInt temp("");
    string c1,c2,result,smaller,bigger;
    c1=firstDec.getstring();
    c2=secDec.getstring();
    if(c1.length()<c2.length())
        {
            smaller = c1;
            bigger = c2;
        }
else
       {
           smaller = c2;
           bigger = c1;
       }
    diff = bigger.length()-smaller.length();
    size = smaller.length();
    for(int i=size-1;i>=0;i--)
        {
            y = int(bigger[i+diff]);
            y-=48;
            x = int(smaller[i]);
                x-=48;
            z = x+y+carry;
            if(z<=9)
            {
                result+=char(z+48);
                carry = 0;
            }
            else
            {
                result+=char(z+38);
                carry = 1;
            }
        }
    while((carry==1)&&(counter<bigger.length()))
    {
        counter = size+1;
        x = int(bigger[counter])-48+carry;
        if(x<=9)
            {
                result+=char(x+48);
                carry = 0;
            }
        else
        {
            result+=char(x+38);
            carry = 1;
        }
        counter++;
    }
    if(counter==bigger.length())
        {
            if(carry==1)
            result+=char(49);
        }
    else
        for(int o=size;o<=0;o++)
            result+=bigger[o];

    temp.s1=result;

    return temp;
}
int main()
{
     string k1,k2;

    cout<<"Enter first num : \n";
    cin>>k1;
    BigDecimalInt c1(k1);
    cout<<"Enter second num : \n";
    cin>>k2;
    BigDecimalInt c2(k2);

    BigDecimalInt c3("");

    c3=c1+c2;
    cout<<c3.s1;

    return 0;
}
