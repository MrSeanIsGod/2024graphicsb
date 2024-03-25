#include <GL/glut.h>///�ϥ�GLUT�~�� 18��
#include "glm.h"
GLMmodel*pmodel=NULL;
void drawmodel(void)
{
    if(!pmodel){
    pmodel=glmReadOBJ("data/porsche.obj");
    if(!pmodel) exit(0);
    glmUnitize(pmodel);
    glmFacetNormals(pmodel);
    glmVertexNormals(pmodel,90.0);
    }
    glmDraw(pmodel,GLM_SMOOTH|GLM_MATERIAL);
}
void display() ///�ۤv�g
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);///�ۤv�g
    glutSwapBuffers();///�ۤv�g
}

int main(int argc, char *argv[])///�ڭ̪�main�禡 138��
{
    glutInit(&argc, argv);///��l��GLUT 140��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week06-3_glm_obj_model");///145�� �ص���
    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display�禡
    glutMainLoop();///174�� �D�n�j��
}
