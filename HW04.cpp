#include <iostream>  
#include <cstring>
using namespace std;

int main()
{
	/*建立輸入變數TimeInput表示輸入時間(秒)
	 TimeOutput_h,TimeOutput_m,TimeOutput_s
	 表示轉換的時、分、秒*/
	int TimeInput, TimeOutput_h, TimeOutput_m, TimeOutput_s, num;

	cout << "請輸入時間";
	cin >> TimeInput;
	TimeOutput_h = (TimeInput / 3600);   //秒除以3600等於時 
	TimeOutput_m = (TimeInput % 3600) / 60;//秒除以3600的餘數除以60等於分 
	TimeOutput_s = (TimeInput % 3600) % 60;//分除以60的餘數等於秒 

	cout << TimeOutput_h << "時" << TimeOutput_m << "分" << TimeOutput_s << "秒";//顯示時間

	
	system("pause");   //暫停，案任意鍵繼續
	return 0;

}