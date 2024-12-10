#include <iostream>
using namespace std;
int main()
{
int values [4][4] =
{{1, 2, 3, 4}
,{2, 3, 4, 5}
,{3, 4, 5, 6}
,{4, 5, 6, 7}};
for (int i=0; i < 4; i++)
{
int x = values[i][0];
for (int j = 0; j < 4; j++)
if (x <= values[i][j])
x = values[i][j];
cout << x << "\t";
}
return 0;
}

//Kết quả: 4  5  6  7
/* 
- Hàng 0 (i = 0):
Giá trị khởi tạo: x = values[0][0] = 1.
Lần lặp qua các cột:
j = 0: x = max(1, 1) = 1
j = 1: x = max(1, 2) = 2
j = 2: x = max(2, 3) = 3
j = 3: x = max(3, 4) = 4
Kết quả: x = 4.
- Hàng 1 (i = 1):
Giá trị khởi tạo: x = values[1][0] = 2.
Lần lặp qua các cột:
j = 0: x = max(2, 2) = 2
j = 1: x = max(2, 3) = 3
j = 2: x = max(3, 4) = 4
j = 3: x = max(4, 5) = 5
Kết quả: x = 5.
- Hàng 2 (i = 2):
Giá trị khởi tạo: x = values[2][0] = 3.
Lần lặp qua các cột:
j = 0: x = max(3, 3) = 3
j = 1: x = max(3, 4) = 4
j = 2: x = max(4, 5) = 5
j = 3: x = max(5, 6) = 6
Kết quả: x = 6.
- Hàng 3 (i = 3):
Giá trị khởi tạo: x = values[3][0] = 4.
Lần lặp qua các cột:
j = 0: x = max(4, 4) = 4
j = 1: x = max(4, 5) = 5
j = 2: x = max(5, 6) = 6
j = 3: x = max(6, 7) = 7
Kết quả: x = 7.
*/
