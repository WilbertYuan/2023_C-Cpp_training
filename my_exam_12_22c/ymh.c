#include <stdio.h>
#include <string.h>
//提示：编译环境为32位
void func1(char s[11])
{
    printf("%d %d\n", sizeof(s), strlen(s));
}
int func2(int* a, int b, int* c)
{
    *a += 14;

    b = *a;
    c = a;
    printf("%d %d %d\n", *a, b, *c);
    return *a + (++b) + *c;
}
int main()
{
    char str[14] = "njoptcs";
    char* pstr = str;
    int a = 23, b = 33, c = 43, ans;
    printf("%d %d ", sizeof(str), strlen(str));
    printf("%d ", sizeof(pstr));
    func1(str);
    ans = func2(&a, b, &c);
    printf("%d\n", ans);
    printf("%d %d %d", a, b, c);
    return 0;
}