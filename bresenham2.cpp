#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    int x1,y1,x2,y2,dx,dy,x,y,d,tmp;
    cin>>x1>>y1>>x2>>y2;
    dx = x2-x1;
    dy = y2-y1;
    d = 2*dy-dx;



    if(dy<dx)
    {
        x=x1;
        y=y1;
        cout<<"Here 0<m<1"<<endl;
        cout<<"di:\t x:\t y:\t p(x,y)"<<endl;
        while(x<=x2)
        {
            putpixel(x,y,WHITE);
            cout<<d<<"\t "<<x<<"\t "<<y<<"\t ("<<x<<","<<y<<")"<<endl;
            if(d<0)
            {
                d = d+2*dy;
                x++;
            }
            else
            {
                d = d+2*(dy-dx) ;
                x++;
                y++;
            }

        }
    }

    else
    {
        x=y1;
        y=x1;
        tmp = dx;
        dx = dy;
        dy = tmp;
        d = 2*dy-dx;
        cout<<"Here m>=1"<<endl;
        cout<<"di:\t x:\t y:\t p(x,y)"<<endl;
        while(x<=y2)
        {

            putpixel(y,x,WHITE);
            cout<<d<<"\t "<<x<<"\t "<<y<<"\t ("<<y<<","<<x<<")"<<endl;
            if(d<0)
            {
                d = d+2*dy;
                x++;
            }
            else
            {
                d = d+2*(dy-dx);
                x++;
                y++;
            }

        }
    }

    getch();

    closegraph();

}
