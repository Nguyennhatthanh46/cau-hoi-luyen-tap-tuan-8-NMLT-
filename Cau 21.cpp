#include <iostream>
using namespace std;
int main()
{
int values [2][4] = { { 3, 4, 5, 1}, { 33, 6, 1, 2}};
int v = values[0][0];
for (int row = 0; row < 2; row++)
for (int column = 0; column < 4; column++)
if (v< values [row][column])
v = values[row][column];
cout << v << endl;
return 0;
}
//Kết quả: 33. 
/* Mảng duyệt các phần tử, phần tử nào lớn nhất thì lấy. Ở đây ta lấy số lớn nhất là 33. */
