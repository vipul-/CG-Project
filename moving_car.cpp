#include <graphics.h>

void car(int i) {
    //car outline
    rectangle(5+i,366,120+i,385);
    line(31+i, 366, 38+i, 345);
    line(38+i, 345, 86+i, 345);
    line(94+i, 366, 86+i, 345);
    line(61+i, 366, 61+i, 345);
    //moving rim animation
    pieslice(33+i,385,(0+i)%360,(25+i)%360, 8);
    pieslice(33+i,385,(90+i)%360,(115+i)%360, 8);
    pieslice(33+i,385,(180+i)%360,(205+i)%360, 8);
    pieslice(33+i,385,(270+i)%360,(295+i)%360, 8);
    pieslice(90+i,385,(0+i)%360,(25+i)%360, 8);
    pieslice(90+i,385,(90+i)%360,(115+i)%360, 8);
    pieslice(90+i,385,(180+i)%360,(205+i)%360, 8);
    pieslice(90+i,385,(270+i)%360,(295+i)%360, 8);
    //wheels;
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