#include <graphics.h>
#include <conio.h>
#include<bits/stdc++.h>
using namespace std;
void linedraw(float x1,float y1,float x2,float y2)
{
    float dx,dy,x,y,m,c;
    dx = (x2-x1);
    dy = (y2-y1);
    m = abs(dy/dx);
    c = y1 - m*x1;
    x = x1;
    y = y1;
    cout<<"m: "<<m<<" c: "<<c<<endl;
    cout<<"x \t\t y \t\t p(x,y)"<<endl;

    if(m>1)
    {
        for(int y = y1 ; y<=y2 ; y++)
        {
            x = (y-c)/m;
            cout<<setprecision(2)<<x<<" \t\t "<<y<<" \t\t ("<<round(x)<<","<<round(y)<<")"<<endl;
            putpixel(round(x),round(y),WHITE);

        }
    }
    else
    {
        for(int x = x1 ; x<=x2 ; x++)
        {
            y = m*x+c;
            cout<<setprecision(2)<<x<<" \t\t "<<y<<" \t\t ("<<round(x)<<","<<round(y)<<")"<<endl;
            putpixel(round(x),round(y),WHITE);
        }
    }
}
int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    float x1,x2,y1,y2,x3,y3;

    x1=40;
    y1=10;

    x2 = 100;
    y2 = 70;

    x3 = 50;
    y3 = 70;

    linedraw(x1,y1,x2,y2);
    linedraw(x1,y1,x3,y3);
    linedraw(x3,y3,x2,y2);




    getch();
    closegraph();
    return 0;
}
