#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){

	//double value=12.3456789;


	//cout << value << endl; 

	//cout.precision(4); // 修改输出精度,默认是6,精度包含整数位
	//cout << value << endl;

	//cout.flags(cout.fixed); // 修改为定点法,精度表示小数点后面的位数
	//cout << value << endl;

	//cout << 3.1415926535 << endl;
	//cout.unsetf(cout.fixed); // 取消定点法
	//cout << 3.1415926535 << endl;

	//int a,b,c;

	//cout << "输入a\n";
	//cin >> a;
	//if (cin.fail())
	//{
	//	cout << "输入错误\n";
	//	cin.clear();
	//	cin.sync();
	//}
	//cout << "输入b\n";
	//cin >> b;
	//if (cin.fail())
	//{
	//	cout << "输入错误\n";
	//	cin.clear();
	//	cin.sync();
	//}	
	//
	//cout << "输入c\n";
	//cin >> c;
	//if (cin.fail())
	//{
	//	cout << "输入错误\n";
	//	cin.clear();
	//	cin.sync();
	//}

	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

	// 输入半径计算周长和面积,保留两位小数
	//float radius;
	//float perimeter; //周长
	//float area;// 面积

	//cin >> radius;
	//perimeter = 2*3.14*radius;
	//area = 3.14*radius*radius;

	//cout.precision(2);
	//cout.flags(cout.fixed);

	//cout << "周长:" << perimeter << endl;
	//cout << "面积:" << area << endl;

	//system("pause");

	//char name[32];
	//char addr[32];

	//printf("姑娘芳名？\n");
	//scanf("%s",name);

	//fflush(stdin); // 清除缓冲区

	//printf("%s姑娘家住何处？\n", name);
	//gets(addr);

	//printf("家住%s的%s姑娘,我中意你！\n",addr, name);
	//printf("字符串占用内存大小%d\n", sizeof(addr));
	//printf("字符串长度%d\n", strlen(addr));

	// 逗号表达式优先级最低
	//int x = 0;
	//x = 3+5, 3*5, 10/5;		// x=8
	//x = (3+5, 3*5, 10/5);	// x=2
	//cout << "x = " << x << endl;

	// 强制类型转换
	//int x = 257+100;
	//cout << "x = " << x << endl; // x = 357

	//x = (char)257+100;
	//cout << "x = " << x << endl; // x = 101

	//printf("%d", x);

	// if...else if...的使用
	//int salary;
	//string houseRet; // 是否有房
	//string carRet; // 是否有车

	//cout << "请问薪资多少？" << endl;
	//cin >> salary;
	//cout << "有房吗？" << endl;

	//cin >> houseRet;
	//cout << "有车吗？" << endl;

	//cin >> carRet;

	//if (salary < 20000){
	//	cout << "你是个好人！" << endl;
	//}else if (houseRet == "有"){
	//	cout << "我没有什么要求，只要你对我好就行！" << endl;
	//}else if (carRet == "有"){
	//	cout << "还不错哦！" << endl;
	//}else {
	//	cout << "有缘再见！" << endl;
	//}


	// 输入字符如果是小写转换成大写，如果是大写转换成小写
	//char a;

	//cout << "输入一个字符：" << endl;
	//cin >> a;

	//if (a >= 'a' && a <= 'z')
	//{
	//	a = a-'a'+'A';
	//}else if (a >= 'A' && a <= 'Z')
	//{
	//	a = a-'A'+'a';
	//}

	//cout << a << endl;

	// 输入0-9转换成大写
	// 方法1：不高效
	//int a;

	//cout << "输入一个数字（0-9）：";

	//while ((cin >> a) != 0)
	//{
	//	switch (a){
	//	case 0:
	//		cout << "零";
	//		break;
	//	case 1:
	//		cout << "壹";
	//		break;
	//	case 2:
	//		cout << "贰";
	//		break;
	//	case 3:
	//		cout << "叁";
	//		break;
	//	case 4:
	//		cout << "肆";
	//		break;
	//	case 5:
	//		cout << "伍";
	//		break;
	//	case 6:
	//		cout << "陆";
	//		break;
	//	case 7:
	//		cout << "柒";
	//		break;
	//	case 8:
	//		cout << "捌";
	//		break;
	//	case 9:
	//		cout << "玖";
	//		break;
	//	default:
	//		break;
	//	}
	//	cout << endl;
	//}
	// 方法2：时间换空间，高效
	//string str[]={"零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖"};

	//while((cin >> a) != 0){
	//	if (a >= 0 && a <= 9)
	//	{
	//		cout << str[a] << endl;
	//	}
	//}

	// 输入年份和月份，判断当前月份有几天（能被400整除为世纪闰年，能被4整除并不能被100整除的是普通闰年）
	//int year;
	//int month;
	//int days;
	//bool flag; // 是否闰年

	//cout << "输入年份：" << endl;
	//cin >> year;
	//cout << "输入年份：" << endl;
	//cin >> month;

	//if (year % 400 == 0)
	//{
	//	flag = true;
	//}else if (year % 4 == 0 && year % 100 != 0){
	//	flag = true;
	//}else{
	//	flag = false;
	//}

	//switch(month){
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	days = 31;
	//	break;
	//case 2:
	//	days = flag ? 29 : 28;
	//	break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	days = 30;
	//	break;
	//default:
	//	cout << "月份输入错误！" << endl;
	//	break;
	//}
	//cout << year << "年" << month << "月有" << days << "天" << endl;

	int sum=0;
	int i=1;
	do 
	{
		sum+=i;
		i++;
	} while (i <= 100);

	cout << sum << endl;

	system("pause");
	return 0;
}