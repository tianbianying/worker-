# include "Workmanger.h"

void Workermanger::Show_Menu()
{
	cout << "\t\t\t\t\t" << "*********************************" << endl;
	cout << "\t\t\t\t\t" << "****** ��ӭʹ��ְ������ϵͳ******" << endl;
	cout << "\t\t\t\t\t" << "******** 0.�˳�����ϵͳ  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 1.����ְ����Ϣ  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 2.��ʾְ����Ϣ  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 3.ɾ��ְ����Ϣ  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 4.�޸�ְ����Ϣ  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 5.����ְ����Ϣ  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 6.���ձ������  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 7.��������ĵ�  ********" << endl;
	cout << "\t\t\t\t\t" << "*********************************" << endl;
	cout << endl;
}
void Workermanger::ExitSystem()
{
	cout << "��ȷ��Ҫ�˳���Y/N" << endl;
	char ch;
	cin >> ch;
	if ('Y' == ch || 'y' == ch)
	{
		exit(-1);
	}
	else
	{
		system("cls");
		return;
	}
}
void Workermanger::worker_List()
{
	p.creat_List();

}
void Workermanger::Traverse_list()
{
	p.treaverse_List();
}
void Workermanger::delete_worker()
{
	p.delete_Node();
}
void Workermanger::sort_worker()
{
	p.sort();
}
void Workermanger::revise_Node()
{
	p.revise();
}
void Workermanger::seek_Node()
{
	p.seek();
}
void Workermanger::emptey_List()
{
	p.empty();
}