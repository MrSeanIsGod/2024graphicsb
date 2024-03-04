///請貼上10行GLUT程式
#include <GL/glut.h>///使用GLUT外掛 18行
#include <stdio.h>///為了 printf()
void display() ///自己寫
{
    glutSolidTeapot(0.3);///自己寫
    glutSwapBuffers();///自己寫
}
void mouse(int button,int state,int x,int y)
{///定義mouse函式 button:0左鍵, 1:中鍵, 2:右鍵
    ///printf("Hello World\n");///遇到mouse印Hello
    ///printf("%d %d %d %d\n",button,state,x,y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0,-(%d-150)/150.0);\n",x,y);
    }
}
int main(int argc, char *argv[])///我們的main函式 138行
{
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week03 mouse");///145行 建視窗

    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutMouseFunc(mouse);///這一行,設定mouse函式

    glutMainLoop();///174行 主要迴圈
}
