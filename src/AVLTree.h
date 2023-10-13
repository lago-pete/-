#pragma once


#pragma once
#include <fstream>
#include <iomanip>
#include <chrono>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "AVLNode.h"


template <typename T>
class AVLTree
{
public:
	AVLTree();
	~AVLTree();
	int tree_height(AVLNode<T>* temp);

	AVLNode<T>* insert_tree(AVLNode<T>* temp, T data);

	void insert_data(T data);

	bool contains_node(T find, AVLNode<T>* temp);

	bool is_balanced(AVLNode<T>* temp);

	AVLNode<T>* right_rotate(AVLNode<T>* temp);

	AVLNode<T>* left_rotate(AVLNode<T>* temp);

	AVLNode<T>* rotation_select(AVLNode<T>* temp, T data);

	AVLNode<T>* get_root();

	int find_balance(AVLNode<T>* temp);


private:
	AVLNode<T>* root;
};

template <typename T>
AVLTree<T> ::AVLTree()
{
	root = nullptr;
}

template <typename T>
AVLTree<T> :: ~AVLTree()
{
	delete root;
}

template <typename T>
int AVLTree<T> :: tree_height(AVLNode<T>* temp)
{

	if (temp == nullptr)
	{
		return -1;
	}
	int left_height = tree_height(temp->get_left());
	int right_height = tree_height(temp->get_right());

	/*temp->get_left()->set_height(left_height);
	temp->get_right()->set_height(right_height);*/

	return max(left_height, right_height) + 1;
}

template <typename T>
AVLNode<T>* AVLTree<T>::insert_tree(AVLNode<T>* temp, T data)
{

	if (temp == nullptr)
	{
		return new AVLNode<T> (data);
	}
	if (data < temp->get_data())
	{
		temp->set_left(insert_tree(temp->get_left(), data));
	}
	else
	{
		temp->set_right(insert_tree(temp->get_right(), data));
	}
	temp->set_height(tree_height(temp));


	return rotation_select(temp, data);
}

template<typename T>
inline void AVLTree<T>::insert_data(T data)
{
	
	root = insert_tree(root, data);
}

////////////////////////////////////////////////////////////////////////
template <typename T>
bool AVLTree<T>::contains_node(T find, AVLNode<T>* temp)
{

	if(temp->get_left() == nullptr)
	{
		return 0;
	}
	if (temp->get_right() == nullptr)
	{
		return 0;
	}


	
	if (find == temp->get_data())
	{
		return 1;
	}
	if (find < temp->get_data() )
	{
		return contains_node(find, temp->get_left());
	}
	else
	{
		return contains_node(find, temp->get_right());
	}
	return 0;
}

template <typename T>
bool AVLTree<T>::is_balanced(AVLNode<T>* temp)
{
	if (temp == nullptr)
	{
		return 1;
	}

	int temp_num = find_balance(temp);
	

	if (temp_num >= -1 && temp_num <= 1) {
		return 1;  
	}

	return 0;
}



template<typename T>
AVLNode<T>* AVLTree<T>::right_rotate(AVLNode<T>* temp)
{
	AVLNode<T>* temp1 = temp->get_left();
	AVLNode<T>* temp2 = temp1->get_right();


	temp1->set_right(temp);
	temp->set_left(temp2);

	temp1->set_height(tree_height(temp1));
	temp->set_height(tree_height(temp));

	return temp1;
}

template<typename T>
AVLNode<T>* AVLTree<T>::left_rotate(AVLNode<T>* temp)
{
	AVLNode<T>* temp1 = temp->get_right();
	AVLNode<T>* temp2 = temp1->get_left();


	temp1->set_left(temp);
	temp->set_right(temp2);


	temp1->set_height(tree_height(temp1));
	temp->set_height(tree_height(temp));

	return temp1;
}

template<typename T>
AVLNode<T>* AVLTree<T>::rotation_select(AVLNode<T>* temp, T data)
{
	int balance = find_balance(temp);
	int l = 0;
	int r = 0;

	if (temp->get_left() == nullptr)
	{
		l = -1;
	}
	else
	{
		l = temp->get_left()->get_data();
	}
	if (temp->get_right() == nullptr)
	{
		r = -1;
	}
	else
	{
		r = temp->get_right()->get_data();
	}


	//left

	if (balance > 1 && data < l)
	{
		return right_rotate(temp);
	}
	//right
	if (balance < -1 && data > r)
	{
		return left_rotate(temp);
	}
	//left to right
	if (balance > 1 && data > l)
	{
		temp->set_left(left_rotate(temp->get_left()));
		return right_rotate(temp);
	}
	//right to left

	if (balance < -1 && data < r)
	{
		temp->set_right(right_rotate(temp->get_right()));
		return left_rotate(temp);
	}

	return temp;

}

template<typename T>
inline AVLNode<T>* AVLTree<T>::get_root()
{
	return root;
}

template<typename T>
inline int AVLTree<T>::find_balance(AVLNode<T>* temp)
{
	int l = 0;
	int r = 0;
	if (temp->get_left() == nullptr)
	{
		l = -1;
	}
	else
	{
		l = temp->get_left()->get_height();
	}
	if (temp->get_right() == nullptr)
	{
		r = -1;
	}
	else
	{
		r = temp->get_right()->get_height();
	}


	return  l - r;
}



