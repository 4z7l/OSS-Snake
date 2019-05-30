#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED

/* 

interface.h ������ ������ �÷����� ��
�ܼ�â�� ��µǴ� �ȳ� �޼���, ���ӿ� ���� ���� ���
����ڰ� ���ϰ� �Ǵ� ��� ȭ�鿡 ���� ����� �ٷ�� ��� �����Դϴ�.

*/

#include <stdio.h>
#include "snake.h"
#include "goprint.h"

void Welcome(void);
void Tips(void);
void Notice_bonus(void);
void Quit(void);
void Progress_bar(void);
void RemoveCursor(void);
void SetConsoleSize(int w, int h);

#endif // INTERFACE_H_INCLUDED
