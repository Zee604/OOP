#include<iostream>
using namespace std;
class a
{
    int i,n,d,sn,sd,cond;
public:
    void getdata()
    {
        cout<<"Enter the numerator"<<endl;
        cin>>n;
        cout<<"Enter the denominator"<<endl;
        cin>>d;
    }
    void operator+(a a1)
    {
        if(a1.d!=d)
        {
        sn=(a1.n*d)+(n*a1.d);
        sd=(a1.d)*(d);
        }
        else
        {
            sn=a1.n+n;
            sd=a1.d;
        }
        if(sn>sd)
        {
            cond=sd;
        }
        else if(sd>sn)
        {
            cond=sn;
        }
    }
    void sum()
    {

        for(i=2;i<=cond;i++)
        {

            if(sn%i==0 && sd%i==0)
            {
                sn=sn/i;
                sd=sd/i;
            }
        }

        cout<<"Sum is "<<sn<<"/"<<sd<<endl;
    }

    a operator-(a a1)
    {
        a a3;
         if(a1.d!=d)
        {
        a3.sn=(a1.n*d)-(n*a1.d);
        a3.sd=(a1.d)*(d);
        }
        else
        {
            a3.sn=a1.n-n;
            a3.sd=a1.d;
        }
        return a3;


    }
    void sub()
    {
        if(sn>sd)
        {
            cond=sd;
        }
        else if(sd>sn)
        {
            cond=sn;
        }
         for(i=2;i<=cond;i++)
        {

            if(sn%i==0 && sd%i==0)
            {
                sn=sn/i;
                sd=sd/i;
          }
        }
        cout<<"Subtraction is "<<sn<<"/"<<sd<<endl;
    }
    a operator /(a a1)
    {
        a a4;
        a4.sn=a1.n*d;
        a4.sd=a1.d*n;
        return a4;
    }
    void div()
    {
         if(sn>sd)
        {
            cond=sd;
        }
        else if(sd>sn)
        {
            cond=sn;
        }
        else if(sn==sd)
        {
            sn=1;
            sd=1;
        }
         for(i=2;i<=cond;i++)
        {

            if(sn%i==0 && sd%i==0)
            {
                sn=sn/i;
                sd=sd/i;
            }

    }

    cout<<"Division is "<<sn<<"/"<<sd<<endl;
    }

    a operator*(a a1)
    {
        a a5;
        a5.sn=a1.n*n;
        a5.sd=a1.d*d;
        return a5;

    }

    void mul()
    {
        if(sn>sd)
        {
            cond=sd;
        }
        else if(sd>sn)
        {
            cond=sn;
        }
         for(i=2;i<=cond;i++)
        {

            if(sn%i==0 && sd%i==0)
            {
                sn=sn/i;
                sd=sd/i;
          }
        }
        cout<<"Multiplication - "<<sn<<"/"<<sd<<endl;
    }

};
int main()
{
    a a1,a2,a3,a4,a5,a6;
    a1.getdata();
    a2.getdata();

    a2+(a1);
    a2.sum();

    a3=a2-(a1);
    a3.sub();

    a4=a2/(a1);
    a4.div();

    a5=a2*(a1);
    a5.mul();

    return 0;
}
