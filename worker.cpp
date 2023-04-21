# include "worker.h"

void staff::showInfo()
{
	cout << "员工的名字是：" << m_name << "\t"
		<< "员工的编号：" << m_I_D << "\t"
		<< "员工的职位：" << getDeptName() << "\t"
		<< "员工的职责：完成经理交给的任务" << endl;
}
void manager::showInfo()
{
	cout << "员工的名字是：" << m_name << "\t"
		<< "员工的编号：" << m_I_D << "\t"
		<< "员工的职位：" << getDeptName() << "\t"
		<< "员工的职责：完成老板交给的任务并下发" << endl;
}
void boos::showInfo()
{
	cout << "员工的名字是：" << m_name << "\t"
		<< "员工的编号：" << m_I_D << "\t"
		<< "员工的职位：" << getDeptName() << "\t"
		<< "员工的职责：完成公司的统筹" << endl;
}
string staff::getDeptName()
{
	return "员工";
}
string manager::getDeptName()
{
	return "经理";
}
string boos::getDeptName()
{
	return "老板";
}