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
		cout << "\t\t\t\t\t" << "�������ѡ��" << endl;
		cout << "\t\t\t\t\t";
		cin >> chice;
		switch (chice)
		{
		case 0://�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1://����ְ��
			wm.worker_List();
			break;
		case 2://��ʾְ��
			wm.Traverse_list();
			break;
		case 3://ɾ��ְ��
			wm.delete_worker();
			break;
		case 4://�޸�ְ��
			wm.revise_Node();
			break;
		case 5://����ְ��
			wm.seek_Node();
			break;
		case 6://����ְ��
			wm.sort_worker();
			break; 
		case 7://����ĵ�
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