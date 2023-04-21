# include"List.h"

List::List()
{
	pHead = pTail = new List_Node[1];
	if (pHead == NULL)
	{
		cout << "内存分配失败" << endl;
		return;
	}
	pHead->pNext = NULL;
}

List_Node* List::creat_List()
{
	int len;
	cout << "请输入你要输入职工的个数:";
	cin >> len;
	string name;
	int Id;
	int m_DeptId;
	for (int i = 0; i < len; i++)
	{
		List_Node* pNew = new List_Node[1];

		cout << "请输入第"<< i+1 <<"个职工姓名:";
		cin >> name;
		cout << "请输入第"<< i+1 <<"个职工的编号：";
		cin >> Id;
		cout << "请输入职工的职位" << "\t"
			<< "1.员工" << "\t"
			<< "2.经理" << "\t"
			<< "3.老板" << endl;
		cin >> m_DeptId;
		while (m_DeptId > 3 || m_DeptId < 1)
		{
			cout << "你输入的职工职位有误,请重新输入" << endl;
			cout << "请输入职工的职位" << "\t"
				<< "1.员工" << "\t"
				<< "2.经理" << "\t"
				<< "3.老板" << endl;
			cin >> m_DeptId;
		}
		switch (m_DeptId)
		{
		case 1:
			pNew->data = new staff(name, Id, m_DeptId);
			break;
		case 2:
			pNew->data = new manager(name, Id, m_DeptId);
			break;
		case 3:
			pNew->data = new boos(name, Id, m_DeptId);
			break;
		default:

			break;
		}
		pTail->pNext = pNew;
		pTail = pNew;
		pNew->pNext = NULL;
	}
	cout << "保存成功" << endl;
	system("pause");
	system("cls");
	return pHead;
}
void List::treaverse_List()
{
	if (is_empty())
	{
		cout << "系统为空" << endl;
		system("pause");
		system("cls");
		return;
	}
	List_Node* p = pHead->pNext;
	while (p != NULL)
	{
		p->data->showInfo();
		p = p->pNext;
	}
	system("pause");
	system("cls");
}
bool List::is_empty()
{
	if (pHead->pNext == NULL)
	{
		return true;
	}
	return false;
}
void List::delete_Node()
{
	if (is_empty())
	{
		cout << "系统为空" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "请问你删除的人是：";
	string name;
	cin >> name;
	List_Node* p = pHead->pNext;
	List_Node* q = pHead;
	if (p->data->m_name != name && p != NULL)
	{
		p = p->pNext;
		q = q->pNext;
	}
	if (p == NULL)
	{
		cout << "删除失败" << endl;
		return;
	}
	else
	{
		q->pNext = p->pNext;
		delete p->data;
		delete p;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}int List::List_length()
{
	int i = 0;
	List_Node* p = pHead->pNext;
	while (p != NULL)
	{
		++i;
		p = p->pNext;
	}
	return i;
}
void List::sort()
{
	int i, j, len;
	len = List_length();//分装过后最显著优点是不需要重复使用形参。
	List_Node* p = pHead;
	List_Node* q;
	Worker* temp;
	for (i = 0, p = p->pNext; i < len - 1; i++, p = p->pNext)
		for (j = i + 1, q = p->pNext; j < len; j++, q = q->pNext)
		{
			if (p->data->m_I_D > q->data->m_I_D)
			{
				temp = p->data;//这里可以使用运算符重载进行深拷贝。
				p->data = q->data;
				q->data = temp;
			}
		}
	return;
}
void List::revise()
{
	List_Node* p = pHead->pNext;
	int id;
	cout << "请问你要修改的职工编号:";
	cin >> id;
	while (p->data->m_I_D != id)
	{
		p = p->pNext;
	}
	if (NULL == p)
	{
		cout << "你所要修改的人不存在" << endl;
		system("pause");
		system("cls");
		return;
	}
	delete p->data;
	string name;
	int m_DeptId;
	cout << "请问你要修改的职工姓名:";
	cin >> name;
	cout << "请输入职工的职位" << "\t"
		<< "1.员工" << "\t"
		<< "2.经理" << "\t"
		<< "3.老板" << endl;
	cin >> m_DeptId;
	switch (m_DeptId)
	{
	case 1:
		p->data = new staff(name, id, m_DeptId);
		break;
	case 2:
		p->data = new manager(name, id, m_DeptId);
		break;
	case 3:
		p->data = new boos(name, id, m_DeptId);
		break;
	default:

		break;
	}
	/*;
	p->data->m_name = name;
	p->data->m_DeptId = m_DeptId;
	cout << "修改成功" << endl;*/
	system("pause");
	system("cls");
	return;
}

void List::seek()
{
	cout << "请输入你要查找职工的编号:";
	int id;
	cin >> id;
	List_Node* p = pHead->pNext;
	if (is_empty())
	{
		cout << "系统为空" << endl;
		system("pause");
		system("cls");
		return;
	}
	while (p->data->m_I_D != id)
	{
		p = p->pNext;
	}
	if (NULL == p)
	{
		cout << "所查找的职工不存在";
		system("pause");
		system("cls");
		return;
	}
	p->data->showInfo();
	system("pause");
	system("cls");
}

void List::empty()
{
	cout << "你确定要清空文档吗 Y/N";
	char ch;
	cin >> ch;
	if (ch == 'n' || ch == 'N')
	{
		system("cls");
		return;
	}
	List_Node* p = pHead->pNext;
	List_Node* q;
	while (p != NULL)
	{
		q = p->pNext;
		delete p->data;
		delete p;
		p = q;
	}
	pHead->pNext = NULL;
	cout << "系统已为空" << endl;
	system("pause");
	system("cls");
}

List::~List()
{
	List_Node* p = pHead->pNext;
	List_Node* q;
	while (NULL != p)
	{
		q = p->pNext;
		delete p->data;
		delete p;
		p = q;
	}
	delete pHead;
}
