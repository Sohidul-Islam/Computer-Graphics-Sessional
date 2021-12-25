#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int cx,cy;
    cx = 200;
    cy = 200;
    cleardevice();
    outtextxy(cx-35,cx-140,"Sad Face");

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(cx,cy,100);
    floodfill(cx,cy,YELLOW);

//left eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    ellipse(cx-30, cy-50, 0,
            360, 20, 25);
    floodfill(cx-30,cx-50,BLACK);
//right eyes

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    ellipse(cx+30, cy-50, 0,
            360, 20, 25);
    floodfill(cx+30,cx-50,BLACK);

    //sad
    setcolor(BLACK);
    for(int i = 0; i<=3; i++)
        arc((cx+cy)/2, cy+60+i, 20, 160, 50);
    getch();
    closegraph();
}
