#include <iostream>
using namespace std;
int main() {
int a[5] = {5, 1, 15, 20, 25};
int i, j, m;
i = ++a[1];
j = a[1]++;
m = a[i++];
// mỗi giá trị cách nhau 1 khoảng trắng
cout <<i<<"  "<<j<<"  "<<m;
return 0;
}
//Kết quả: 3 2 15.
/* Giải thích, ban đầu tăng giá trị của a[1] là 1 lên 2 rồi gán vào i. 
Khi đó: i = 2.
j thì gán giá trị của a[1] vừa tăng khi nãy là 2 vào. 
Khi đó j = 2.
a[i++] gán giá trị i = 2 (vừa tính ở trên vào nên lúc này ta có m = a[2] = 15. Sau đó i tăng lên 1 đơn vị là 3 (gán trước tăng sau)
Kết quả cuối: i = 3, j = 2 và m = 15. 
