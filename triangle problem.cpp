#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(15);
    cleardevice();
    setcolor(BLACK);
    int x1,x2,x3,y1,y2,y3,xn1,xn2,xn3,yn1,yn2,yn3,tx,ty;
    cout<<"Enter A(x,y): "<<endl;
    cin>>x1>>y1;
    cout<<"Enter B(x,y): "<<endl;
    cin>>x2>>y2;
    cout<<"Enter C(x,y): "<<endl;
    cin>>x3>>y3;
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    cout<<"Enter tx and ty"<<endl;
    cin>>tx>>ty;
    xn1 = x1+tx;
    xn2 = x2+tx;
    xn3 = x3+tx;
    yn1 = y1+ty;
    yn2 = y2+ty;
    yn3 = y3+ty;

    setcolor(12);
    line(xn1,yn1,xn2,yn2);
    line(xn1,yn1,xn3,yn3);
    line(xn2,yn2,xn3,yn3);
    getch();
    closegraph();
}
