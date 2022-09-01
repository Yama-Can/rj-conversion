#include "rj-conversion.h"
#include <iostream>
#include <string>
using namespace std;
int main(void){
    string value;
    cout << "ローマ字で何かを入力してください。ひらがなに変換します。" << endl;
    cin >> value;
    cout << "結果：" << rj_conversion::r_to_h(value) << endl;
    cout << "ローマ字で何かを入力してください。カタカナに変換します。" << endl;
    cout << "結果：" << rj_conversion::r_to_k(value) << endl;
    cout << "ひらがなで何かを入力してください。ローマ字に変換します。" << endl;
    cout << "結果：" << rj_conversion::h_to_r(value) << endl;
    cout << "カタカナで何かを入力してください。ローマ字変換します。" << endl;
    cin >> value;
    cout << "結果：" << rj_conversion::k_to_r(value) << endl;
    return 0;
}