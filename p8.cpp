#include<iostream>
using namespace::std;
int ut,us,tg,a;
double h;
struct nilai
{
    int ut,us,tg,a;
    double h;
};
void input()
{
    nilai n;
    cout<<"Nilai UTS            :"; cin>>n.ut;
    cout<<"Nilai UAS            :"; cin>>n.us;
    cout<<"Nilai tugas          :"; cin>>n.tg;
    cout<<"Nilai Absen          :"; cin>>n.a;
}
double hitung()
{
    nilai n;
    n.h=(n.ut*20/100)+(n.us*30/100)+(n.tg*35/100)+(n.a*15/100);
    cout<<"Total Nilai          :"<<n.h<<endl;
}
void grade(int h)
{
    nilai n;
    if(n.h>=81)
        cout<<"====A====";
    else if(n.h>=61)
        cout<<"====B====";
    else if(n.h>=41)
        cout<<"====C====";
    else if(n.h>=21)
        cout<<"====D====";
    else
        cout<<"====E====";
}
main()
{
    input();
    hitung();
    grade(h);
}
