#include <iostream>
using namespace std;
int main()
{
int values[4][4] =
{{1, 2, 3, 4},
{2, 3, 4, 5},
{3, 4, 5, 6},
{4, 5, 6, 7}};
for (int i=0; i < 4; i++)
cout << values[i][i] << "\t";
return 0;
}
//Kết quả: 1 3 5 7.
/*Khai báo hàng và cột giống nhau là chỉ đến các phần tử có giá trị [1][1], [2][2].....*/
