#ifndef TREESORT_H
#define TREESORT_H
#include "sort_main.h"

class treeSort : public sort_main
{
private:
	class Node //допоміжний класс дерева
	{
	private:
		int inside;
		Node* left;
		Node* right;
	public:
		Node()
		{
			inside = 0;
			left = NULL;
			right = NULL;
		}
		Node* new_node(int ins) //створення нової ноди
		{
			Node* temp = new Node;
			temp->inside = ins;
			temp->left = temp->right = NULL;
			return temp;
		}

		Node* add_node(int ins, Node* tree) //додавання нової ноди
		{
			Node* temp;
			if (tree == NULL)
			{
				temp = new_node(ins);
			}
			else
			{
				if (ins < tree->inside)
				{
					tree->left = add_node(ins, tree->left);
				}
				else
				{
					tree->right = add_node(ins, tree->right);
				}
				temp = tree;
			}
			return temp;
		}

		Node* get_left() { return left; } //геттери
		Node* get_right() { return right; }
		int get_inside() { return inside; }

		~Node() //рекурсивний деструктор
		{
			if (this != NULL)
			{
				delete right;
				delete left;
			}
		}
	};

	void get_array_from_tree(Node* tree, int& i, bool order);
	void tree_sort(bool order);

public:
	treeSort() : sort_main(arr, number_of_elements)
	{
	}

	void init_sort(bool order);

	~treeSort()
	{
	}
};

#endif

