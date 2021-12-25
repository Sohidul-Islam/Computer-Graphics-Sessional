
#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
//    initwindow(1200,800);
    int ch;

    int x1,y1,x2,y2,x3,y3,x4,y4,l,t,r,b,px1,py1,px2,py2,px3,py3,px4,py4,cx,cy;
    cx = 300;
    cy = 600;
    line(0,cx,cy,cx);
    line(cx,0,cx,cy);
    cout<<"Select a option: \n1)Reflection about X-axis\n2)Reflection about Y-axis\n"<<endl;
    cin>>ch;
    if(ch == 1)
    {
        setcolor(WHITE);
        circle((cx+50),(cx+50),20);
        setcolor(RED);
        circle((cx-50),(cx-50),20);
        delay(1500);
        setcolor(WHITE);
        circle((cx+50),(cx-50),20);
        setcolor(RED);
        circle((cx-50),(cx+50),20);

    }
    else if(ch == 2)
    {
        setcolor(WHITE);
        circle((cx+50),(cx+50),20);
        setcolor(RED);
        circle((cx-50),(cx-50),20);
        delay(1500);
        setcolor(WHITE);
        circle((cx-50),(cx+50),20);
        setcolor(RED);
        circle((cx+50),(cx-50),20);
    }
    getch();
    closegraph();
    return 0;
}
