#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;


int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1,x2,y1,y2,p,dx,dy,x,y;
    cout<<"Enter (x1,y1) and (x2,y2)"<<endl;
    cin>>x1>>y1>>x2>>y2;

    dx = (x2-x1);
    dy = (y2-y1);
    p = 2*dy-dx;
    x = x1;
    y = y1;
    int i = 0 ;
    cout<<"i \t\t p \t\t x \t\t y \t\t p(x,y)"<<endl;
    while(i<=dx)
    {
        int tmp1 = x,tmp2 = y;
        cout<<setprecision(2)<<i<<" \t\t "<<p<<" \t\t "<<x<<" \t\t "<<y<<"\t\t ("<<x<<","<<y<<")"<<endl;
        if(p<0)
        {
            x = x+1;
            p = p+2*dy;
        }
        else
        {
            x = x+1;
            y = y+1;
            p = p+2*dy-2*dx;
        }
//        putpixel(round(x),round(y),i);
        line(tmp1,tmp2,x,y);
        i++;
    }

    getch();
    closegraph();
    return 0;
}
