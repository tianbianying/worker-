#pragma once
# include "worker.h"
# include "List.h"

class Workermanger
{
public:
	//工人 这里我的想法这里包含工人属性 里面应该包含指针。
	//退出
	void ExitSystem();

	//创建输出界面
	void Show_Menu();

	//创建职工表
	void worker_List();

	//添加职工表中的人数
	void Traverse_list();

	//删除具体的人
	void delete_worker();

	//保存


	//查找
	void seek_Node();

	//修改
	void revise_Node();

	//排序
	void sort_worker();

	//清空
	void emptey_List();

private:
	List p;//成员属性。
};
