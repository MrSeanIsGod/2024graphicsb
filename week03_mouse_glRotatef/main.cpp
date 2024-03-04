#include <GL/glut.h>///使用GLUT外掛 18行
#include <stdio.h>///為了 printf()
float teapotX=0,teapotY=0;///新加的程式，用來放茶壺的座標
float angle=0;
void display() ///自己寫
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景
    glPushMatrix();///備份矩陣
        ///glTranslatef(teapotX,teapotY,0);///把座標移動
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();///還原矩陣
    glutSwapBuffers();///自己寫
}
void mouse(int button,int state,int x,int y)
{///我們這裡，要巧妙的修正
    teapotX=(x-150)/150.0;
    teapotY=-(y-150)/150.0;
}
void motion(int x,int y)
{
    angle=x;
    display();
}
int main(int argc, char *argv[])///我們的main函式 138行
{
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week03 mouse glTranslatef");///145行 建視窗

    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutMouseFunc(mouse);///這一行,設定mouse函式
    glutMotionFunc(motion);
    glutMainLoop();///174行 主要迴圈
}
