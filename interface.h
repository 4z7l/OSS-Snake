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

void welcome(void);
void tips(void);
void notice_bonus(void);
void quit(void);
void progress_bar(void);
void removeCursor(void);
void setConsoleSize(int w, int h);

#endif // INTERFACE_H_INCLUDED
