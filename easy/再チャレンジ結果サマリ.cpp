//from : https://paiza.jp/challenges/471/retry_result/b26d79692911d361303f99b239ced532


#include <iostream>
using namespace std;
int main(void){
    string str;
    getline(cin, str);
    str.push_back('0');
    cout << str;
    return 0;
}
