#include <stdio.h>
#include "CMP3_MCI.h" //�O�o�n�����޸�,����Ψ��A��
CMP3_MCI myMP3; //�ŧi�@���ܼ�,�W�r�s myMP3
int main()
{
    myMP3.Load("filename.mp3");
    myMP3.Play();

    int a;//�����d��, �{�����n�ֳt����
    scanf("%d",&a);
}
