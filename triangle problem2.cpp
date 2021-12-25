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
    float tetha;
    cout<<"Enter A(x,y): "<<endl;
    cin>>x1>>y1;
    cout<<"Enter B(x,y): "<<endl;
    cin>>x2>>y2;
    cout<<"Enter C(x,y): "<<endl;
    cin>>x3>>y3;
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    cout<<"Enter tetha"<<endl;
    cin>>tetha;
    tetha = float(tetha*(3.1416/180));
    xn1 = float((x1*cos(tetha)) - (y1*sin(tetha)));
    xn2 = float((x2*cos(tetha)) - (y2*sin(tetha)));
    xn3 = float((x3*cos(tetha)) - (y3*sin(tetha)));

    yn1 = float((x1*sin(tetha)) + (y1*cos(tetha)));
    yn2 = float((x2*sin(tetha)) + (y2*cos(tetha)));
    yn3 = float((x3*sin(tetha)) + (y3*cos(tetha)));

    setcolor(12);
    line(xn1,yn1,xn2,yn2);
    line(xn1,yn1,xn3,yn3);
    line(xn2,yn2,xn3,yn3);
    getch();
    closegraph();
}

