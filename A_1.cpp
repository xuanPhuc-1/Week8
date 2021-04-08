#include<iostream>
using namespace std;
void f(int xval)
{
	int x;
	x = xval;
	// in địa chỉ của x tại đây
	cout << &x << endl;
}
void g(int yval)
{
	int y;
	// in địa chỉ của y tại đây
	cout << &y;
}
int main()
{
	f(7);
	g(11);
	return 0;
}
//Nhận xét: Hai địa chỉ giống nhau vì nếu biến khởi tạo trong hàm f() và g() cùng kiểu dữ liệu với biến truyền vào từ hàm main
//thì nó sẽ được hệ thông lưu vào cùng một địa chỉ

