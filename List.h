#pragma once
# include "worker.h"

class List_Node
{
public:
	Worker* data;
	List_Node* pNext;
};

class List
{
public:
	List();
	~List();
public:
	List_Node* creat_List();
	void treaverse_List();
	bool is_empty();
	void delete_Node();
	int List_length();
	void sort();
	void revise();
	void seek();
	void empty();
private:
	List_Node* pHead;
	List_Node* pTail;
};