#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class ListNode
{
public:
	Worker* data;
	ListNode* pNext;
};

class List
{
public:
	List()
	{}
	~List()
	{}
public:
	ListNode* creat_list(void)
	{}
};