#include<iostream>
using namespace std;
int main()
{
	char a[4] = "abc";
	for (char* cp = a; (*cp) != '\0'; cp++) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
}
// chương trình trích dẫn các thành phần trong chuỗi a để cho vào các địa chỉ ô nhớ
// qua đó cho ta thấy kích thước của kiểu char là 1 byte