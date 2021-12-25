
#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;
int x1,y1,x2,y2,x3,y3,x4,y4,l,t,r,b,px1,py1,px2,py2,px3,py3,px4,py4,tx,ty,ch;
float tetha;
void rotation()
{
    cleardevice();
    cout<<"Select a shape: \n1)line\n2)triangle\n3)rectangle"<<endl;
    cin>>ch;

    if(ch == 1)
    {
        cout<<"X1 Y1 X2 Y2"<<endl;
        cin>>x1>>y1>>x2>>y2;
        line(x1, y1, x2, y2);
        cout<<"Enter Tetha\n";
        cin>>tetha;
        tetha = float(tetha*(3.1416/180));
        cout<<"Tetha: "<<tetha<<endl;
        x2 = float((x1*cos(tetha)) - (y1*sin(tetha)));
        y2 = float((x1*sin(tetha)) + (y1*cos(tetha)));

        x3 = float((x2*cos(tetha)) - (y2*sin(tetha)));
        y3 = float((x2*sin(tetha)) + (y2*cos(tetha)));
        cout<<x2<<" "<<y2<<endl;
        delay(1000);
        cleardevice();
        line(x1, y1, x2, y2);

    }
    else if(ch == 2)
    {
        cout<<"x1 y1 x2 y2 x3 & y3"<<endl;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        line(x1, y1, x2, y2);
        line(x1, y1, x3, y3);
        line(x3, y3, x2, y2);

        cout<<"Tetha\n";
        cin>>tetha;
        tetha = float(tetha*(3.1416/180));

        px1 = float((x1*cos(tetha)) - (y1*sin(tetha)));
        py1 = float((x1*sin(tetha)) + (y1*cos(tetha)));

        px2 = float((x2*cos(tetha)) - (y2*sin(tetha)));
        py2 = float((x2*sin(tetha)) + (y2*cos(tetha)));

        px3 = float((x3*cos(tetha)) - (y3*sin(tetha)));
        py3 = float((x3*sin(tetha)) + (y3*cos(tetha)));

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

        x1 = l;
        y1 = t;
        x2 = r;
        y2 = t;

        x3 = l;
        y3 = b;
        x4 = r;
        y4 = b;

        line(l, t, r, t);
        line(l, t, l, b);
        line(l, b, r, b);
        line(r, t, r, b);


        cout<<"Tetha\n";
        cin>>tetha;
        tetha = float(tetha*(3.1416/180));

        px1 = float((x1*cos(tetha)) - (y1*sin(tetha)));
        py1 = float((x1*sin(tetha)) + (y1*cos(tetha)));

        px2 = float((x2*cos(tetha)) - (y2*sin(tetha)));
        py2 = float((x2*sin(tetha)) + (y2*cos(tetha)));

        px3 = float((x3*cos(tetha)) - (y3*sin(tetha)));
        py3 = float((x3*sin(tetha)) + (y3*cos(tetha)));

        px4 = float((x4*cos(tetha)) - (y4*sin(tetha)));
        py4 = float((x4*sin(tetha)) + (y4*cos(tetha)));

        delay(1000);
        cleardevice();

        line(px1, py1, px2, py2);
        line(px1, py1, px3, py3);
        line(px3, py3, px4, py4);
        line(px2, py2, px4, py4);
    }
}
void translation()
{
    cleardevice();

    cout<<"Select a shape: \n1)line\n2)triangle\n3)rectangle"<<endl;
    cin>>ch;

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
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int ch;

    cout<<"Select a Functionality \n1)Translation \n2)Rotation"<<endl;
    cin>>ch;
    if(ch==1)
    {
        translation();
    }
    else if(ch == 2)
    {
        rotation();
    }

    getch();
    closegraph();
    return 0;
}
