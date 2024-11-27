#include "Lib.h"
NODEPTR makeNode(TYPEINFO list)
{
	NODEPTR tmp = new NODE;
	tmp->data = list;
	tmp->next = NULL;
	return tmp;
}
NODEPTR addFirst(NODEPTR list, TYPEINFO x)
{
	NODEPTR tmp = makeNode(x);
	tmp->next = list;
	list = tmp;
	return tmp;
}
void nhapdanhsach(NODEPTR& list)
{
	int x;
	do
	{
		cout << "\nEnter x = (exit -99): ";
		cin >> x;
		if (x == -99)
			break;
		addFirst(list, x);
	} while (1);
}
void indanhsach(NODEPTR list)
{
	NODEPTR tmp = list;
	while (tmp != NULL)
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}