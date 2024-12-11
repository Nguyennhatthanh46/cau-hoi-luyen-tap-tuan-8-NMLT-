#include <iostream>
#include <string.h>
using namespace std;
int myFunction (const char *s1, const char *s2) {
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
i++;
if (s1[i] == '\0' && s2 [i] == '\0')
return 0;
if (s1[i] == '\0' || s1[i] < s2[i])
return -1;
return 1;
}
int main() {
char s1[]="UIT";
char s2[]="uit";
cout << myFunction (s1, s2);
return 0;
}
//Kết quả: -1. 
/*
So sánh từng ký tự trong hai chuỗi:
Nếu s1[i] == s2[i], tiếp tục kiểm tra ký tự tiếp theo.

Dừng lại khi:
- Một trong hai chuỗi kết thúc (s1[i] == '\0' hoặc s2[i] == '\0').
- Hoặc gặp một ký tự khác nhau (s1[i] != s2[i]).

Nếu cả hai chuỗi kết thúc cùng lúc (s1[i] == '\0' và s2[i] == '\0'):
Hai chuỗi giống nhau, trả về 0.

Nếu s1 kết thúc trước (s1[i] == '\0'), hoặc ký tự hiện tại của s1 nhỏ hơn ký tự tương ứng của s2 (s1[i] < s2[i]):
Chuỗi s1 nhỏ hơn chuỗi s2, trả về -1.

Trường hợp còn lại: Nếu s1[i] > s2[i] tại một vị trí, trả về 1.

*So sánh:
So sánh ký tự:
s1[0] = 'U', s2[0] = 'u'.
'U' có giá trị ASCII là 85, và 'u' có giá trị ASCII là 117.

Ký tự khác nhau:
Vì 'U' < 'u' (85 < 117), hàm sẽ trả về -1.
Vòng lặp kết thúc khi s1[i] khác s2[i], ở ngay kí tự đầu. 

Nên kết quả là -1. 
*/
