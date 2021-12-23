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



using namespace std;

void main(void)
{
	
	ifstream inputFile("input.xml");
		XML_Formater f1;
	
    ofstream outputfile("output.xml");

	f1.xml_cutter(inputFile, outputfile);

	ifstream inputfie_after_cutting("output.xml");


	ofstream File4("XMLFile.xml");


	class tree t1;
	Nodes_Tree * t2;
	t2 = new Nodes_Tree();
	

	

	t1.tree_creator(t2,inputfie_after_cutting, File4);


	




}