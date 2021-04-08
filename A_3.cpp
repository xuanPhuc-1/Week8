#include<iostream>
using namespace std;
void swap_pointers(char** x, char** y)
{
	char *tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	char a[] = "I should print second";
	char b[] = "I should print first";
	char* s1 = a;
	char* s2 = b;
	swap_pointers(&s1, &s2);
	cout << "s1 is " << s1 << endl;
	cout << "s2 is " << s2 << endl;
	cout << &s1 << endl;
	cout << &a << " " << &b;
	return 0;
}
// chương trình vẫn chạy bình thường nhưng vấn đề là hàm swap chỉ 
// thay đổi địa chỉ chứ không làm thay đổi giá trị của hai chuỗi mà con trỏ
// s1 và s2 đang trỏ vào;