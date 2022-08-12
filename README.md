# rj-conversion
Romaji/Japanese conversion tool
## 注意
これはまだ開発段階です。
現在のところまだバグは見つかっていませんが、使用する際はバグに注意して使用してください。
また、バグが存在する場合は [Issues](https://github.com/Yama-Can/rj-conversion/issues)で報告してください。
# 使い方
## include
作っているプログラム（例：Main.cpp）と同じ階層にrj-conversion.hを配置します。
そして、以下のコードをプログラムの先頭に記述します。
```cpp
#include "rj-conversion.h"
```
## 関数
### r_to_j()
これは、ローマ字を日本語のひらがなに変換します。
例：
```cpp
#include <iostream>
#include "rj-conversion.h"
using namespace std;
int main(){
  cout << r_to_j("tukaikata");
}
```
結果：
```
つかいかた
```
### j_to_r()
これは、日本語のひらがなをローマ字に変換します。
例：
```cpp
#include <iostream>
#include "rj-conversion.h"
using namespace std;
int main(){
  cout << j_to_r("つかいかた");
}
```
結果：
```
tukaikata
```
