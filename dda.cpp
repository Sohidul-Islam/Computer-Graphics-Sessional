#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int findlength(int x1,int y1,int x2,int y2)
{

    int L1,L2;
    L1 = abs(x2-x1);
    L2 = abs(y2-y1);
    if(L1>L2)
    {
        return L1;
    }
    else
    {
        return L2;
    }

}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1,x2,y1,y2,len;
    float dx,dy,x,y;
    cout<<"Enter (x1,y1) and (x2,y2)"<<endl;
    cin>>x1>>y1>>x2>>y2;
    len = findlength(x1,y1,x2,y2);

    cout<<len<<endl;

    dx = float(x2-x1)/len;
    dy = float(y2-y1)/len;
    x = x1;
    y = y1;
    int i = 0 ;
    cout<<"i \t\t x \t\t y \t\t p(x,y)"<<endl;
    while(i<=len)
    {
        cout<<setprecision(2)<<i<<" \t\t "<<x<<" \t\t "<<y<<"\t\t ("<<round(x)<<","<<round(y)<<")"<<endl;
        int tmp1,tmp2;
        tmp1 = round(x);
        tmp2 = round(y);
        x = x+dx;
        y = y+dy;

//        putpixel(round(x),round(y),i);
        line(tmp1,tmp2,round(x),round(y));
        i++;
    }

    getch();
    closegraph();
    return 0;
}
