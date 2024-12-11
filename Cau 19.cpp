#include <iostream>
using namespace std;
int main() {
int a[3] = {20, 30, 40};
int b[3];
b=a;
cout << b[0];
}
/*Kết quả: lỗi. 
không thể gán hết toàn bộ giá trị của mảng a vào mảng b. Thay vào đó là phải gán từng phần tử. */
