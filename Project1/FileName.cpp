#include"MyArr.h"

int main()
{
	Pair<string, int> student("STUDENT NAME", 16);
	Pair<string, double> product("PRODUCT NAME", 199.99);
	Pair<int, double> group(2, 10.4);
	student.show();
	product.show();
	group.show();

	Pair<string, int> student2("SECOND STUDENT", 15);
	student.copyFrom(student2);
	student.show();

	group.clear();
	group.show();
	group.init(3, 9.7);
	group.show();
	return 0;
}