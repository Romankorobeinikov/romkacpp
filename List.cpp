#include <iostream>
using namespace std;

struct Cell
{
	int data;
	Cell *next_ptr;
};

struct List
{
	int length;
	Cell *first;
	Cell *last;
};

List createEmpty()
{
	List list;
	list.length = 0;
	list.first = nullptr;
	list.last = nullptr;
	return list;
}

List addEnd(List list, int data)
{
	Cell *cell = new Cell;
	cell->data = data;
	cell->next_ptr = nullptr;
	if (list.length == 0)
	{
		list.first = cell;
	}
	else
	{
		list.last->next_ptr = cell;
	}
	list.last = cell;
	list.length++;
	return list;
}

List addBegin(List list, int data)
{
	Cell *cell = new Cell;
	cell->data = data;
	cell->next_ptr = list.first;
	if (list.length == 0)
	{
		list.last = cell;
	}
	list.first = cell;
	list.length++;
	return list;
}

List copyList(List list)
{
    Cell cell;
	List copy;
	copy = createEmpty();
	if (list.length != 0)
	{

	cell = *list.first;
	while (cell.next_ptr != nullptr)
	{
		copy = addEnd(copy, cell.data);
		cell = *cell.next_ptr;
	}
	copy = addEnd(copy, cell.data);
	}
	return copy;
}

void printList(List list)
{
    Cell cell;
	if (list.length == 0)
		cout << "Лист пуст" << endl;
	else
	{

		cell = *list.first;
		while (cell.next_ptr != nullptr)
		{
			cout << cell.data << endl;
			cell = *cell.next_ptr;
		}
		cout << cell.data << endl;
	}
	cout << endl;
	return;
}

List mergeLists(List first_list, List second_list)
{
	if (second_list.length != 0)
	{
		first_list.last->next_ptr = second_list.first;
	}
    first_list.length += second_list.length;
	return first_list;
}

List reverseList(List list)
{
    Cell cell;
	List reverselist;
	reverselist = createEmpty();
	if (list.length != 0)
	{
	Cell cell;
	cell = *list.first;
	while (cell.next_ptr != nullptr)
	{
		reverselist = addBegin(reverselist, cell.data);
		cell = *cell.next_ptr;
	}
	reverselist = addBegin(reverselist, cell.data);
	}
	return reverselist;
}

List del_i(List list, int i)
{
	Cell cell;
	Cell previous_cell;


	if (i == 1)
	{
		list.length -= 1;
		list.first = list.first->next_ptr;
	}
	else if ( i <= list.length && i > 1)
	{
		list.length = list.length - 1;
		cell = *list.first;
		for (int j = 1; j < i; j++)
		{
			previous_cell = cell;
			cell = *cell.next_ptr;
		}
		previous_cell.next_ptr = cell.next_ptr;
	} else {
        cout << "Can not do this operation" << endl;
        }
	return list;
}


List add_i(List list, int data, int i)
{
	Cell cell;
	Cell *new_cell = new Cell;
	new_cell->data = data;
	if (i == 1)
	{
		list.length += 1;
		new_cell->next_ptr = list.first;
		list.first = new_cell;
		return list;
	}
	else if ((list.length != 0) && (list.length >= i))
	{
		list.length = list.length + 1;
		cell = *list.first;
		for (int j = 0; j < i; j++)
		{
			cell = *cell.next_ptr;
		}
		new_cell->next_ptr = cell.next_ptr;
		cell.next_ptr = new_cell;
		return list;
	}
	else
	{
		cout << "В списке нет "<< i << "-ого элемента" << endl;
		return list;
	}

}

int main()
{
	List list, second_list, new_list, copy;
	list = createEmpty();
	list = addBegin(list, 1);
	list = addBegin(list, 2);
	list = addEnd(list, 3);
	list = addEnd(list, 5);
	list = addEnd(list, 6);
	list = addBegin(list, 2);
	printList(list);
	list = add_i(list, 4, 4);
	printList(list);
	second_list = createEmpty();
	second_list = addBegin(second_list, 4);
	second_list = addEnd(second_list, 10);
	second_list = addBegin(second_list, 1);
	second_list = addEnd(second_list, 12);
	second_list = addBegin(second_list, 19);
	printList(second_list);
	new_list = mergeLists(list, second_list);
	printList(list);
	List newl = add_i(new_list, 36, 1);
	printList(new_list);
	copy = copyList(newl);
	//printList(copy);
	//printList(reverseList(copy));
}
