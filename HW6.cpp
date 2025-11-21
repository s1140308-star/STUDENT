#include <iostream>
using namespace std;
int main()
{
    cout << "請輸入你的年齡: " << endl;
    int age;
    cin >> age;
    if (age >=18) {
      cout << "18歲成年,可以看演唱會" << endl;
    }
    if (age < 18) {
        cout << "未成年,你不能去演唱會" << endl;
    }
    
    
    return 0;
}