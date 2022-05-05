#include<stdio.h>
#include<stdlib.h>

struct Node {
	int number;
	Node* next;
};
typedef struct Node Node;

Node* deleteTheMiddleElement(Node* head) {
	Node* tempHead = head;
	int size = 0;
	while (tempHead != NULL) {
		size++;
		tempHead = tempHead->next;
	}

	if (size == 0)
		return head;

	tempHead = head;

	//delete with according to the index index not the number of the element at the list
	int index = 0;
	while (index != ( (size - 1) / 2) ) {
		tempHead = tempHead->next;
		index++;
	}
	if (index == 0) {
		head = head->next;
		free(tempHead);
		return head;
	}

	tempHead->next = tempHead->next->next;
	return head;
}
void main() {

	Node* head = NULL;
	for (int i = 1; i <= 6; i++) {
		Node* node = (Node*)malloc(sizeof(Node));
		node->number = i;
		node->next = head;
		head = node;
	}
	head = deleteTheMiddleElement(head);

	while (head != NULL)
	{
		printf("%d\n", head->number);
		head = head->next;
	}
}