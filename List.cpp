# include"List.h"

List::List()
{
	pHead = pTail = new List_Node[1];
	if (pHead == NULL)
	{
		cout << "�ڴ����ʧ��" << endl;
		return;
	}
	pHead->pNext = NULL;
}

List_Node* List::creat_List()
{
	int len;
	cout << "��������Ҫ����ְ���ĸ���:";
	cin >> len;
	string name;
	int Id;
	int m_DeptId;
	for (int i = 0; i < len; i++)
	{
		List_Node* pNew = new List_Node[1];

		cout << "�������"<< i+1 <<"��ְ������:";
		cin >> name;
		cout << "�������"<< i+1 <<"��ְ���ı�ţ�";
		cin >> Id;
		cout << "������ְ����ְλ" << "\t"
			<< "1.Ա��" << "\t"
			<< "2.����" << "\t"
			<< "3.�ϰ�" << endl;
		cin >> m_DeptId;
		while (m_DeptId > 3 || m_DeptId < 1)
		{
			cout << "�������ְ��ְλ����,����������" << endl;
			cout << "������ְ����ְλ" << "\t"
				<< "1.Ա��" << "\t"
				<< "2.����" << "\t"
				<< "3.�ϰ�" << endl;
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
	cout << "����ɹ�" << endl;
	system("pause");
	system("cls");
	return pHead;
}
void List::treaverse_List()
{
	if (is_empty())
	{
		cout << "ϵͳΪ��" << endl;
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
		cout << "ϵͳΪ��" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "������ɾ�������ǣ�";
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
		cout << "ɾ��ʧ��" << endl;
		return;
	}
	else
	{
		q->pNext = p->pNext;
		delete p->data;
		delete p;
		cout << "ɾ���ɹ�" << endl;
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
	len = List_length();//��װ�����������ŵ��ǲ���Ҫ�ظ�ʹ���βΡ�
	List_Node* p = pHead;
	List_Node* q;
	Worker* temp;
	for (i = 0, p = p->pNext; i < len - 1; i++, p = p->pNext)
		for (j = i + 1, q = p->pNext; j < len; j++, q = q->pNext)
		{
			if (p->data->m_I_D > q->data->m_I_D)
			{
				temp = p->data;//�������ʹ����������ؽ��������
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
	cout << "������Ҫ�޸ĵ�ְ�����:";
	cin >> id;
	while (p->data->m_I_D != id)
	{
		p = p->pNext;
	}
	if (NULL == p)
	{
		cout << "����Ҫ�޸ĵ��˲�����" << endl;
		system("pause");
		system("cls");
		return;
	}
	delete p->data;
	string name;
	int m_DeptId;
	cout << "������Ҫ�޸ĵ�ְ������:";
	cin >> name;
	cout << "������ְ����ְλ" << "\t"
		<< "1.Ա��" << "\t"
		<< "2.����" << "\t"
		<< "3.�ϰ�" << endl;
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
	cout << "�޸ĳɹ�" << endl;*/
	system("pause");
	system("cls");
	return;
}

void List::seek()
{
	cout << "��������Ҫ����ְ���ı��:";
	int id;
	cin >> id;
	List_Node* p = pHead->pNext;
	if (is_empty())
	{
		cout << "ϵͳΪ��" << endl;
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
		cout << "�����ҵ�ְ��������";
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
	cout << "��ȷ��Ҫ����ĵ��� Y/N";
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
	cout << "ϵͳ��Ϊ��" << endl;
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
