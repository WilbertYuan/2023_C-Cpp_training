#include <stdio.h>

int main() {
    int a, b, c, d;  // �ĸ�Сͬѧ�Ǽס��ҡ�������
    int count = 0;  // ��¼˵�ѵ�����
    int liar = 0;  // ��¼˵�ѵ��˵�����

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

    // ������
    if (count == 1) {
        printf("��ƿ���ɵ�%d��Сͬѧ����ġ�\n", liar);
    }
    else {
        printf("�޷�ȷ��˭�����˻�ƿ��\n");
    }

    return 0;
}
