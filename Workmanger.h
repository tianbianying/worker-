#pragma once
# include "worker.h"
# include "List.h"

class Workermanger
{
public:
	//���� �����ҵ��뷨��������������� ����Ӧ�ð���ָ�롣
	//�˳�
	void ExitSystem();

	//�����������
	void Show_Menu();

	//����ְ����
	void worker_List();

	//���ְ�����е�����
	void Traverse_list();

	//ɾ���������
	void delete_worker();

	//����


	//����
	void seek_Node();

	//�޸�
	void revise_Node();

	//����
	void sort_worker();

	//���
	void emptey_List();

private:
	List p;//��Ա���ԡ�
};
