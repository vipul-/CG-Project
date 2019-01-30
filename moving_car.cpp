#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd,&gm,NULL);
   line(0, 400, 800,400);
   getch();
   closegraph();
   return 0;
}