//
// File: stack.hpp
//
// Programmer:
// Date:       Spring 2023
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//
#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_

#include <new>
#include <cassert>


template<typename T> 
class Node {
public:
	Node<T>   *next = nullptr;
	T Data;
};


// CLASS INV:
//
template <typename T>
class stack {
public:
    stack     (){
		tos = nullptr;
	}

    stack     (const stack<T>& rhs){	//copy constructor
		Node<T> *tmp = rhs.tos, *bottom;
		while(tmp!=nullptr){
			if(tos==nullptr){
				tos = new Node<T>;
				tos->Data = tmp->Data;
				bottom = tos; 
			}else{
				bottom->next = new Node<T>;
				bottom = bottom->next;
				bottom->Data = tmp->Data;
			}
			tmp = tmp->next;
		} 
	}

    ~stack    (){
		Node<T> *tmp;
		while(tos!=nullptr){
			tmp = tos;
			tos = tos->next;
			delete tmp;
		}
	}

    void      swap      (stack<T>& rhs){	//constant time swap
		Node<T> *tmp = rhs.tos;
		rhs.tos = tos;
		tos = tmp;
	}

    stack<T>& operator= (stack<T> rhs){
		swap(rhs);
		return *this;
	}
    
	bool      empty     () const{
		return tos==nullptr;
	}

	bool      full      () const{
		Node<T> *tmp = new Node<T>;
    	if(tmp == nullptr) return true;
    	delete tmp;
    	return false;
	}

	T         top       () const{
		return tos->Data;
	}

	T         pop       (){
		T tmp = tos->Data;
		Node<T> *node = tos;
		tos = tos->next;
		delete node;
		return tmp;
	}

	void      push      (const T& data){
		Node<T> *newNode = new Node<T>;
		newNode->Data = data;
		newNode->next = tos;
		tos = newNode;
	}

private:
	Node<T>   *tos = nullptr;
};



#endif
