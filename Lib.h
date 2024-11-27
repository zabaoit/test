#pragma once
#include <iostream>
using namespace std;

typedef int TYPEINFO;
struct NODE
{
	TYPEINFO data;
	NODE* next;
};
typedef NODE* NODEPTR;	
NODEPTR makeNode(TYPEINFO list);
NODEPTR addFirst(NODEPTR list, TYPEINFO x);
void nhapdanhsach(NODEPTR& list);
void indanhsach(NODEPTR list);