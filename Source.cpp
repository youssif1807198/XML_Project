#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <stdlib.h>
#include<stdio.h>
#include "Nodes_Tree.h"
#include <iostream>     
#include <fstream>  
#include "tree.h"
#include "XML_Formater.h"
#include "XML_JSON.h"



using namespace std;

void main(void)
{
	
	//ifstream sample("input.xml");
	ifstream Input_File("XMLFile.xml");
	ofstream Output_File("output.xml");


		XML_Formater f1;
		f1.xml_cutter(Input_File, Output_File);

	
	
	class tree t1;
	Nodes_Tree * t2;
	t2 = new Nodes_Tree();

	ifstream Output_File_Formatted("output.xml");

	XML_JSON j1;
	j1.tree_Void(t2, Output_File_Formatted);
	j1.Set_Repeated_Tags_Void(t2->root);
	j1.Adjust_Spacing_Levels_Void(t2->root);

	ofstream Output_File_JSON("output.xml");
	j1.Print_JSON_Void(t2->root, Output_File_JSON);
	



	




}

