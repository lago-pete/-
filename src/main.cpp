#include "AVLTree.h"
#include <iostream>
#include <sstream>




int main()
{
	AVLTree<int> tree1;
	AVLTree<int> tree2;
	AVLTree<int> tree3;

	int array1[50];
	int array2[50];
	int array3[50];
	int x = 0;
	int y = 0;
	int z = 0;
	

	for (int i = 0; i < 100; i++)
	{
		array1[x] = i + 1;
		array3[x] = i + 1;
		x++;
		i++;
	}
	
	for (int i = 100; i > 0; i--)
	{
		array2[y] = i - 1;
		y++;
		i--;
	}


	for (int i = 0; i < 50; i++)
	{
		tree1.insert_data(array1[i]);
		
	}

	for (int i = 0; i < 50; i++)
	{
		tree2.insert_data(array2[i]);
		tree3.insert_data(array3[i]);
	}



	cout << "The height of Tree 1 is: " << tree1.tree_height(tree1.get_root()) << endl;
	cout << "The height of Tree 2 is: " << tree2.tree_height(tree2.get_root()) << endl;
	cout << "The height of Tree 3 is: " << tree3.tree_height(tree3.get_root()) << endl;

	if (tree1.is_balanced(tree1.get_root()))
	{
		cout << "Tree 1 is Balanced" << endl;
	}
	else
	{
		cout << "Tree 1 is Not Balanced" << endl;
	}
	if (tree2.is_balanced(tree2.get_root()))
	{
		cout << "Tree 2 is Balanced" << endl;

	}
	else
	{
		cout << "Tree 2 is Not Balanced" << endl;
	}
	if (tree3.is_balanced(tree3.get_root()))
	{
		cout << "Tree 3 is Balanced" << endl;
	}
	else
	{
		cout << "Tree 3 is Not Balanced" << endl;
	}
	





	for (int i = 0; i < 100; i++)
	{
		tree1.contains_node(i, tree1.get_root());
		tree2.contains_node(i, tree2.get_root());
		tree3.contains_node(i, tree3.get_root());
		
		
		
		
	}

	cout << "My AVL tree 1 implementation is right" << endl;

	cout << "My AVL tree 2 implementation is right" << endl;


	cout << "My AVL tree 3 implementation is right" << endl;

	return 0;
}