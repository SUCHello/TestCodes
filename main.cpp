#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){

	//double value=12.3456789;


	//cout << value << endl; 

	//cout.precision(4); // �޸��������,Ĭ����6,���Ȱ�������λ
	//cout << value << endl;

	//cout.flags(cout.fixed); // �޸�Ϊ���㷨,���ȱ�ʾС��������λ��
	//cout << value << endl;

	//cout << 3.1415926535 << endl;
	//cout.unsetf(cout.fixed); // ȡ�����㷨
	//cout << 3.1415926535 << endl;

	//int a,b,c;

	//cout << "����a\n";
	//cin >> a;
	//if (cin.fail())
	//{
	//	cout << "�������\n";
	//	cin.clear();
	//	cin.sync();
	//}
	//cout << "����b\n";
	//cin >> b;
	//if (cin.fail())
	//{
	//	cout << "�������\n";
	//	cin.clear();
	//	cin.sync();
	//}	
	//
	//cout << "����c\n";
	//cin >> c;
	//if (cin.fail())
	//{
	//	cout << "�������\n";
	//	cin.clear();
	//	cin.sync();
	//}

	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

	// ����뾶�����ܳ������,������λС��
	//float radius;
	//float perimeter; //�ܳ�
	//float area;// ���

	//cin >> radius;
	//perimeter = 2*3.14*radius;
	//area = 3.14*radius*radius;

	//cout.precision(2);
	//cout.flags(cout.fixed);

	//cout << "�ܳ�:" << perimeter << endl;
	//cout << "���:" << area << endl;

	//system("pause");

	//char name[32];
	//char addr[32];

	//printf("���﷼����\n");
	//scanf("%s",name);

	//fflush(stdin); // ���������

	//printf("%s�����ס�δ���\n", name);
	//gets(addr);

	//printf("��ס%s��%s����,�������㣡\n",addr, name);
	//printf("�ַ���ռ���ڴ��С%d\n", sizeof(addr));
	//printf("�ַ�������%d\n", strlen(addr));

	// ���ű��ʽ���ȼ����
	//int x = 0;
	//x = 3+5, 3*5, 10/5;		// x=8
	//x = (3+5, 3*5, 10/5);	// x=2
	//cout << "x = " << x << endl;

	// ǿ������ת��
	//int x = 257+100;
	//cout << "x = " << x << endl; // x = 357

	//x = (char)257+100;
	//cout << "x = " << x << endl; // x = 101

	//printf("%d", x);

	// if...else if...��ʹ��
	//int salary;
	//string houseRet; // �Ƿ��з�
	//string carRet; // �Ƿ��г�

	//cout << "����н�ʶ��٣�" << endl;
	//cin >> salary;
	//cout << "�з���" << endl;

	//cin >> houseRet;
	//cout << "�г���" << endl;

	//cin >> carRet;

	//if (salary < 20000){
	//	cout << "���Ǹ����ˣ�" << endl;
	//}else if (houseRet == "��"){
	//	cout << "��û��ʲôҪ��ֻҪ����Һþ��У�" << endl;
	//}else if (carRet == "��"){
	//	cout << "������Ŷ��" << endl;
	//}else {
	//	cout << "��Ե�ټ���" << endl;
	//}


	// �����ַ������Сдת���ɴ�д������Ǵ�дת����Сд
	//char a;

	//cout << "����һ���ַ���" << endl;
	//cin >> a;

	//if (a >= 'a' && a <= 'z')
	//{
	//	a = a-'a'+'A';
	//}else if (a >= 'A' && a <= 'Z')
	//{
	//	a = a-'A'+'a';
	//}

	//cout << a << endl;

	// ����0-9ת���ɴ�д
	// ����1������Ч
	//int a;

	//cout << "����һ�����֣�0-9����";

	//while ((cin >> a) != 0)
	//{
	//	switch (a){
	//	case 0:
	//		cout << "��";
	//		break;
	//	case 1:
	//		cout << "Ҽ";
	//		break;
	//	case 2:
	//		cout << "��";
	//		break;
	//	case 3:
	//		cout << "��";
	//		break;
	//	case 4:
	//		cout << "��";
	//		break;
	//	case 5:
	//		cout << "��";
	//		break;
	//	case 6:
	//		cout << "½";
	//		break;
	//	case 7:
	//		cout << "��";
	//		break;
	//	case 8:
	//		cout << "��";
	//		break;
	//	case 9:
	//		cout << "��";
	//		break;
	//	default:
	//		break;
	//	}
	//	cout << endl;
	//}
	// ����2��ʱ�任�ռ䣬��Ч
	//string str[]={"��", "Ҽ", "��", "��", "��", "��", "½", "��", "��", "��"};

	//while((cin >> a) != 0){
	//	if (a >= 0 && a <= 9)
	//	{
	//		cout << str[a] << endl;
	//	}
	//}

	// ������ݺ��·ݣ��жϵ�ǰ�·��м��죨�ܱ�400����Ϊ�������꣬�ܱ�4���������ܱ�100����������ͨ���꣩
	//int year;
	//int month;
	//int days;
	//bool flag; // �Ƿ�����

	//cout << "������ݣ�" << endl;
	//cin >> year;
	//cout << "������ݣ�" << endl;
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
	//	cout << "�·��������" << endl;
	//	break;
	//}
	//cout << year << "��" << month << "����" << days << "��" << endl;

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