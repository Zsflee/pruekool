#include stdio.h
#include string.h

int main() {
    char questions[3][100] = {
        2+3等于几？,
        天空是什么颜色？,
        一年有几个月？
    };
    char answers[3][20] = {
        5,
        蓝色,
        12
    };

    int score = 0;
    for (int i = 0; i  3; i++) {
        printf(%s , questions[i]);
        char userAnswer[20];
        scanf(%s, userAnswer);
        if (strcmp(userAnswer, answers[i]) == 0) {
            score++;
            printf(正确！n);
        } else {
            printf(错误，正确答案是：%sn, answers[i]);
        }
    }

    printf(你的最终得分是：%dn, score);

    return 0;
}