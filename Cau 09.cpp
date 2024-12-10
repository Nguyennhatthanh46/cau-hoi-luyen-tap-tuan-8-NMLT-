#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
int main() {
char s [MAX];
strcpy(s, "happy");
memmove (s+2, s+3, 2);
cout << s << endl;
return 0;
}

//Kết quả: hapyy
/* strcpy(s, "happy"): Sao chép chuỗi "happy" vào mảng s.(Khá giống gán)
Kết quả: s chứa chuỗi "happy" và được biểu diễn trong bộ nhớ như sau:

s: ['h', 'a', 'p', 'p', 'y', '\0']

memmove(dest, src, n) là hàm sao chép n byte từ src đến dest. Nó an toàn khi dest và src chồng lấn nhau.
dest = s+2: /Điểm đến/ bắt đầu từ vị trí thứ 2 (ký tự 'p'). s[2]
src = s+3: /Nguồn/ bắt đầu từ vị trí thứ 3 (ký tự 'p'). s[3]
n = 2: Sao chép 2 ký tự từ src sang dest.
Khi đó: h.a.p.p.y thành h.a.p.p.y. 
*/
