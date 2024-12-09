#include <iostream>
using namespace std;
int main() {
int array [2][2][3]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
cout << array [1][0][2];
return 0;
}
//Kết quả: 8
/* Sau khi nhập mảng trên thì nó sẽ sắp thành 2 lớp. Mỗi lớp có 2 hàng ([2][3]). Mỗi hàng là 3 phần tử.
Có thể hình dung như sau:
- Lớp 0 (array[0]):
+ Hàng 0: { 0, 1, 2 }
+ Hàng 1: { 3, 4, 5 }
- Lớp 1 (array[1]):
+ Hàng 0: { 6, 7, 8 }
+ Hàng 1: { 9, 10, 11 }
Khi truy cập đến array[1][0][2]. Thì đó là lớp 1, hàng 0, và cột 2 (thứ 3) chính là phần tử số 8.
*/
