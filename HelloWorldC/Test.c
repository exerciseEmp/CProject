#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

/**
 * ��������Ϸ
 * @return
 */
int main() {

    //�����
    srand(time(NULL));
    int ranndom = rand();
    puts("�¸���");
    while (true) {
        int user_input;
        scanf("%d", &user_input);
        if (user_input == ranndom) {
            puts("�¶���");
            break;
        } else if (user_input > ranndom) {
            puts("����");
        } else {
            puts("С��");
        }
    }
    printf("%s\n", "���������ַ��˳�");
    scanf("%s");
    exit(0);//�ȴ��ն����������ַ�
    return 0;
}
