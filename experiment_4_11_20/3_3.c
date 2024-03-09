#include <stdio.h>

int main() {
    int a, b, c, d;  // 四个小同学是甲、乙、丙、丁
    int count = 0;  // 记录说谎的人数
    int liar = 0;  // 记录说谎的人的索引

    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                for (d = 0; d <= 1; d++) {
                    if ((a && !b && d) || (!a && b && !d) || (!a && !c && b) || (d)) {
                        count++;
                        if (a && !b && d)
                            liar = 1;
                        else if (!a && b && !d)
                            liar = 2;
                        else if (!a && !c && b)
                            liar = 3;
                        else if (d)
                            liar = 4;
                    }
                }
            }
        }
    }

    // 输出结果
    if (count == 1) {
        printf("花瓶是由第%d个小同学打碎的。\n", liar);
    }
    else {
        printf("无法确定谁打碎了花瓶。\n");
    }

    return 0;
}
