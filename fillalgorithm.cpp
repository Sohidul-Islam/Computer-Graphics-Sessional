#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood(int,int,int,int);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TURBOC3/bgi");
    circle(150,150,100);
    flood(151,151,10,0);
    getch();
}
void flood(int x,int y,int fillColor, int defaultColor)
{
    if(getpixel(x,y)==defaultColor)
    {
        delay(1);
        putpixel(x,y,fillColor);
        flood(x+1,y,fillColor,defaultColor);
        flood(x-1,y,fillColor,defaultColor);
        flood(x,y+1,fillColor,defaultColor);
        flood(x,y-1,fillColor,defaultColor);
    }
}
