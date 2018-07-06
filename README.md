# Triton #  

Triton is a simple C++ based html parser. How to user? See the example below:

```cpp
#include "html/Parser.h"

#include <string>

int main(int args, char* argv[]) {
    const std::string code = "<html><body><h1>Html</h2><p>Test Content</p></body></hml>"

    Parser parser;
    Note* node = parser.parse(code);
    
    // Use node here
}
```
