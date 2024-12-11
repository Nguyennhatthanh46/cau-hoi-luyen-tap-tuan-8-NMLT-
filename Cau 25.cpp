#include <iostream>
using namespace std;
int main()
{
int values [4] [4] =
{{1, 2, 3, 4},
{2, 3, 4, 5},
{3, 4, 5, 6},
{4, 5, 6, 7}};
for (int i = 0; i < 4; i++)
for (int j = 0; j < 4; j++)
if (i <= j)
cout << values[i][j] << "\t";
return 0;
}
//Kết quả: 1 2 3 4 3 4 5 5 6 7. 
/* In ra các phần tử có chỉ số hàng bé hơn cột và các phần tử trên đường chéo.*/
