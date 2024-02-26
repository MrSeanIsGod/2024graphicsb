#include <GL/glut.h>///使用GLUT外掛 18行
#include <math.h>
void myCircle(float cx, float cy, float r){
    glBegin(GL_POLYGON);
    for(float a=0;a<=3.14*2;a+=0.1){
        glVertex2f(r*cos(a)+cx,r*sin(a)+cy);
    }
    glEnd();
}
void display() ///自己寫
{
    glColor3f(1,1,1);myCircle(0,0,1);
    glColor3f(0,0,0);myCircle(-0.5,+0.5,0.3);
    glColor3f(0,0,0);myCircle(+0.5,+0.5,0.3);
    glColor3f(0,0,0);myCircle(0,-0.3,0.7);
    glutSwapBuffers();///自己寫
}

int main(int argc, char *argv[])///我們的main函式 138行
{
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week02_glut_color_teapot");///145行 建視窗
    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutMainLoop();///174行 主要迴圈
}
