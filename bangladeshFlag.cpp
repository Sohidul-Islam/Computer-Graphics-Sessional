
#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int l,r,t,b,cx,cy,c;
        l = 200;
        r = 450;
        t = 150;
        b = 300;
        cx = (l+r)/2;
        cy = (t+b)/2;
    outtextxy(cy,110,"The National Flag of Bangladesh");
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(l,t,r,b);
    floodfill(l+1,t+1,GREEN);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(cx,cy,50);
    floodfill(cx,cy,RED);
    getch();
    closegraph();
}
