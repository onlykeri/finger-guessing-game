/** ����ʯͷ����Ϸ */

#include <iostream>
//#include <cstdio>
#include <ctime>
//#include <cstdlib>
//#include <windows.h>
#include <string>

using namespace std;
void show1(string&);
void show2(string&);
void show3(string&);
//string show4(string&,string&);

int main()
{

//	string show1(string&);
//	string show2(string&);
//	//string show4(string&,string&);
	srand(time(NULL));
	int num,rival;
	string scissors,rock,paper,one,result;
	char chose;
	there:
	cout << "���ȭ��" << '\n' << "1.����" << '\n' << "2.ʯͷ" << '\n' << "3.��"<<endl;
	cin >> num;
	rival = (rand() % 3) +1;
	if(num==1,rival==3||num==3,rival==2||num==2,rival==1)
	{
		result ="YOU WIN!";
	}else if(num==rival)
	{
		result = "ƽ�֣�";
	}
	else
	{
		result= "YOU LOSE!";
	}


	switch(num)
	{
	case 1:
//		one = show1(scissors);
//		cout << one << endl;
		show1(scissors);
		break;
	case 2:
		show2(rock);
	        break;
	case 3:
                show3(paper);
		break;
	default :
		cout << "��û��ȭ�����ٲ�һ�顣";
		goto there;//��bug��������ĸ�Ȼ��
	}
	cout <<endl;
	cout << "--------" << result << "--------" << endl;
	cout <<endl;

	switch(rival)
	{
	case 1:
//		one = show1(scissors);
//		cout << one << endl;
		show1(scissors);
		break;
	case 2:
		show2(rock);
	        break;
	case 3:
                show3(paper);
		break;
	}

	cout << "��������һ���𣿣�Y/N��"<<endl;
	cin >> chose;
	if(chose == 'Y'||chose =='y')
	{
		system("cls");
		goto there;
	}
	return 0;


}

//����
void show1 (string& scissors)
{

	//string star ="  *******************\n*                    *\n*          **********\n*                    *\n*          **********\n*          *\n*         *\n *********\n";
	//return star;
	cout << "  *******************\n*                    *\n*          **********\n*                    *\n*          **********\n*          *\n*         *\n *********\n" << endl;


}

//ʯͷ
void show2(string& rock)
{
	cout  << "  ******"        << '\n'
	      << " *     *******"  << '\n'
	      << "*             *" << '\n'
	      << "*           **"  << '\n'
	      << "*             *" << '\n'
	      << "*           **"  << '\n'
	      << "*             *" << '\n'
	      << "*           **"  << '\n'
	      << "*             *" << '\n'
	      << " *************" << endl;

}

//��
void show3(string& paper)
{
	cout  << "   *******"             << '\n'
	//Sleep(100);
	      << " *        *"            << '\n'
	      << "*        ************"  << '\n'
	//Sleep(100);
	      << "*                    *" << '\n'
	      << "*        ************"  << '\n'
	      << "*                    *" << '\n'
	      << "*        ************"  << '\n'
	      << "*                    *" << '\n'
	      << "*        ************"  << '\n'
	      << "*                    *" << '\n'
              << "  ******************"   << endl;

}






