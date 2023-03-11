#include "TXLib.h"
void Draw_Sky();
void Draw_Earth();
void Draw_lefttree();
void Draw_righttree();
void Draw_Basketballfield();
void Draw_Markingupinfield();
void Draw_Fence();
void Draw_Fencefrombottomtotop();
void Draw_Fencefromtoptobottom();
void Draw_lefttreebehindfence();
void Draw_righttreebehindfence();
void Draw_fencebeforerighttree();
void Draw_fencebeforelefttree();
void Draw_column();
void Draw_shield();
void Draw_sun(int x, int y);
void Draw_Markingontheshield();
void Draw_Markingarrows();
void Draw_ring();


int main()
{

txCreateWindow(1000,800);
int x=0;
int t=0;

while (t<100)
{
txClear();

Draw_Sky();

Draw_Earth();

Draw_lefttree();

Draw_righttree();

Draw_Basketballfield();

Draw_Markingupinfield();

Draw_Fence();

Draw_Fencefrombottomtotop();

Draw_Fencefromtoptobottom();

Draw_lefttreebehindfence();

Draw_righttreebehindfence();

Draw_fencebeforerighttree();

Draw_fencebeforelefttree();

Draw_column();

Draw_shield();

Draw_sun(x,80);

Draw_Markingontheshield();

Draw_Markingarrows();

Draw_ring();


x=x+10;
t=t+1;
txSleep(100);
}












return 0;
}

void Draw_Sky()
{
txSetColor (RGB (0,0,128),5);
txSetFillColor(TX_BLUE);
txRectangle (0,0,1000,350); //небо
}

void Draw_Earth()
{
txSetFillColor(TX_GREEN);
txSetColor (RGB (0, 128, 0), 5);
txRectangle (0,350,1000,800); //земля
}

void Draw_lefttree()
{
txSetColor (RGB (139, 69, 19), 5);
 txSetFillColor (RGB (139, 69, 19));
txRectangle (150,320,190,420);
 txSetColor (RGB (107, 142, 35), 5);
txSetFillColor (RGB( 107, 142, 35));
  POINT s[9] = {{120, 175}, {220, 175}, {240, 225}, {240, 250}, {220, 325}, {170,330}, {120,325}, {100,250}, {100,225}};
            txPolygon (s, 9); //левое дерево
}

void Draw_righttree()
{
txSetColor (RGB (139, 69, 19), 5);
 txSetFillColor (RGB (139, 69, 19));
txRectangle (800,320,820,420);
 txSetColor (RGB (107, 142, 35), 5);
txSetFillColor (RGB( 107, 142, 35));
  POINT p[9] = {{780,175 }, {840,175}, {885,225 }, {885,250 }, {840, 325}, {810,330}, {780,325}, {755,250}, {755,225}};
            txPolygon (p, 9); //правое дерево
}

void Draw_Basketballfield()
{
txSetColor (RGB (128,128,128),5);
txSetFillColor (RGB (128,128,128));
txRectangle (0,600,1000,800);  //баскетбольное поле
}

void Draw_Markingupinfield()
{
txSetColor (RGB (0,0,0),5);
txSetFillColor (RGB (128,128,128));
txCircle (500,650,170);
txLine (0,603,1000,603);//разметка поля
}

void Draw_Fence()
{
txSetColor (RGB (128,128,128), 5);
txSetFillColor (TX_GREEN);
txRectangle (0,400,1000,600);  //забор
}

void Draw_Fencefrombottomtotop()
{
txSetFillColor (TX_GREEN);
txSetFillColor (RGB (128,128,128));
txLine (0,400,40,600);
txSetFillColor (RGB (128,128,128));
txLine (40,400,80,600);
txSetFillColor (RGB (128,128,128));
txLine (80,400,120,600);
txSetFillColor (RGB (128,128,128));
txLine (120,400,160,600);
txSetFillColor (RGB (128,128,128));
txLine (160,400,200,600);
txSetFillColor (RGB (128,128,128));
txLine (200,400,240,600);
txSetFillColor (RGB (128,128,128));
txLine (240,400,280,600);
txSetFillColor (RGB (128,128,128));
txLine (280,400,320,600);
txSetFillColor (RGB (128,128,128));
txLine (320,400,360,600);
txSetFillColor (RGB (128,128,128));
txLine (360,400,400,600);
txSetFillColor (RGB (128,128,128));
txLine (400,400,440,600);
txSetFillColor (RGB (128,128,128));
txLine (440,400,480,600);
txSetFillColor (RGB (128,128,128));
txLine (480,400,520,600);
txSetFillColor (RGB (128,128,128));
txLine (520,400,560,600);
txSetFillColor (RGB (128,128,128));
txLine (560,400,600,600);
txSetFillColor (RGB (128,128,128));
txLine (600,400,640,600);
txSetFillColor (RGB (128,128,128));
txLine (640,400,680,600);
txSetFillColor (RGB (128,128,128));
txLine (680,400,720,600);
txSetFillColor (RGB (128,128,128));
txLine (720,400,760,600);
txSetFillColor (RGB (128,128,128));
txLine (760,400,800,600);
txSetFillColor (RGB (128,128,128));
txLine (800,400,840,600);
txSetFillColor (RGB (128,128,128));
txLine (840,400,880,600);
txSetFillColor (RGB (128,128,128));
txLine (880,400,920,600);
txSetFillColor (RGB (128,128,128));
txLine (920,400,960,600);
txSetFillColor (RGB (128,128,128));
txLine (960,400,1000,600);  //решетки забора снизу вверх
}

void Draw_Fencefromtoptobottom()
{txSetFillColor (RGB (128,128,128));
txLine (40,400,0,600);
txSetFillColor (RGB (128,128,128));
txLine (80,400,40,600);
txSetFillColor (RGB (128,128,128));
txLine (120,400,80,600);
txSetFillColor (RGB (128,128,128));
txLine (160,400,120,600);
txSetFillColor (RGB (128,128,128));
txLine (200,400,160,600);
txSetFillColor (RGB (128,128,128));
txLine (240,400,200,600);
txSetFillColor (RGB (128,128,128));
txLine (280,400,240,600);
txSetFillColor (RGB (128,128,128));
txLine (320,400,280,600);
txSetFillColor (RGB (128,128,128));
txLine (360,400,320,600);
txSetFillColor (RGB (128,128,128));
txLine (400,400,360,600);
txSetFillColor (RGB (128,128,128));
txLine (440,400,400,600);
txSetFillColor (RGB (128,128,128));
txLine (480,400,440,600);
txSetFillColor (RGB (128,128,128));
txLine (520,400,480,600);
txSetFillColor (RGB (128,128,128));
txLine (560,400,520,600);
txSetFillColor (RGB (128,128,128));
txLine (600,400,560,600);
txSetFillColor (RGB (128,128,128));
txLine (640,400,600,600);
txSetFillColor (RGB (128,128,128));
txLine (680,400,640,600);
txSetFillColor (RGB (128,128,128));
txLine (720,400,680,600);
txSetFillColor (RGB (128,128,128));
txLine (760,400,720,600);
txSetFillColor (RGB (128,128,128));
txLine (800,400,760,600);
txSetFillColor (RGB (128,128,128));
txLine (840,400,800,600);
txSetFillColor (RGB (128,128,128));
txLine (880,400,840,600);
txSetFillColor (RGB (128,128,128));
txLine (920,400,880,600);
txSetFillColor (RGB (128,128,128));
txLine (960,400,920,600);
txSetFillColor (RGB (128,128,128));
txLine (1000,400,960,600);  //решетки забора сверху вниз
}

void Draw_lefttreebehindfence()
{
txSetColor (RGB (139, 69, 19), 5);
txSetFillColor (RGB (139, 69, 19));
txRectangle(150,390,190,420) ; //часть дерева за забором
}

void Draw_righttreebehindfence()
{
txSetColor (RGB (139, 69, 19), 5);
txSetFillColor (RGB (139, 69, 19));
txRectangle(800,320,820,425) ;//часть правого дерева за забором
}

void Draw_fencebeforerighttree()
{
txSetColor (RGB (128,128,128), 5);
txSetFillColor (RGB (128,128,128));
txLine (840,400,800,600);
txSetFillColor (RGB (128,128,128));
txLine (800,400,840,600);
txSetFillColor (RGB (128,128,128));
txLine (760,400,800,600);
txSetFillColor (RGB (128,128,128));
txLine (800,400,760,600);       //часть забора перед правым деревом
}

void Draw_fencebeforelefttree()
{
txSetColor (RGB (128,128,128), 5);
txSetFillColor (RGB (128,128,128));
txLine (160,400,200,600);
txSetFillColor (RGB (128,128,128));
txLine (200,400,240,600);
txSetFillColor (RGB (128,128,128));
txLine (200,400,160,600);
txSetFillColor (RGB (128,128,128));
txLine (240,400,200,600);
txSetFillColor (RGB (128,128,128));
txLine (160,400,120,600);
txRectangle (0,400,1000,401); //забор перед левым деревом
}

void Draw_column()
{
txSetColor (RGB ( 128,64,0), 5);
txSetFillColor (RGB (128,64,0));
txRectangle (480,325,520,600);//столб
}

void Draw_shield()
{
txSetColor (RGB (128, 0, 0), 5);
txSetFillColor (TX_WHITE);
txRectangle (300,150,700,325);//щит
}

void Draw_sun(int x, int y)
{
txSetFillColor (RGB (255,255,0));
txSetColor (RGB (255,255,0), 5);
txCircle (x,y,70);  //солнце
}

void Draw_Markingontheshield()
{
txSetColor (RGB (0,0,0),5);
txSetFillColor (RGB (255,255,255));
txRectangle(375,175,625,300); //разметка на щите
}

void Draw_Markingarrows()
{
txSetColor (RGB (0,0,0), 5);
txSetFillColor (RGB (0,0,0));
txLine (450,230,550,230);
txSetColor (RGB(255, 0, 255 ),5);
txSetFillColor(RGB (255, 0, 255));
txLine (420,190,460,220);
txLine (430,220,460,220);
txLine (460,200,460,220);
txLine (580,190,540,220);
txLine (570,220,540,220);
txLine (540,200,540,220);  //разметка в виде стрелок
}

void Draw_ring()
{
txSetFillColor (TX_WHITE);
txSetColor (RGB (255,0,0),6);
txEllipse (400,250,600,300); //кольцо
}
