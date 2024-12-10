#include <iostream>
using namespace std;
int main()
{
int values[4][4] =
{{1, 2, 3, 4},
{2, 3, 4, 5},
{3, 4, 5, 6},
{4, 5, 6, 7}};
for (int i = 0; i < 4; i++)
{
int x = values[i][0];
for (int j = 0; j < 4; j++)
if (x > values[i][j])
x = values[i][j];
cout << x << "\t";
}
return 0;
}
//Kết quả: 1 2 3 4.
/* Xét các phần tử đầu tiên trong mỗi hàng rồi duyệt theo cột xem nó có lớn hơn  các số còn lại không. 
1 > 2 sai. Nên nó vẫn nhận giá trị 1. */
