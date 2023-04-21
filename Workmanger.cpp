# include "Workmanger.h"

void Workermanger::Show_Menu()
{
	cout << "\t\t\t\t\t" << "*********************************" << endl;
	cout << "\t\t\t\t\t" << "****** 欢迎使用职工管理系统******" << endl;
	cout << "\t\t\t\t\t" << "******** 0.退出管理系统  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 1.增加职工信息  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 2.显示职工信息  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 3.删除职工信息  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 4.修改职工信息  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 5.查找职工信息  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 6.按照编号排序  ********" << endl;
	cout << "\t\t\t\t\t" << "******** 7.清空所有文档  ********" << endl;
	cout << "\t\t\t\t\t" << "*********************************" << endl;
	cout << endl;
}
void Workermanger::ExitSystem()
{
	cout << "你确定要退出吗Y/N" << endl;
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