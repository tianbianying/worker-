# include <iostream>
using namespace std;
# include "Worker.h"
# include "Workmanger.h"
# include "List.h"

int main(void)
{
	Workermanger wm;
	while (true)
	{
		wm.Show_Menu();
		int chice;
		cout << "\t\t\t\t\t" << "输入你的选项" << endl;
		cout << "\t\t\t\t\t";
		cin >> chice;
		switch (chice)
		{
		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://增加职工
			wm.worker_List();
			break;
		case 2://显示职工
			wm.Traverse_list();
			break;
		case 3://删除职工
			wm.delete_worker();
			break;
		case 4://修改职工
			wm.revise_Node();
			break;
		case 5://查找职工
			wm.seek_Node();
			break;
		case 6://排序职工
			wm.sort_worker();
			break; 
		case 7://清空文档
			wm.emptey_List();
			break;
		default:
			system("pause");
			system("cls");
			break;
		}

	}

	return 0;
}