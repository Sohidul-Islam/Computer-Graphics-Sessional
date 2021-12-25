#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1,y1,x2,y2,px1,py1,px2,py2,tx,ty;
    x1 = 50;
    y1 = 100;
    x2 = 250;
    y2 = 300;
    tx = 50;
    ty = 60;
    line(x1, y1, x2, y2);


    line(x1, y1, x2, y2);
    px1 = x1+tx;
    py1 = y1+ty;

    px2 = x2+tx;
    py2 = y2+ty;

    delay(1000);
    cleardevice();
    line(px1, py1, px2, py2);
    getch();
    closegraph();
    return 0;
}
