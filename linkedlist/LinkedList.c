#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void init_list(List *list)
{
	//initialize the list
	list->head = NULL;
	list->tail = NULL;
	list->cur = NULL;
}

void add_to_list(List *list, int data)
{
	//add the data to the list
	Node * new_node;
	new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->next = NULL;

	if (list->head == NULL)
		list->head = new_node;
	else
		list->tail->next = new_node;

	list->tail = new_node;
		
}

void print_list(List *list)
{
	//print all the data of the list
	if (list->head == NULL)
		printf("There is no number\n");
	else
		list->cur = list->head;
		printf("%d->", list->cur->data);

		while (list->cur->next != NULL)
		{
			list->cur = list->cur->next;
			printf("%d->", list->cur->data);
		}
		printf("NULL");
}

void delete_list(List *list)
{
	//delete the list

}