#include <iostream>
#include <conio.h>
#include <process.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.1415926535897932384626433832795

using namespace std;

void delay();
void logo();
void calc();
void sci_calc();
void wrong();
void root(int);
float fact(int);
float factorial(int);
void permut(int);
void t_ratio();
void logarithm();
void about();
void square();
void cube();
void nth_pow();
void reci();
void name();

int main()
{	logo();
    char c,q;
    system("cls");
main:
    sci_calc();
    cout<<"\nPress Enter to continue\n";
    cin.get(c);
    cin.get(q);
    goto main;
    return 0;
}
void wrong()
{
    cout<<"\n\aWrong choice Returning to main menu";
}
void calc()
{
    cout<<"\n\t\tWelcome to calculator";
    float a,b,result;
    unsigned int c,d;
    char o;
    system("cls");
    cout<<"\nEnter first number\n";
    cin>>a;
    cout<<"\nEnter operator(+,-,x,/,%)\n";
    cin>>o;
    cout<<"\nEnter second number\n";
    cin>>b;
    if(o=='+')
    {
        result=a+b;
        cout<<"\nAnswer "<<a<<o<<b<<"="<<result;
    }
    else if(o=='-')
    {
        result=a-b;
        cout<<"\nAnswer "<<a<<o<<b<<"="<<result;
    }
    else if(o=='x'||o=='X'||o=='*')
    {
        result=a+b;
        cout<<"\nAnswer "<<a<<o<<b<<"="<<result;
    }
    else if(o=='/')
    {
        if(b!=0)
            result=a/b;
        else
            cout<<"\n\aDenominator should not be equal to zero";
        cout<<"\nAnswer "<<a<<o<<b<<"="<<result;
    }
    else if(o=='%')
    {
        c=a;
        d=b;
        result=c%d;
        cout<<"\nAnswer "<<a<<o<<b<<"="<<result;
    }
    else
        cout<<"\n\aWrong operator returning to main menu";


}
void sci_calc()
{
	system("color 02");
    system("cls");
    int ch;
    cout<<"\n*************************************************";
    cout<<"\n*\tWelcome to scientific calculator\t*";
    cout<<"\n*************************************************";
    cout<<"\n* Enter your choice\t\t\t\t*";
    cout<<"\n* 0)Exit\t\t\t\t\t*";
    cout<<"\n* 1)Basic calculations\t\t\t\t*";
    cout<<"\n* 2)Root of quadratic equation ax^2+bx+c=0\t*";
    cout<<"\n* 3)Root of linear eqaution ax+b=0\t\t*";
    cout<<"\n* 4)Find n factorial(n!)\t\t\t*";
    cout<<"\n* 5)Find nCr\t\t\t\t\t*";
    cout<<"\n* 6)Find nPr\t\t\t\t\t*";
    cout<<"\n* 7)Find trigonometric ratios\t\t\t*";
    cout<<"\n* 8)Find logarithm\t\t\t\t*";
    cout<<"\n* 9)Solution for two linear equations\t\t*";
    cout<<"\n* 10)Find X^2\t\t\t\t\t*";
    cout<<"\n* 11)Find sruare root\t\t\t\t*";
    cout<<"\n* 12)Find x^3\t\t\t\t\t*";
    cout<<"\n* 13)Find cube root\t\t\t\t*";
    cout<<"\n* 14)Find x^n\t\t\t\t\t*";
    cout<<"\n* 15)Find nth root\t\t\t\t*";
    cout<<"\n* 16)Find 1/x\t\t\t\t\t*";
    cout<<"\n* 17)About\t\t\t\t\t*";
    cout<<"\n*************************************************\n";
    cin>>ch;
    if(ch==0)
        exit(0);
    else if(ch==1)
        calc();
    else if(ch==2)
        root(1);
    else if(ch==3)
        root(2);
    else if(ch==4)
        permut(1);
    else if(ch==5)
        permut(2);
    else if(ch==6)
        permut(3);
    else if(ch==7)
        t_ratio();
    else if(ch==8)
        logarithm();
    else if(ch==9)
        root(3);
    else if(ch==10)
        square();
    else if(ch==11)
        root(4);
    else if(ch==12)
        cube();
    else if(ch==13)
        root(5);
    else if(ch==14)
        nth_pow();
    else if(ch==15)
        root(6);
    else if(ch==16)
        reci();
    else if(ch==17)
        about();
    else
        cout<<"\n\aWrong choice..... Returning to main menu";
}
void root(int i)
{
    float a,b,c,root,root1,root2,delta;
    float a1,a2,b1,b2,c1,c2,x,y,n;
    int j,k;
    system("cls");
    if(i==2)
    {
        cout<<"\nEnter a\n";
        cin>>a;
        cout<<"\nEnter b\n";
        cin>>b;
        root=(-b)/a;
        k=(-b)/a;
        if(k==root||k==root+1)
            cout<<"\n Solution for "<<a<<"x+"<<b<<"=0 is "<<root;
        else
            cout<<"\n Solution for "<<a<<"x+"<<b<<"=0 is "<<-b<<"/"<<a;
    }
    else if(i==1)
    {
        cout<<"\nEnter a\n";
        cin>>a;
        cout<<"\nEnter b\n";
        cin>>b;
        cout<<"\nEnter c\n";
        cin>>c;
        delta=(b*b)-(4*a*c);
        if(delta>0)
        {
            root1=((-b)+sqrt(delta))/2;
            root2=((-b)-sqrt(delta))/2;
            cout<<"\nRoots are real and distinct";
            cout<<"\nRoot 1="<<root1;
            cout<<"\nRoot 2="<<root2;
        }
        else if(delta==0)
        {
            root=(-b)/2;
            cout<<"\nRoots are real and equal";
            cout<<"\nRoot ="<<root;
        }
        else if(delta<0)
        {
            cout<<"\nRoots imaginary";
            cout<<"\nRoot 1=("<<(-b)<<"+"<<sqrt(-delta)<<"i)/2";
            cout<<"\nRoot 2=("<<(-b)<<"-"<<sqrt(-delta)<<"i)/2";
            cout<<"\nWhere i is a complex number";
        }
    }
    else if(i==3)
    {
        cout<<"\nEnter a1\n";
        cin>>a1;
        cout<<"\nEnter b1\n";
        cin>>b1;
        cout<<"\nEnter c1\n";
        cin>>c1;
        cout<<"\nEnter a2\n";
        cin>>a2;
        cout<<"\nEnter b2\n";
        cin>>b2;
        cout<<"\nEnter c2\n";
        cin>>c2;
        if(a1/a2==b1/b2&&b1/b2==c1/c2)
            cout<<"\nBoth are equation of same line";
        else if(a1/a2==b1/b2)
            cout<<"\nBoth lines are parallel";
        else if(a1==c2&&b1==b2&&a2==c1)
        {
            x=1;
            y=(-a1-c1)/b1;
            cout<<"\nSolution for "<<a1<<"x+"<<b1<<"y+"<<c1;
            cout<<"=0 and "<<a2<<"x+"<<b2<<"y+"<<c2<<"=0 is:";
            cout<<"\n x = "<<x;
            cout<<"\n y = "<<y;
        }
        else
        {
            y=(a1*c2-a2*c1)/(a2*b1-a1*b2);
            k=(a1*c2-a2*c1)/(a2*b1-a1*b2);
            x=(b1*c2-b2*c1)/(b2*a1-b1*a1);
            j=(b1*c2-b2*c1)/(b2*a1-b1*a1);
            if((j==x||j==x+1)&&(k==y||k==y+1))
            {
                cout<<"\nSolution for "<<a1<<"x+"<<b1<<"y+"<<c1;
                cout<<"=0 and "<<a2<<"x+"<<b2<<"y+"<<c2<<"=0 is:";
                cout<<"\n x = "<<x;
                cout<<"\n y = "<<y;
            }
            else if(j==x||j==x+1)
            {
                cout<<"\nSolution for "<<a1<<"x+"<<b1<<"y+"<<c1;
                cout<<"=0 and "<<a2<<"x+"<<b2<<"y+"<<c2<<"=0 is:";
                cout<<"\n x = "<<x;
                cout<<"\n y = "<<(a1*c2-a2*c1)<<"/"<<(a2*b1-a1*b2);
            }
            else if(k==y||k==y+1)
            {
                cout<<"\nSolution for "<<a1<<"x+"<<b1<<"y+"<<c1;
                cout<<"=0 and "<<a2<<"x+"<<b2<<"y+"<<c2<<"=0 is:";
                cout<<"\n x = "<<(b1*c2-b2*c1)<<"/"<<(b2*a1-b1*a1);
                cout<<"\n y = "<<y;
            }
            else
            {
                cout<<"\nSolution for "<<a1<<"x+"<<b1<<"y+"<<c1;
                cout<<"=0 and "<<a2<<"x+"<<b2<<"y+"<<c2<<"=0 is:";
                cout<<"\n x = "<<(b1*c2-b2*c1)<<"/"<<(b2*a1-b1*a1);
                cout<<"\n y = "<<(a1*c2-a2*c1)<<"/"<<(a2*b1-a1*b2);
            }
        }
    }
    else if(i==4)
    {
        cout<<"\nEnter number\n";
        cin>>a;
        if(a<0)
        {
            delta = log10(-a)/2;
            root = pow(10.0,delta);
            cout<<"\nSquare root of "<<a<<" is "<<root<<"i";
            cout<<"\nWhere i is a complex number";
        }
        else if(a!=0)
        {
            delta = log10(a)/2;
            root = pow(10.0,delta);
            cout<<"\nSquare root of "<<a<<" is "<<root;
        }
        else
            cout<<"\nSquare root of 0 is o";
    }
    else if(i==5)
    {
        cout<<"\nEnter number\n";
        cin>>a;
        if(a<0)
        {
            delta = log10(-a)/3;
            root = pow(10.0,delta);
            cout<<"\ncube root of "<<a<<" is -"<<root;
        }
        else if(a!=0)
        {
            delta = log10(a)/3;
            root = pow(10.0,delta);
            cout<<"\ncube root of "<<a<<" is "<<root;
        }
        else
            cout<<"\ncube root of 0 is o";
    }
    else if(i==6)
    {
        cout<<"\nEnter number\n";
        cin>>a;
        cout<<"\nEnter n\n";
        cin>>n;
        if(n==0)
            cout<<"\nArgument error n cannot be equal to zero";
        else
        {
            if(a<0)
            {
                delta = log10(-a)/n;
                root = pow(10.0,delta);
                k=n;
                if(k%2!=0)
                    cout<<"\n"<<n<<"th root of "<<a<<" is -"<<root;
                else
                {
                    cout<<"\n"<<n<<"th root of "<<a<<" is "<<root<<"i";
                    cout<<"\nWhere i is a complex number";
                }
            }
            else if(a!=0)
            {
                delta = log10(a)/n;
                root = pow(10.0,delta);
                cout<<"\n"<<n<<"th root of "<<a<<" is "<<root;
            }
            else
                cout<<"\n"<<n<<"th root of "<<a<<" is 0";
        }
    }
}
float fact(int n1)
{
    float fact=1;
    for(int i=1; i<=n1; i++)
    {
        fact*=i;
    }
    return fact;

}
void permut(int i)
{
    int n,r;
    float ncr,factn,factr,npr,factr_;
    system("cls");
    if(i==1)
    {
        cout<<"\nEnter number to find factorial\n";
        cin>>n;
        cout<<"\n"<<n<<"!="<<fact(n);
    }
    else if(i==2)
    {
        cout<<"\nEnter n\n";
        cin>>n;
        factn=fact(n);
        cout<<"\nEnter r\n";
        cin>>r;
        factr=fact(r);
        factr_=fact(n-r);
        ncr=factn/(factr*factr_);
        if(n>=r)
        {
            cout<<"\n"<<n<<"C"<<r<<"="<<ncr;
        }
        else
        {
            cout<<"\n n should not be greater than r";
            cout<<"\nReturning to main menu";
        }
    }
    else if(i==3)
    {
        cout<<"\nEnter n\n";
        cin>>n;
        cout<<"\nEnter r\n";
        cin>>r;
        if(n>=r)
        {
            cout<<"\n"<<n<<"P"<<r<<"="<<fact(n)/(fact(n-r));
        }
        else
        {
            cout<<"\n n should not be greater than r";
            cout<<"\nReturning to main menu";
        }
    }
}
void t_ratio()
{
    int ch;
    float ang_deg,ang_rad,val;
    system("cls");
    cout<<"\nSelect trigonometric ratio";
    cout<<"\n1)sin";
    cout<<"\n2)cos";
    cout<<"\n3)tan";
    cout<<"\n4)cosec";
    cout<<"\n5)sec";
    cout<<"\n6)cot";
    cout<<"\n7)sin-1 x";
    cout<<"\n8)cos-1 x";
    cout<<"\n9)tan-1 x";
    cout<<"\n10)cosec-1 x";
    cout<<"\n11)sec-1 x";
    cout<<"\n12)cot-1 x\n";

    cin>>ch;
    if(ch==1)
    {
        cout<<"\nEnter angle\n";
        cin>>ang_deg;
        ang_rad=ang_deg*PI/180;
        cout<<"\nsin("<<ang_deg<<")="<<sin(ang_rad);
    }
    else if(ch==2)
    {
        cout<<"\nEnter angle\n";
        cin>>ang_deg;
        ang_rad=ang_deg*PI/180;
        cout<<"\ncos("<<ang_deg<<")="<<cos(ang_rad);
    }
    else if(ch==3)
    {
        cout<<"\nEnter angle\n";
        cin>>ang_deg;
        ang_rad=ang_deg*PI/180;
        cout<<"\ntan("<<ang_deg<<")="<<tan(ang_rad);
    }
    else if(ch==4)
    {
        cout<<"\nEnter angle\n";
        cin>>ang_deg;
        ang_rad=ang_deg*PI/180;
        cout<<"\ncosec("<<ang_deg<<")="<<1/sin(ang_rad);
    }
    else if(ch==5)
    {
        cout<<"\nEnter angle\n";
        cin>>ang_deg;
        ang_rad=ang_deg*PI/180;
        cout<<"\nsec("<<ang_deg<<")="<<1/cos(ang_rad);
    }
    else if(ch==6)
    {
        cout<<"\nEnter angle\n";
        cin>>ang_deg;
        ang_rad=ang_deg*PI/180;
        cout<<"\ncot("<<ang_deg<<")="<<cos(ang_rad)/sin(ang_rad);
    }
    else if(ch==7)
    {
        cout<<"\nEnter value\n";
        cin>>val;
        if(val<=1&&val>=-1)
        {
            ang_rad=asin(val);
            ang_deg=ang_rad*180/PI;
            cout<<"\nsin-1 ("<<val<<") = "<<ang_rad<<"rad or "<<ang_deg<<" degree's";
        }
        else
            cout<<"\nError\nYou should enter a value between 1 and -1";
    }
    else if(ch==8)
    {
        cout<<"\nEnter value\n";
        cin>>val;
        if(val<=1&&val>=-1)
        {
            ang_rad=acos(val);
            ang_deg=ang_rad*180/PI;
            cout<<"\ncos-1 ("<<val<<") = "<<ang_rad<<"rad or "<<ang_deg<<" degree's";
        }
        else
            cout<<"\nError\nYou should enter a value between 1 and -1";
    }
    else if(ch==9)
    {
        cout<<"\nEnter value\n";
        cin>>val;
        ang_rad=atan(val);
        ang_deg=ang_rad*180/PI;
        cout<<"\ntan-1 ("<<val<<") = "<<ang_rad<<"rad or "<<ang_deg<<" degree's";
    }
    else if(ch==10)
    {
        cout<<"\nEnter value\n";
        cin>>val;
        if(val>-1&&val<1)
            cout<<"\nError.......\nArgument error\nThe value should not be between 1 and -1";
        else
        {
            ang_rad=asin(1/val);
            ang_deg=ang_rad*180/PI;
            cout<<"\ncosec-1 ("<<val<<") = "<<ang_rad<<"rad or "<<ang_deg<<" degree's";
        }
    }
    else if(ch==11)
    {
        cout<<"\nEnter value\n";
        cin>>val;
        if(val>-1&&val<1)
            cout<<"\nError.......\nArgument error\nThe value should not be between 1 and -1";
        else
        {
            ang_rad=acos(1/val);
            ang_deg=ang_rad*180/PI;
            cout<<"\nsec-1 ("<<val<<") = "<<ang_rad<<"rad or "<<ang_deg<<" degree's";
        }
    }
    else if(ch==12)
    {
        cout<<"\nEnter value\n";
        cin>>val;
        ang_rad=atan(1/val);
        ang_deg=ang_rad*180/PI;
        cout<<"\ncot-1 ("<<val<<") = "<<ang_rad<<"rad or "<<ang_deg<<" degree's";
    }
    else
        wrong();

}
void logarithm()
{
    int ch;
    float l,base;
    system("cls");
    cout<<"\nEnter your choice";
    cout<<"\n1)Find Log to the base e(natural logarithm)";
    cout<<"\n2)Find Log to the base 10(common logarithm)";
    cout<<"\n3)Find Log to the base PI";
    cout<<"\n4)Find Log to custom base\n";
    cin>>ch;
    if(ch<1||ch>4)
        wrong();
    else
    {
        if(ch==1)
        {
            cout<<"Enter number\n";
            cin>>l;
            cout<<"\nLog("<<l<<") to the base e = "<<log(l);
        }
        else if(ch==2)
        {
            cout<<"Enter number\n";
            cin>>l;
            cout<<"\nLog("<<l<<") to the base 10 = "<<log10(l);
        }
        else if(ch==3)
        {
            cout<<"Enter number\n";
            cin>>l;
            cout<<"\nLog("<<l<<") to the base PI = "<<log10(l)/log10(PI);
        }
        else if(ch==4)
        {
            cout<<"\nEnter base\n";
            cin>>base;
            if(base!=1)
            {
                cout<<"\nEnter number\n";
                cin>>l;
                cout<<"\nLog("<<l<<") to the base "<<base<<" = "<<log10(l)/log10(base);
            }
            else
                cout<<"\nBase cannot be equal to one";
        }
    }
}
void about()
{
    system("cls");
    name();
    system("cls");
    cout<<"\nProgram name: Scientific Calculator";
    cout<<"\nVersion: 1.0";
    cout<<"\nBuilt: 78";
    cout<<"\nAuthor: Vishnu Poothery";
    cout<<"\n\tIdeal Public School";
}
void square()
{
    float x;
    system("cls");
    cout<<"\nEnter number\n";
    cin>>x;
    cout<<"\n"<<x<<"^2 = "<<x*x;
}
void cube()
{
    system("cls");
    float x;
    cout<<"\nEnter number \n";
    cin>>x;
    cout<<"\n"<<x<<"\n^3= "<<x*x*x;
}
void nth_pow()
{
    system("cls");
    float x,temp;
    long double p=1;
    int i,n;
    cout<<"\nEnter x\n";
    cin>>x;
    cout<<"\nEnter n\n";
    cin>>n;
    for(i=1; i<n+1; i++)
        p*=x;
    cout<<"\n"<<n<<"th power of "<<x<<" is "<<p;
}
void reci()
{
    system("cls");
    float x;
    cout<<"\nEnter x\n";
    cin>>x;
    if(x!=0)
        cout<<"\n1/"<<x<<" = "<<1/x;
    else
    {
        cout<<"\nArgument error x cannot be equal to zero";
        cout<<"\nReturning to main menu";
    }
}
void name()
{
cout<<"\n ??        ??      ??      ???????     ??????       ?????   ??     ? ";
cout<<"\n ???      ???     ????     ?     ??    ??           ??   ?? ??    ?? ";
cout<<"\n ? ??    ????     ?  ?     ?      ??   ?            ?    ??  ??  ??  ";
cout<<"\n ?  ?    ?  ?    ??  ??    ?       ?   ?????        ??????    ????   ";
cout<<"\n ?   ?  ?  ??   ????????   ?       ?   ??           ??   ??    ??    ";
cout<<"\n ??  ????  ??   ??     ?   ?      ??   ?            ?    ??    ??    ";
cout<<"\n ??   ??   ??  ??      ??  ???????     ??????       ??????     ??    ";
cout<<"\n                                                                     ";
cout<<"\n                                                                     ";
cout<<"\n                                                                     ";
cout<<"\n                                                                     ";
cout<<"\n                                                                     ";
cout<<"\n                                                                     ";
cout<<"\n ?         ? ????    ??????   ?        ?    ??       ?     ?       ? ";
cout<<"\n ??       ??  ??   ???   ??   ??      ??    ???      ??   ??       ??";
cout<<"\n  ??      ?   ??   ??         ?        ?    ? ??     ??   ??       ? ";
cout<<"\n  ??     ??   ??   ???        ?        ?    ?  ??    ??   ??       ? ";
cout<<"\n   ??   ??    ??     ????     ??????????    ?   ??   ??   ??       ? ";
cout<<"\n    ??  ?     ??        ???   ?        ?    ?    ??  ??   ??       ? ";
cout<<"\n    ?? ??     ??          ??  ?        ?    ?     ?? ??   ??       ? ";
cout<<"\n     ???      ??   ??   ???   ??      ??   ??      ????    ???   ??? ";
cout<<"\n      ?      ????   ?????     ?        ?    ?        ?       ?????   ";
cout<<"\n                                                                     ";
getch();
}
void logo()
{
cout<<"\n                ||                         ";
cout<<"\n           ||||||||                |||     ";
cout<<"\n         ||||||||||             ||||||     ";
cout<<"\n        |||||||||||            |||||||     ";
cout<<"\n        |||||||||||           |||||||      ";
cout<<"\n        |||||||||||          ||||||||      ";
cout<<"\n        |||||||||||         |||||||||      ";
cout<<"\n        |||||||||||         ||||||||       ";
cout<<"\n        |||||||||||         |||||||        ";
cout<<"\n        |||||||||||        ||||||||        ";
cout<<"\n        |||||||||||        |||||||         ";
cout<<"\n        |||||||||||       |||||||          ";
cout<<"\n        |||||||||||       ||||||           ";
cout<<"\n        |||||||||||      |||||||           ";
cout<<"\n        |||||||||||     |||||||            ";
cout<<"\n         ||||||||||    |||||||             ";
cout<<"\n         ||||||||||    ||||||              ";
cout<<"\n         ||||||||||   ||||||               ";
cout<<"\n          |||||||||  ||||||                ";
cout<<"\n          ||||||||||||||||                 ";
cout<<"\n          |||||||||||||||                  ";
cout<<"\n           ||||||||||||                    ";
cout<<"\n            ||||||||||            ";         
cout<<"\nLoading ..........";
delay();
}
void delay()
{
for(int i=0;i<10000000;i++)
{
cout<<"";
for(i=0;i<10000000;i++)
{
cout<<"";
for(i=0;i<10000000;i++)
{
cout<<"";
for(i=0;i<10000000;i++)
{
cout<<"";
}
}
}
}
}

