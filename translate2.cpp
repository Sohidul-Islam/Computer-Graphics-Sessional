
#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int ch;
    cout<<"Select a shape: \n1)line\n2) triangle\n3) rectangle"<<endl;
    cin>>ch;
    int x1,y1,x2,y2,x3,y3,x4,y4,l,t,r,b,px1,py1,px2,py2,px3,py3,px4,py4,tx,ty;
    if(ch == 1)
    {
        cout<<"X1 Y1 X2 & Y2"<<endl;
        cin>>x1>>y1>>x2>>y2;
        line(x1, y1, x2, y2);
        cout<<"Tx & Ty \n";
        cin>>tx>>ty;
        line(x1, y1, x2, y2);
        px1 = x1+tx;
        py1 = y1+ty;
        px2 = x2+tx;
        py2 = y2+ty;
        delay(1000);
        cleardevice();
        line(px1, py1, px2, py2);

    }
    else if(ch == 2)
    {
        cout<<"x1 y1 x2 y2 x3 & y3"<<endl;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        line(x1, y1, x2, y2);
        line(x1, y1, x3, y3);
        line(x3, y3, x2, y2);

        cout<<"Tx & Ty \n";
        cin>>tx>>ty;

        px1 = x1+tx;
        py1 = y1+ty;

        px2 = x2+tx;
        py2 = y2+ty;

        px3 = x3+tx;
        py3 = y3+ty;

        delay(1000);
        cleardevice();

        line(px1, py1, px2, py2);
        line(px1, py1, px3, py3);
        line(px3, py3, px2, py2);
    }
    else if(ch == 3)
    {
        cout<<"Left Top Right Bottom"<<endl;
        cin>>l>>t>>r>>b;
//        rectangle(l,t,r,b);
        x1 = l;
        y1 = t;
        x2 = r;
        y2 = t;

        x3 = l;
        y3 = b;
        x4 = r;
        y4 = b;
        int tmp = l;
        line(l, t, r, t);
        line(l, t, l, b);
        line(l, b, r, b);
        line(r, t, r, b);


        cout<<"Tx & Ty \n";
        cin>>tx>>ty;

        px1 = x1+tx;
        py1 = y1+ty;

        px2 = x2+tx;
        py2 = y2+ty;

        px3 = x3+tx;
        py3 = y3+ty;

        px4 = x4+tx;
        py4 = y4+ty;

        delay(1000);
        cleardevice();

        line(px1, py1, px2, py2);
        line(px1, py1, px3, py3);
        line(px3, py3, px4, py4);
        line(px2, py2, px4, py4);
    }

//    x1 = 50;
//    y1 = 100;
//    x2 = 250;
//    y2 = 300;
//    tx = 50;
//    ty = 60;

    getch();
    closegraph();
    return 0;
}
