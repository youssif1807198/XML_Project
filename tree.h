#pragma once


#include <string>
#include <iostream>
#include <fstream>
#include <stack>
#include <chrono> 
#include "Nodes_Tree.h"

using namespace std;
class tree
{
public:

	void tree_creator(Nodes_Tree *tree, ifstream& input, ofstream& output);
	tree();
	~tree();
};



