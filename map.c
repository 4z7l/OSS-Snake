#include "map.h"
#include<stdlib.h>

BLOCK *block_head = NULL;
int map_size = 50;

void Map_boundary(int map_size)                            
{
	//map_size�� �°� ���� ��踦 ����ϴ� �Լ� 
	BOUNDARY boundary = {0, 0};
    int i;
    boundary.x = map_size;
    boundary.y = map_size;

    for(i = 0; i < map_size; i ++)
        Go_print(map_size, i, "H");
    for(i = 0; i < map_size; i ++)
        Go_print(i, map_size, "H");

	for (i = 0; i < map_size; i++)
		Go_print(0, i, "H");
	for (i = 1; i < map_size; i++)
		Go_print(i, 0, "H");

    Go_print(map_size, map_size, "H");
}

void Map_block(int map_size)
{
	//map_size�� �°� ���� ��踦 ����ϴ� �Լ�

    int i;
    BLOCK *p = NULL;
    block_head = (BLOCK *)malloc(sizeof(BLOCK));

    for(i = 0, p = block_head; i < map_size; i ++)
	{
        Go_print(i, 1, "H");
        p->x = i, p->y = 1;
        p->next = (BLOCK *)malloc(sizeof(BLOCK));
        p = p->next;

        Go_print(i, map_size - 1, "H");
        p->x = i, p->y = map_size - 1;
        p->next = (BLOCK *)malloc(sizeof(BLOCK));
        p = p->next;
    }

    for(i = 1; i < map_size - 1; i ++){
        Go_print(1, i, "H");
        p->x = 1, p->y = i;
        p->next = (BLOCK *)malloc(sizeof(BLOCK));
        p = p->next;

        Go_print(map_size - 1, i, "H");
        p->x = map_size - 1, p->y = i;
        if(i == map_size - 2)
		{
            p->next = NULL;
            break;
        }
        p->next = (BLOCK *)malloc(sizeof(BLOCK));
        p = p->next;
    }

    for(p = block_head; p != NULL; p = p->next);
}

void Block_free(void)
{
    BLOCK *p1, *p2;
    for(p1 = block_head, p2 = p1; p1 != NULL; p2 = p1){
        p1 = p1->next;
        free(p2);
    }
    block_head = NULL;
}
