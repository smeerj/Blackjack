// /********************************************************************************
//  *		TestCards.cpp
//  *		author(s): 
//  *		citations:
//  *
//  *		goal: test the program
//  *
//  *		overview: 
//  *
//  *		(1) 
//  *		(2) 
//  *		(3) 
//  *
//  *
//  ********************************************************************************/
// #include <iostream> 
// #include <string>
// #include "Card.h"
// #include "Node.h"
// #include "testCards.h"

// using namespace std;

// enum Choices {NODE_TEST, LL_TEST}; 

// int getTestMenuChoice () {   

//     int choiceOption = NODE_TEST; //Make it do other numbers later
	
// 	return choiceOption;
// }

// void testNode(){
// 	{
// 		//Create a Node and test Node constructor
// 		cout << "Node Test A" << endl;
// 		Card *testCard = new Card("One",'C', 1);
// 		Node *testNode = new Node(testCard);
// 		if((*testCard).getName() == "One"){
// 			cout << "This node's card's name is one." << endl; 
// 		}
// 		else{
// 			cout << "Error: Card name is " << (*testCard).getName() << endl;
// 		}
// 		if((*testCard).getSuit() == 'C'){
// 			cout << "This node's card's suit is clubs." << endl; 
// 		}
// 		else{
// 			cout << "Error: Card suit is " << (*testCard).getSuit() << endl;
// 		}
// 		delete testCard;
// 		testCard = nullptr;
// 	}
// }

// void promptUnitTest() {
// 	int menuChoice;
// 	do {										 
// 		menuChoice = getTestMenuChoice();
// 		switch (menuChoice) {
// 			case NODE_TEST:
// 				testNode();
// 				break;
// 			case LL_TEST:  
// 				break;
// 			case 2: 
// 				break;
// 			case 3: 
// 				break;
// 			case 4: 
// 				break;
// 			default:
// 				cout << "Back to menu" << endl;
// 				menuChoice = 0;
// 		}
// 	} while (menuChoice != 0);
// } 
