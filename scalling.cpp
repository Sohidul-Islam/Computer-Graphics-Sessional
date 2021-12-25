
#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
    initwindow(1200,800);
    int ch;
    cout<<"Select a shape: \n1)line\n2)triangle\n3)rectangle"<<endl;
    cin>>ch;
    int x1,y1,x2,y2,x3,y3,x4,y4,l,t,r,b,px1,py1,px2,py2,px3,py3,px4,py4,sx,sy;
    if(ch == 1)
    {
        cout<<"X1 Y1 X2 & Y2"<<endl;
        cin>>x1>>y1>>x2>>y2;
        line(x1, y1, x2, y2);
        cout<<"sx & sy \n";
        cin>>sx>>sy;
        line(x1, y1, x2, y2);
        px1 = x1*sx;
        py1 = y1*sy;
        px2 = x2*sx;
        py2 = y2*sy;
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

        cout<<"sx & sy \n";
        cin>>sx>>sy;

        px1 = x1*sx;
        py1 = y1*sy;

        px2 = x2*sx;
        py2 = y2*sy;

        px3 = x3*sx;
        py3 = y3*sy;

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


        cout<<"sx & sy \n";
        cin>>sx>>sy;

        px1 = x1*sx;
        py1 = y1*sy;

        px2 = x2*sx;
        py2 = y2*sy;

        px3 = x3*sx;
        py3 = y3*sy;

        px4 = x4*sx;
        py4 = y4*sy;

        delay(1000);
        cleardevice();

        line(px1, py1, px2, py2);
        line(px1, py1, px3, py3);
        line(px3, py3, px4, py4);
        line(px2, py2, px4, py4);
    }


    getch();
    closegraph();
    return 0;
}
