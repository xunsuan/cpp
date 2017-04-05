#include <string>
#include <cstring>
#include <iostream>

const char* invalid = "*$#"; // 非法字符，要检测的。

int main()
{
    std::string s = "abcde123*$#"; // 目标字符串

    size_t valid_len = std::strcspn(s.c_str(), invalid);
    if (valid_len != s.size()) // 检测到 invalid
        std::cout << "'" << s << "' 从位置 " << valid_len << " 开始发现非法字符"
        << std::endl;
    
}

