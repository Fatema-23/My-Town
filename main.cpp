
                        /*---------------------*/
                        /*Project Name:My Town*/
                        /*---------------------*/

                           /*--Team Members--*/
/*..................................................................*/
/* -- Name:Fatema Akter Mim --
/*   ID:181-15-1941
/*..................................................................*/


#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void display()
{
    glClearColor(0.16078f, 0.6f, 0.8f, 1.0f); //RGB Background color
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 720, 0.0, 1280); // High and low value of x and y asix
}

void components()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //Sky
    glBegin(GL_POLYGON);
	glColor3ub(102, 199, 247);
	glVertex2i(0, 1500);
	glVertex2i(2000, 1500);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(2000, 0);
	glVertex2i(0, 0);
	glEnd();

	//Cloud-1//////////////////////////////////////////////////////////////
	glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(100+20*cos(theta) ,1180+ 45*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(100+30*cos(theta) ,1160+ 45*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(100+20*cos(theta) ,1130+ 45*sin(theta));
    }
    glEnd();


	//Cloud-2//////////////////////////////////////////////////////////////
	glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(250+15*cos(theta) ,1160+ 35*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(270+15*cos(theta) ,1160+ 35*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(250+30*cos(theta) ,1130+ 45*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(225+20*cos(theta) ,1155+ 35*sin(theta));
    }
    glEnd();

    //Cloud-3//////////////////////////////////////////////////////////////
    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(400+20*cos(theta) ,1145+ 45*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(420+40*cos(theta) ,1150+ 45*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(420+20*cos(theta) ,1190+ 45*sin(theta));
    }
    glEnd();

    //Cloud-4//////////////////////////////////////////////////////////////
    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(600+20*cos(theta) ,1130+ 45*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(620+40*cos(theta) ,1130+ 45*sin(theta));
    }
    glEnd();

    glColor3ub(224, 255, 255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(620+20*cos(theta) ,1180+ 45*sin(theta));
    }
    glEnd();

    //Sun///////////////////////////////////////////////////////////////////
    glColor3ub(255, 69, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(320+20*cos(theta) ,950+ 65*sin(theta));
    }
    glEnd();

    //hill
    glColor3ub(56, 117, 160);
    glBegin(GL_POLYGON);
    glVertex2i(250, 800);
    glVertex2i(620, 800);
    glVertex2i(400, 1100);
    glEnd();


    glColor3ub(56, 117, 160);
    glBegin(GL_POLYGON);
    glVertex2i(150, 800);
    glVertex2i(370, 855);
    glVertex2i(270, 1020);
    glEnd();

    glColor3ub(112, 161, 182);
    glBegin(GL_POLYGON);
    glVertex2i(320, 940);
    glVertex2i(345, 905);
    glVertex2i(400, 1100);
    glEnd();

    glColor3ub(56, 117, 160);
    glBegin(GL_POLYGON);
    glVertex2i(620, 800);
    glVertex2i(750, 800);
    glVertex2i(680, 950);
    glEnd();

    glColor3ub(112, 161, 182);
    glBegin(GL_POLYGON);
    glVertex2i(656, 890);
    glVertex2i(670, 900);
    glVertex2i(680, 950);
    glEnd();

    glColor3ub(56, 117, 160);
    glBegin(GL_POLYGON);
    glVertex2i(0, 800);
    glVertex2i(150, 800);
    glVertex2i(70, 900);
    glEnd();


    //hill-extra shape behind school
    glColor3ub(56, 117, 160);
    glBegin(GL_POLYGON);
    glVertex2i(150, 800);
    glVertex2i(300, 800);
    glVertex2i(450, 900);
    glEnd();

    //shadow-small
    glColor3ub(112, 161, 182);
    glBegin(GL_POLYGON);
    glVertex2i(220, 930);
    glVertex2i(265, 975);
    glVertex2i(270, 1020);
    glEnd();

    //shadow-big
    glColor3ub(112, 161, 182);
    glBegin(GL_POLYGON);
    glVertex2i(350, 980);
    glVertex2i(395, 1030);
    glVertex2i(400, 1100);
    glEnd();

    //Hill-trees///////////////////////////////////////////////////
    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(700+10*cos(theta) ,770+ 55*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(685+10*cos(theta) ,770+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(665+10*cos(theta) ,775+85*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(655+10*cos(theta) ,770+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(640+10*cos(theta) ,770+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(1+10*cos(theta) ,770+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(180+10*cos(theta) ,770+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(195+10*cos(theta) ,777+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(205+10*cos(theta) ,755+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(215+10*cos(theta) ,775+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(235+10*cos(theta) ,785+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(245+10*cos(theta) ,780+ 60*sin(theta));
    }
    glEnd();

    //Road
    glColor3ub(47,79,79);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0); // 2i, here 2=3d and i=int value, 3=3d adn f=float
    glVertex2i(1280, 0);
    glVertex2i(1280, 400);
    glVertex2i(0, 400);
    glEnd();

    //Road line

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(30, 200); // 2i, here 2=3d and i=int value, 3=3d adn f=float
    glVertex2i(30,180);
    glVertex2i(100, 180);
    glVertex2i(100, 200);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(140, 200); // 2i, here 2=3d and i=int value, 3=3d adn f=float
    glVertex2i(140,180);
    glVertex2i(210, 180);
    glVertex2i(210, 200);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(250, 200); // 2i, here 2=3d and i=int value, 3=3d adn f=float
    glVertex2i(250,180);
    glVertex2i(310, 180);
    glVertex2i(310, 200);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(360, 200); // 2i, here 2=3d and i=int value, 3=3d adn f=float
    glVertex2i(360,180);
    glVertex2i(420, 180);
    glVertex2i(420, 200);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(470, 200); // 2i, here 2=3d and i=int value, 3=3d adn f=float
    glVertex2i(470,180);
    glVertex2i(555, 180);
    glVertex2i(555, 200);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(600, 200); // 2i, here 2=3d and i=int value, 3=3d adn f=float
    glVertex2i(600,180);
    glVertex2i(680, 180);
    glVertex2i(680, 200);
    glEnd();

/////////////////Car-1//////////////
    glColor3ub(250,128,114);
    glBegin(GL_POLYGON);
	glVertex2f(115, 375);
	glVertex2f(115, 235);
	glVertex2f(200, 235);
	glVertex2f(170, 375);
	glEnd();


	glColor3ub(250,228,114);
    glBegin(GL_POLYGON);
	glVertex2f(170, 235);
	glVertex2f(205, 235);
	glVertex2f(205, 335);
	glVertex2f(170, 335);
	glEnd();

	//car-1 wheel
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(180+10*cos(theta) ,235+ 30*sin(theta));
    }
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(135+10*cos(theta) ,235+ 30*sin(theta));
    }
    glEnd();



    /////////////////Car-2//////////////
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
	glVertex2f(325, 375);
	glVertex2f(325, 235);
	glVertex2f(380, 235);
	glVertex2f(370, 375);
	glEnd();


	glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
	glVertex2f(395, 343);
	glVertex2f(372, 345);
	glVertex2f(372, 260);
	glVertex2f(405, 260);
	glEnd();

	glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
	glVertex2f(415, 305);
	glVertex2f(372, 305);
	glVertex2f(372, 235);
	glVertex2f(415, 235);
	glEnd();



	/////////car-2 wheel  half////////////
    glColor3ub(160,160,160);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(345+10*cos(theta) ,235+ 30*sin(theta));
    }
    glEnd();

    glColor3ub(160,160,160);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(395+10*cos(theta) ,235+ 30*sin(theta));
    }
    glEnd();

    ////////////////car-2 wheel //////////
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(345+8*cos(theta) ,235+ 22*sin(theta));
    }
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(395+8*cos(theta) ,235+ 22*sin(theta));
    }
    glEnd();


    ////////////car2-window/////////////////////

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
	glVertex2f(335, 360);
	glVertex2f(335, 325);
	glVertex2f(362, 325);
	glVertex2f(360, 360);
	glEnd();

	glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
	glVertex2f(390, 330);
	glVertex2f(392, 315);
	glVertex2f(378, 315);
	glVertex2f(378, 330);
	glEnd();


	///////////car2-door//////////

	glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
	glVertex2f(415, 298);
	glVertex2f(415, 302);
	glVertex2f(326, 302);
	glVertex2f(326, 298);
	glEnd();


	glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
	glVertex2f(371, 235);
	glVertex2f(371, 300);
	glVertex2f(368, 300);
	glVertex2f(368, 235);
	glEnd();


    //Field-1
    glColor3ub(178,255,102);
    glBegin(GL_POLYGON);
    glVertex2i(0, 400);
    glVertex2i(1280, 400);
    glVertex2i(1280,800);
    glVertex2i(0, 800);
    glEnd();


    //Road Grass

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(1, 400);
    glVertex2i(12, 400);
    glVertex2i(8, 480);
    glEnd();


    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(5, 400);
    glVertex2i(15, 400);
    glVertex2i(20, 480);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(9, 400);
    glVertex2i(20, 400);
    glVertex2i(27, 480);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(18, 400);
    glVertex2i(25, 400);
    glVertex2i(31, 480);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(23, 400);
    glVertex2i(32, 400);
    glVertex2i(38, 480);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(33, 400);
    glVertex2i(42, 400);
    glVertex2i(48, 480);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(48, 400);
    glVertex2i(53, 400);
    glVertex2i(52, 480);
    glEnd();



    //Hospital-way

    glColor3ub(69, 117, 117);
    glBegin(GL_POLYGON);
    glVertex2i(410, 400); // 2i, here 2=3d and i=int value, 3=3d adn f=float
    glVertex2i(640, 400);
    glVertex2i(630, 630);
    glVertex2i(520, 600);
    glEnd();

    //Hospital-P_1
    glColor3ub(145, 114, 236);
    glBegin(GL_POLYGON);
    glVertex2i(520, 600);
    glVertex2i(630, 630);
    glVertex2i(650, 1100);
    glVertex2i(520, 1160);
    glEnd();

    //Hospital-P_2
    glColor3ub(203, 207, 236);
    glBegin(GL_POLYGON);
    glVertex2i(480, 650);
    glVertex2i(520, 600);
    glVertex2i(520, 1160);
    glVertex2i(470, 1100);
    glEnd();


    //Hospital-P_3
    glColor3ub(200, 227, 212);
    glBegin(GL_POLYGON);
    glVertex2i(280, 635);
    glVertex2i(490, 635);
    glVertex2i(495, 900);
    glVertex2i(280, 900);
    glEnd();

    //Hospital-P_4
    glColor3ub(215, 221, 196);
    glBegin(GL_POLYGON);
    glVertex2i(250, 670);
    glVertex2i(280, 635);
    glVertex2i(280, 900);
    glVertex2i(250, 880);
    glEnd();


    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(392.5+10*cos(theta) ,839+ 30*sin(theta));
    }
    glEnd();

   //hospital sign-PT1
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(395, 860);
	glVertex2f(390, 860);
	glVertex2f(390, 815);
	glVertex2f(395, 815);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(385, 845);
	glVertex2f(400, 845);
	glVertex2f(400, 830);
	glVertex2f(385, 830);
	glEnd();

// hospital Door
	glBegin(GL_POLYGON);
	glColor3ub(183, 184, 188);
	glVertex2f(415, 775);
	glVertex2f(415, 635);
	glVertex2f(365, 635);
	glVertex2f(365, 775);
	glEnd();



 //Hospital-P_3 window

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(285, 820);
	glVertex2f(310, 820);
	glVertex2f(310, 775);
	glColor3ub(97, 131, 159);
	glVertex2f(285, 775);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(345, 820);
	glVertex2f(320, 820);
	glVertex2f(320, 775);
	glColor3ub(97, 131, 159);
	glVertex2f(345, 775);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(455, 820);
	glVertex2f(430, 820);
	glVertex2f(430, 775);
	glColor3ub(97, 131, 159);
	glVertex2f(455, 775);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(485, 820);
	glVertex2f(460, 820);
	glVertex2f(460, 775);
	glColor3ub(97, 131, 159);
	glVertex2f(485, 775);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(455, 700);
	glVertex2f(430, 700);
	glVertex2f(430, 755);
	glColor3ub(97, 131, 159);
	glVertex2f(455, 755);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(485, 700);
	glVertex2f(460, 700);
	glVertex2f(460, 755);
	glColor3ub(97, 131, 159);
	glVertex2f(485, 755);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(285, 700);
	glVertex2f(310, 700);
	glVertex2f(310, 755);
	glColor3ub(97, 131, 159);
	glVertex2f(285, 755);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(345, 700);
	glVertex2f(320, 700);
	glVertex2f(320, 755);
	glColor3ub(97, 131, 159);
	glVertex2f(345, 755);
	glEnd();


	 //Hospital-P_4 DOOR

    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(275, 835);
	glVertex2f(255, 820);
	glVertex2f(255, 675);
	glColor3ub(97, 131, 159);
	glVertex2f(275, 660);
	glEnd();


//Hospital-P_1 window

 glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(530, 1060);
	glVertex2f(641, 1060);
	glVertex2f(639, 1010);
	glColor3ub(97, 131, 159);
	glVertex2f(530, 1010);
	glEnd();

 glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(530, 980);
	glVertex2f(560, 980);
	glVertex2f(560, 935);
	glColor3ub(97, 131, 159);
	glVertex2f(530, 935);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(570, 980);
	glVertex2f(600, 980);
	glVertex2f(600, 935);
	glColor3ub(97, 131, 159);
	glVertex2f(570, 935);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(610, 980);
	glVertex2f(638, 980);
	glVertex2f(636, 935);
	glColor3ub(97, 131, 159);
	glVertex2f(610, 935);
	glEnd();


 glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(530, 900);
	glVertex2f(635, 900);
	glVertex2f(633, 860);
	glColor3ub(97, 131, 159);
	glVertex2f(530, 860);
	glEnd();

 glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(530, 820);
	glVertex2f(630, 820);
	glVertex2f(628, 775);
	glColor3ub(97, 131, 159);
	glVertex2f(530, 775);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(600, 740);
	glVertex2f(570, 740);
	glVertex2f(570, 615);
	glColor3ub(97, 131, 159);
	glVertex2f(600, 621);
	glEnd();


//Hospital-P_2 window
glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(510, 1080);
	glVertex2f(480, 1064);
	glVertex2f(482, 1005);
	glColor3ub(97, 131, 159);
	glVertex2f(510, 1005);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(59, 91, 132);
	glVertex2f(510, 980);
	glVertex2f(484, 975);
	glVertex2f(484, 915);
	glColor3ub(97, 131, 159);
	glVertex2f(510, 915);
	glEnd();



    //Building-1_p-1
    glColor3ub(57, 110, 176);
    glBegin(GL_POLYGON);
    glVertex2i(70, 655);
    glVertex2i(180, 670);
    glVertex2i(180, 1160);
    glVertex2i(70, 1160);
    glEnd();


    //Building-1_p-2
    glColor3ub(153, 204, 253);
    glBegin(GL_POLYGON);
    glVertex2i(60, 665);
    glVertex2i(70, 655);
    glVertex2i(70, 1160);
    glVertex2i(60, 1140);
    glEnd();


//Building-1_p-1 window
   glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(75, 1060);
    glVertex2i(90, 1060);
    glVertex2i(90, 1100);
    glVertex2i(75, 1100);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(95, 1060);
    glVertex2i(110, 1060);
    glVertex2i(110, 1100);
    glVertex2i(95, 1100);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(115, 1060);
    glVertex2i(130, 1060);
    glVertex2i(130, 1100);
    glVertex2i(115, 1100);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(135, 1060);
    glVertex2i(150, 1060);
    glVertex2i(150, 1100);
    glVertex2i(135, 1100);
    glEnd();

     glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(155, 1060);
    glVertex2i(170, 1060);
    glVertex2i(170, 1100);
    glVertex2i(155, 1100);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(75, 1040);
    glVertex2i(90, 1040);
    glVertex2i(90, 1000);
    glVertex2i(75, 1000);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(110, 1040);
    glVertex2i(95, 1040);
    glVertex2i(95, 1000);
    glVertex2i(110, 1000);
    glEnd();

    glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2i(130, 1040);
    glVertex2i(115, 1040);
    glVertex2i(115, 1000);
    glVertex2i(130, 1000);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(150, 1040);
    glVertex2i(135, 1040);
    glVertex2i(135, 1000);
    glVertex2i(150, 1000);
    glEnd();


   glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(170, 1040);
    glVertex2i(155, 1040);
    glVertex2i(155, 1000);
    glVertex2i(170, 1000);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(75, 940);
    glVertex2i(90, 940);
    glVertex2i(90, 980);
    glVertex2i(75, 980);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(110, 940);
    glVertex2i(95, 940);
    glVertex2i(95, 980);
    glVertex2i(110, 980);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(130, 940);
    glVertex2i(115, 940);
    glVertex2i(115, 980);
    glVertex2i(130, 980);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(150, 940);
    glVertex2i(135, 940);
    glVertex2i(135, 980);
    glVertex2i(150, 980);
    glEnd();


   glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(170, 940);
    glVertex2i(155, 940);
    glVertex2i(155, 980);
    glVertex2i(170, 980);
    glEnd();



    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(75, 840);
    glVertex2i(90, 840);
    glVertex2i(90, 880);
    glVertex2i(75, 880);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(110, 840);
    glVertex2i(95, 840);
    glVertex2i(95, 880);
    glVertex2i(110, 880);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(130, 840);
    glVertex2i(115, 840);
    glVertex2i(115, 880);
    glVertex2i(130, 880);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(150, 840);
    glVertex2i(135, 840);
    glVertex2i(135, 880);
    glVertex2i(150, 880);
    glEnd();


   glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(170, 840);
    glVertex2i(155, 840);
    glVertex2i(155, 880);
    glVertex2i(170, 880);
    glEnd();


// Building-1_p-1 Door
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(150, 665);
	glVertex2f(115, 660);
	glVertex2f(115, 780);
	glVertex2f(150, 780);
	glEnd();


//Building-1_p-1-way

    glColor3ub(69, 117, 117);
    glBegin(GL_POLYGON);
    glVertex2i(70, 400);
    glVertex2i(130, 400);
    glVertex2i(115, 664);
    glVertex2i(150, 665);
    glEnd();

//BUILDING second way
    glColor3ub(69, 117, 117);
    glBegin(GL_POLYGON);
    glVertex2i(115, 550);
    glVertex2i(395, 595);
    glVertex2i(415, 635);
    glVertex2i(365, 635);
    glVertex2i(125, 590);
    glEnd();


//Tree

    glColor3ub(0,100,0);
    glBegin(GL_POLYGON);
    glVertex2i(225, 860);
    glVertex2i(200, 860);
    glVertex2i(215, 1060);
    glEnd();


    glColor3ub(146, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(208, 800);
    glVertex2i(215, 800);
    glVertex2i(215, 863);
    glVertex2i(208, 863);
    glEnd();

   glColor3ub(0,100,0);
    glBegin(GL_POLYGON);
    glVertex2i(240, 860);
    glVertex2i(215, 860);
    glVertex2i(238, 1060);
    glEnd();


    glColor3ub(146, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(225, 800);
    glVertex2i(232, 800);
    glVertex2i(232, 863);
    glVertex2i(225, 863);
    glEnd();

//building tree
   glColor3ub(0,100,0);
    glBegin(GL_POLYGON);
    glVertex2i(5, 805);
    glVertex2i(65, 805);
    glVertex2i(35, 990);
    glEnd();

    glColor3ub(0,100,0);
    glBegin(GL_POLYGON);
    glVertex2i(5, 775);
    glVertex2i(65, 775);
    glVertex2i(35, 960);
    glEnd();

    glColor3ub(0,100,0);
    glBegin(GL_POLYGON);
    glVertex2i(5, 753);
    glVertex2i(65, 753);
    glVertex2i(35, 945);
    glEnd();

    glColor3ub(146, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(38, 665);
    glVertex2i(32, 665);
    glVertex2i(32, 780);
    glVertex2i(38, 780);
    glEnd();


    //building grass
   glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(49, 665);
    glVertex2i(53, 665);
    glVertex2i(52, 720);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(46, 665);
    glVertex2i(51, 665);
    glVertex2i(58, 720);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(40, 665);
    glVertex2i(46, 665);
    glVertex2i(48, 720);
    glEnd();


    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(10, 665);
    glVertex2i(16, 665);
    glVertex2i(21, 720);
    glEnd();
    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(18, 665);
    glVertex2i(25, 665);
    glVertex2i(20, 720);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(27, 665);
    glVertex2i(33, 665);
    glVertex2i(24, 720);
    glEnd();


//hospital grass

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(249, 665);
    glVertex2i(253, 665);
    glVertex2i(252, 720);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(253, 660);
    glVertex2i(259, 660);
    glVertex2i(257, 722);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(257, 655);
    glVertex2i(263, 655);
    glVertex2i(262, 724);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(261, 650);
    glVertex2i(267, 650);
    glVertex2i(266, 723);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(265, 642);
    glVertex2i(271, 642);
    glVertex2i(270, 720);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(270, 636);
    glVertex2i(275, 636);
    glVertex2i(273, 718);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(275, 631);
    glVertex2i(281, 631);
    glVertex2i(285, 718);
    glEnd();

    glColor3ub(50,205,50);
    glBegin(GL_POLYGON);
    glVertex2i(273, 631);
    glVertex2i(278, 631);
    glVertex2i(276, 718);
    glEnd();


    //Big-tree/////////////////////////
    glColor3ub(181, 91, 1);
    glBegin(GL_POLYGON);
    glVertex2i(260, 631);
    glVertex2i(275, 631);
    glVertex2i(266, 818);
    glVertex2i(266, 818);
    glEnd();

    glColor3ub(181, 91, 1);
    glBegin(GL_POLYGON);
    glVertex2i(265, 671);
    glVertex2i(275, 671);
    glVertex2i(276, 758);
    glEnd();

    glColor3ub(0, 138, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(245+30*cos(theta) ,785+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 138, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(295+30*cos(theta) ,785+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 138, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(257+30*cos(theta) ,830+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(0, 138, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(275+30*cos(theta) ,870+ 65*sin(theta));
    }
    glEnd();

    glColor3ub(238, 94, 7);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(275+5*cos(theta) ,870+ 10*sin(theta));
    }
    glEnd();

    glColor3ub(238, 94, 7);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(255+5*cos(theta) ,850+ 10*sin(theta));
    }
    glEnd();

    glColor3ub(238, 94, 7);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(285+5*cos(theta) ,845+ 10*sin(theta));
    }
    glEnd();

    glColor3ub(238, 94, 7);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(270+5*cos(theta) ,800+ 10*sin(theta));
    }
    glEnd();

    glColor3ub(238, 94, 7);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(295+5*cos(theta) ,775+ 10*sin(theta));
    }
    glEnd();

    glColor3ub(238, 94, 7);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(235+5*cos(theta) ,775+ 10*sin(theta));
    }
    glEnd();

    ///////////////////////////////new code/////////////////////////////


    //Ambulance
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(580, 500);
    glVertex2i(508, 500);
    glVertex2i(508, 670);
    glVertex2i(580, 670);
    glEnd();


glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(580, 500);
    glVertex2i(575, 500);
    glVertex2i(575, 620);
    glVertex2i(580, 620);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(580, 500);
    glVertex2i(615, 500);
    glVertex2i(605, 620);
    glVertex2i(580, 620);
    glEnd();


    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(608, 500);
    glVertex2i(625, 500);
    glVertex2i(625, 580);
    glVertex2i(608, 580);
    glEnd();



    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(508, 540);
    glVertex2i(625, 540);
    glVertex2i(625, 560);
    glVertex2i(508, 560);
    glEnd();



///////ambulance sign//////


glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(545+10*cos(theta) ,615+ 50*sin(theta));
    }
    glEnd();


    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(537, 610);
    glVertex2i(553, 610);
    glVertex2i(553, 625);
    glVertex2i(537, 625);
    glEnd();


    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2i(548, 650);
    glVertex2i(543, 650);
    glVertex2i(543, 585);
    glVertex2i(548, 585);
    glEnd();

////////////ambulance window/////////


    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(588, 580);
    glVertex2i(603, 580);
    glVertex2i(600, 612);
    glVertex2i(588, 612);
    glEnd();

///////////////////ambulance wheel1/////////

    glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(525+10*cos(theta) ,500+ 30*sin(theta));
    }
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(525+8*cos(theta) ,490+ 30*sin(theta));
    }
    glEnd();

    //////////////////////ambulance wheel2//////////

    glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(600+10*cos(theta) ,500+ 30*sin(theta));
    }
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(600+8*cos(theta) ,490+ 30*sin(theta));
    }
    glEnd();


    //////////above Road tree/////////////

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(140+10*cos(theta) ,400+ 50*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(158+12*cos(theta) ,399+70*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(179+11*cos(theta) ,399+80*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(200+11*cos(theta) ,399+67*sin(theta));
    }
    glEnd();

      glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(220+11*cos(theta) ,399+73*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<175;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(235+9*cos(theta) ,396.5+50*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(255+11*cos(theta) ,399+60*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(275+11*cos(theta) ,399+60*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(295+11*cos(theta) ,399+60*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(315+11*cos(theta) ,399+75*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(335+11*cos(theta) ,399+75*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(355+11*cos(theta) ,399+55*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(375+11*cos(theta) ,399+85*sin(theta));
    }
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180;i++)
    {
    float theta=i*3.142/180;
    glVertex2f(395+15*cos(theta) ,399+65*sin(theta));
    }
    glEnd();






/////////////////////////////////////////////////

	glFlush();
}

int main(int argc, char ** argv) {

    glutInit(&argc, argv); // GLUT Initialization
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Display mode setting
    glutInitWindowPosition(0, 0);  // Top-Left display widows position
    glutInitWindowSize(1280, 720); // Height and width setting
    glutCreateWindow("My Town by Cipher"); // Windows title name
    display(); // Call the method
    glutDisplayFunc(components); // Call the home method
    glutMainLoop();


    return 0;
}
