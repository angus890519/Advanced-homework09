/* 計算機概論實務-進階練習作業-作業10 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/12 16:31 */
#include<iostream> //函示庫
int main()
{
    int month, day,result; //定義
    printf("計算機概論實務-進階練習作業-作業09\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/04/12 16:31\n");
	printf("-----------------------------------\n"); 
    printf("請輸入一個日期：");
    scanf("%d%d",&month,&day);
    result = (month*2+day)%3;
        if(result == 0 ) //0分為"普通"
        {
			printf("今日的運勢：普通");
        }
        if( result == 1 ) //1分為"吉"
        {
			printf("今日的運勢：吉");
        }
        if( result == 2 ) //2分為"大吉" 
        {
			printf("今日的運勢：大吉");
        }
    return 0; //回傳值 0 
}
