/*
 * Auther: XunSuan
 * E-Mail: xunsuan@protonmail.com
 *
*/

// C headers
#include <cstring>
#include <cstdio>
#include <cstdlib>

// C++ headers
#include <iostream>

void usage() // 输出用法
{
    std::cout << "./program_options --num 233 --sum 322" << std::endl;
    exit(1);
}

int main(int argc, char** argv)
{
    if (argc == 1) return 1;

    int num = 0;
    int sum = 0;
    int opt_idx = 1;
    for (; opt_idx < argc; opt_idx++)
    {
        if (argv[opt_idx][0] != '-')
            break;

        if (!strcmp(argv[opt_idx], "--auto")) // 检测到 --auto 参数
        {
            std::cout << "--auto" << std::endl;
        } else if (!strcmp(argv[opt_idx], "--sum")) // 同上,只不过这个可以传值
        {
            opt_idx++;
            sum = atoi(argv[opt_idx]);
        } else if (!strcmp(argv[opt_idx], "--num"))  // 同上
        {
            opt_idx++;
            num = atoi(argv[opt_idx]);
        } else if (!strcmp(argv[opt_idx], "--test")) // 同上
        {
            std::cout << "--test" << std::endl;
        }
        else
        {
            fprintf(stderr, "Unknown commandline flag: %s\n", argv[opt_idx]);
            usage();
        }
    }

    if (argc - opt_idx != 0) // see 31line and 35line.
    {
        usage();
    }

    std::cout << "num = " << num << std::endl;
    std::cout << "sum = " << sum << std::endl;
    
    return 0;
}
