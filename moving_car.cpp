#include <graphics.h>

void car(int i) {
    rectangle(5+i,366,120+i,385);
    line(31+i, 366, 38+i, 345);
    line(38+i, 345, 86+i, 345);
    line(94+i, 366, 86+i, 345);
    line(61+i, 366, 61+i, 345);
    circle(33+i, 385, 8);
    circle(90+i, 385, 8);
}

int main() {
   int gd = DETECT, gm;
   initgraph(&gd,&gm,NULL);
   for(int i=0; i<520; i++) {
       cleardevice();
       line(0, 393, 800,393); //road
       car(i);
       delay(6);
   }
   getch();
   closegraph();
   return 0;
}