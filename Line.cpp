#include "Line.h"

//�� ���� ���ϴ� ĭ ��ŭ ���ϴ� ���ڷ� ä���
void FillLine(char ch, int length, bool change) {
    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    if (change)
        cout << endl;
}

//�߾ӿ� ���ϴ� ���ڿ��� �ְ� ��� �����ϱ�
void CenterLetter(char ch, int length, string letter) {
    FillLine(ch, length / 2 - letter.length() / 2 - 1, false);
    cout << letter;
    FillLine(ch, length / 2 - letter.length() / 2, true);
}

//üũǥ�� ����
char Check(bool mark) {
    if (mark)
        return 'v';
    else
        return ' ';
}