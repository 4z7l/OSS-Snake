#include <stdio.h>
#include<stdlib.h>
#include "goprint.h"
#include "map.h"
#include "snake.h"
#include "food.h"
#include "interface.h"
#pragma warning(disable:4996)

/*
  ***SNAKE GAME***

  ���� �ҽ��ڵ� ������: SnakeSkinMan
  ���� ������ ����� �ּ� : https://github.com/SnakeSkinMan
  �ҽ��ڵ� ���� : myujin,4z7l
  ���α׷� ��ǥ: �ҽ��ڵ带 ������ ���� ���鿡�� ������ �ҽ��ڵ庸�� ������Ű�� ��
  �� ������Ʈ�� MIT ���̼����� �����ϴ�.

  [English version]
  original source code developer : SnakeSkinMan
  original developer github address: https://github.com/SnakeSkinMan
  Clone & improve : myujin,4z7l
  goal of the program : improve original source code 
  Released under the MIT license
 */

int main()
{
	while (1)
	{
		Welcome();
		RemoveCursor();
		Tips();

		Map_boundary(map_size);
		Snake_create();
		Food_create();

		//�ڵ����� ������ �����ϴ� ���� �����ϴ� ����
		_getch();

		Snake_control();

		Snake_free();
		if (block_head != NULL)
			Block_free();
		Quit();
	}
	return 0;
}