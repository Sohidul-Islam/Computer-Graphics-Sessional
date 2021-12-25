#include <graphics.h>
#include<bits/stdc++.h>
#include <conio.h>
using namespace std;
int xc, yc;
void draw(int x, int y)
{
    putpixel(xc+x,yc-y,15);//x y 1st
    putpixel(xc+y,yc-x,15);//y x 1st

    putpixel(xc-x,yc-y,11);//-x y 2nd
    putpixel(xc-y,yc-x,11);//-y x 2nd

    putpixel(xc-y,yc+x,12);//-y -x 3rd
    putpixel(xc-x,yc+y,12);//-x -y 3rd

    putpixel(xc+x,yc+y,14);//x -y 4th
    putpixel(xc+y,yc+x,14);//y -x 4th
}
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    int r,d,x,y;
    cout<<"Xc Yc & r "<<endl;
    cin>>xc>>yc>>r;
    x = 0;
    y = r;
    d = 3-2*r;
    cout<<"d\tX\tY\t\tp(X,Y)"<<endl;
    while(x<=y)
    {
        cout<<d<<"\t"<<x<<"\t"<<y<<"\t\tp("<<x<<","<<y<<")"<<endl;
        delay(100);
        draw(x,y);

        if(d<0)
        {
            d = d+4*x+6;
        }
        else
        {
            d = d+4*(x-y)+10;
            y--;
        }
        x++;
    }
    getch();
    closegraph();
    return 0;
}
