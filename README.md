# rj-conversion Sample
Romaji/Japanese conversion tool (Sample)
## サンプルファイル一覧
[sample.cpp](https://github.com/Yama-Can/rj-conversion/tree/sample/sample.cpp)
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
また、Visual Studioでは、<kbd>Shift</kbd><kbd>Alt</kbd><kbd>A</kbd>を押す必要がある場合があります。
## 関数
### r_to_h()
これは、ローマ字を日本語のひらがなに変換します。
例：
```cpp
#include <iostream>
#include "rj-conversion.h"
using namespace std;
using namespace rj_conversion;
int main(){
  cout << r_to_h("tukaikata");
}
```
結果：
```
つかいかた
```
### h_to_r()
これは、日本語のひらがなをローマ字に変換します。
例：
```cpp
#include <iostream>
#include "rj-conversion.h"
using namespace std;
using namespace rj_conversion;
int main(){
  cout << j_to_r("つかいかた");
}
```
結果：
```
tukaikata
```
### r_to_k()
これは、ローマ字を日本語のカタカナに変換します。
例：
```cpp
#include <iostream>
#include "rj-conversion.h"
using namespace std;
using namespace rj_conversion;
int main(){
  cout << r_to_h("tukaikata");
}
```
結果：
```
ツカイカタ
```
### k_to_r()
これは、日本語のカタカナをローマ字に変換します。
例：
```cpp
#include <iostream>
#include "rj-conversion.h"
using namespace std;
using namespace rj_conversion;
int main(){
  cout << j_to_r("ツカイカタ");
}
```
結果：
```
tukaikata
```
## Support
yama.can@roisty.com
## License
Copyright 2022 Yama_can/Roisty

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.