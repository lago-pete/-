#pragma once



#define _CRT_SECURE_NO_WARNINGS


#pragma once
#include <fstream>
#include <iomanip>
#include <chrono>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;



template <typename T>

class AVLNode
{
public:
	AVLNode(T newData) : data(newData), left_node(nullptr), right_node(nullptr) {};
	~AVLNode();

	void set_data(const T& newData);
	T get_data();

	void set_left(AVLNode<T>* left);
	AVLNode<T>* get_left();

	void set_right(AVLNode<T>* right);
	AVLNode<T>* get_right();

	void set_height(int height_temp);
	int get_height();
	

private:
	T data = -1;
	int height = 0;
	AVLNode<T>* left_node = nullptr;
	AVLNode<T>* right_node = nullptr;

};


template< typename T>
AVLNode<T>:: ~AVLNode()
{
	
}


template< typename T>
void AVLNode<T> ::set_data(const T& newData)
{
	data = newData;
}

template< typename T>
T AVLNode<T>::get_data()
{
	return data;
}

template< typename T>
void AVLNode<T> ::set_left(AVLNode<T>* left)
{
	left_node = left;
}

template< typename T>
AVLNode<T>* AVLNode<T> ::get_left()
{
	return left_node;
}

template< typename T>
void AVLNode<T> ::set_right(AVLNode<T>* right)
{
	right_node = right;
}

template< typename T>
AVLNode<T>* AVLNode<T> ::get_right()
{
	return right_node;
}


template<typename T>
void AVLNode<T> ::set_height(int height_temp)
{
	height = height_temp;
}

template<typename T>
inline int AVLNode<T>::get_height()
{
	
	return height;
}




