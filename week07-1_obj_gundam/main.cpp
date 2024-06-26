#include <GL/glut.h>///使用GLUT外掛 18行
#include "glm.h"
GLMmodel*pmodel=NULL;
void drawmodel(void)
{
    if(!pmodel){
    pmodel=glmReadOBJ("gundam.obj");
    if(!pmodel) exit(0);
    glmUnitize(pmodel);
    glmFacetNormals(pmodel);
    glmVertexNormals(pmodel,90.0);
    }
    glmDraw(pmodel,GLM_SMOOTH|GLM_MATERIAL);
}
void display() ///自己寫
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    drawmodel();
    glutSwapBuffers();///自己寫
}

int main(int argc, char *argv[])///我們的main函式 138行
{
    glutInit(&argc, argv);///初始化GLUT 140行
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("week06-3_glm_obj_model");///145行 建視窗
    glutDisplayFunc(display);///148行 設定要畫圖的display函式
    glutMainLoop();///174行 主要迴圈
}
