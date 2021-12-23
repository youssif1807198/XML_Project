#pragma once


#include<string>
#include<vector>


using namespace std;
class Node
{
public:
	string Tag_name;
	string Tag_value;
	vector < Node * > children;
	Node * parent;
	int level;
	int index;
public:
	//Constructor
	Node(string LOC_Tagname)
	{
		Tag_name = LOC_Tagname;
		
	}
};


class Nodes_Tree
{

		Node* root;

public:
	




	Nodes_Tree();

	string Get_Data_String(Node * LOC_Node);
	vector <Node *> Get_Childern_Vector(Node *LOC_Node);
	Node * Get_Root_Node();
	void Add_Child_Void(Node * LOC_Parent, Node * LOC_Child);
	void Add_root_Void(Node * LOC_Root);
	void Set_Data_Void(Node * LOC_Node, string LOC_Data);
	void add_level_Void(Node * LOC_Node, int LOC_level);
	int Get_Index_Int(Node * LOC_Node);
	


	//void tree(Nodes_Tree *tree, ifstream & input);


	
	~Nodes_Tree();
};

