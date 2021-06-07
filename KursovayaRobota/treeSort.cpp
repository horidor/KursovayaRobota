#include "treeSort.h"

void treeSort::get_array_from_tree(Node* tree, int& i, bool order) //прохід по дереву
{
	if (tree != NULL)
	{
		if (order)
		{
			get_array_from_tree(tree->get_left(), i, order);
			arr[i++] = tree->get_inside();
			get_array_from_tree(tree->get_right(), i, order);
		}
		else
		{
			get_array_from_tree(tree->get_right(), i, order);
			arr[i++] = tree->get_inside();
			get_array_from_tree(tree->get_left(), i, order);
		}
	}
}

void treeSort::tree_sort(bool order)
{
	Node* root = NULL;
	root = root->add_node(arr[0], root);
	for (int i = 1; i < number_of_elements; i++)
	{
		root = root->add_node(arr[i], root);
	}

	int i = 0;

	get_array_from_tree(root, i, order);
	delete root;
}

void treeSort::init_sort(bool order)
{
	Start_Timer();
	tree_sort(order);
	time_of_sort = Reveal_Timer();
}