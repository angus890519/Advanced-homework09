/* �p������׹��-�i���m�ߧ@�~-�@�~10 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/12 16:31 */
#include<iostream> //��ܮw
int main()
{
    int month, day,result; //�w�q
    printf("�p������׹��-�i���m�ߧ@�~-�@�~09\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/04/12 16:31\n");
	printf("-----------------------------------\n"); 
    printf("�п�J�@�Ӥ���G");
    scanf("%d%d",&month,&day);
    result = (month*2+day)%3;
        if(result == 0 ) //0����"���q"
        {
			printf("���骺�B�աG���q");
        }
        if( result == 1 ) //1����"�N"
        {
			printf("���骺�B�աG�N");
        }
        if( result == 2 ) //2����"�j�N" 
        {
			printf("���骺�B�աG�j�N");
        }
    return 0; //�^�ǭ� 0 
}
