#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int cx,cy;
    cx = 200;
    cy = 200;
    outtextxy(165,60,"Smile Face");

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

    //mouth
    setcolor(BLACK);
    for(int i = 0 ; i<3 ; i++)
        arc((cx+cy)/2, cy-i, 200, 340, 70);
    //dimples
    arc((cx-43), cy+40, 120,160, 30);
    arc((cx+43), cy+40, 20,60, 30);

    getch();
    closegraph();
}
