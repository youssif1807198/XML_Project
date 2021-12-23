#include "tree.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include <fstream>
#include <stack>
#include "Nodes_Tree.h"





using namespace std;



void tree::tree_creator(Nodes_Tree * tree, ifstream & input, ofstream & output)
{
	string line;
	Node* LOC_Node;
	stack<Node *> stack;
	int level = 1;

	while (getline(input, line))
	{
		if (line[0] == '<' && (line[1] == '!' || line[1] == '?')) 
		{
			continue;
		}
		if (line[0] == '<' && line[1] != '/')
		{

			int End_Line;
			for (int i = 1; i < line.length(); i++)
			{
				End_Line = i;
				if (line[i] == ' ')
				{
					break;
				}
			}
			string Tag_Name = line.substr(1, End_Line - 1);
			LOC_Node = new Node(Tag_Name);
			if (stack.size() == 0)
			{
				tree->Add_root_Void(LOC_Node);
				tree->add_level_Void(LOC_Node, level);
			
				for (int i = 0;i < level - 1;i++)
				{

					output << "    ";
				}
				output << '<' << LOC_Node->Tag_name << ">" << endl;
				level++;



			}
			else
			{
				tree->Add_Child_Void(stack.top(), LOC_Node);
				tree->add_level_Void(LOC_Node, level);
				for (int i = 0; i < level - 1;i++)
				{
					output << "    ";
				}
				output << '<' << LOC_Node->Tag_name << '>' << endl;
				level++;
				

			}
			stack.push(LOC_Node);
	

		}
		
		
		else if (line[0] == '<' && line[1] == '/')
		{
			
			level--;
			for (int i = 0; i < level - 1;i++)
			{
				output << "    ";
			}
			output << "</" << stack.top()->Tag_name << '>' << endl;
			stack.pop();


		}
		else
		{
		
		
			tree->Set_Data_Void(LOC_Node, line);
			for (int i = 0;i < level - 1;i++)
			{

				output << "    ";
			}
			output <<  LOC_Node->Tag_value << endl;



		}


		


	}




	

}

tree::tree()
{
}


tree::~tree()
{
}
