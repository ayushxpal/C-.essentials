// // // // // // // // // // // // // Single File Programming Question
// // // // // // // // // // // // // Problem Statement



// // // // // // // // // // // // // Imagine you are developing a contact management application where users can maintain a singly linked list of names. 



// // // // // // // // // // // // // Initially, users can enter a sequence of names to form a list of contacts. Later, they can insert a new name at a specific position within the list to rearrange their contacts, ensuring the list is updated and displayed correctly.

// // // // // // // // // // // // // Input format :
// // // // // // // // // // // // // The first line of input consists of an integer n, representing the number of initial names.

// // // // // // // // // // // // // The next n lines each contain a single name, representing the initial list of contacts.

// // // // // // // // // // // // // The last line consists of a name and an integer pos, representing the new contact to be added and its position in the list.

// // // // // // // // // // // // // Output format :
// // // // // // // // // // // // // The output prints the updated list of contacts after inserting the new contact at the specified position.



// // // // // // // // // // // // // Refer to the sample output for formatting specifications.

// // // // // // // // // // // // // Code constraints :
// // // // // // // // // // // // // The given test cases fall under the following constraints:

// // // // // // // // // // // // // 1 ≤ n ≤ 10

// // // // // // // // // // // // // 1 ≤ length of each name ≤ 100

// // // // // // // // // // // // // Sample test cases :
// // // // // // // // // // // // // Input 1 :
// // // // // // // // // // // // // 4
// // // // // // // // // // // // // John
// // // // // // // // // // // // // Alice
// // // // // // // // // // // // // Bob
// // // // // // // // // // // // // Emma
// // // // // // // // // // // // // Michael 3
// // // // // // // // // // // // // Output 1 :
// // // // // // // // // // // // // John Alice Michael Bob Emma 
// // // // // // // // // // // // // Input 2 :
// // // // // // // // // // // // // 3
// // // // // // // // // // // // // Emma
// // // // // // // // // // // // // Daniel
// // // // // // // // // // // // // Sophia
// // // // // // // // // // // // // Charlotte 1
// // // // // // // // // // // // // Output 2 :
// // // // // // // // // // // // // Charlotte Emma Daniel Sophia 
// // // // // // // // // // // // // Note :
// // // // // // // // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // // // // // // // // // // // Single File Programming Question
// // // // // // // // // // // // // Problem Statement



// // // // // // // // // // // // // Sarath is developing a text document editor that supports adding text lines at both the beginning and the end of the document. The editor should first read a list of initial lines to insert at the beginning of the document and then read an additional line to append at the end. 



// // // // // // // // // // // // // Guide Sarath in implementing the functionality to handle these operations using a singly linked list and display the final state of the document.



// // // // // // // // // // // // // Company tags: Capgemini

// // // // // // // // // // // // // Input format :
// // // // // // // // // // // // // The first line of input consists of an integer, n representing the number of lines in the document.

// // // // // // // // // // // // // The next n lines consist of the lines of text that constitute the document.

// // // // // // // // // // // // // The last line of input consists of a string s, which needs to be appended at the end of the document.

// // // // // // // // // // // // // Output format :
// // // // // // // // // // // // // The first line of output prints "Document: " followed by the initial document content, which inserts the given n values at the beginning.

// // // // // // // // // // // // // The second line prints "Updated Document: " followed by the final document content, which appends the given value s at the end of the document.



// // // // // // // // // // // // // Refer to the sample output for formatting specifications.

// // // // // // // // // // // // // Code constraints :
// // // // // // // // // // // // // The given test cases fall under the following constraints:

// // // // // // // // // // // // // 1 ≤ n ≤ 10

// // // // // // // // // // // // // Sample test cases :
// // // // // // // // // // // // // Input 1 :
// // // // // // // // // // // // // 3
// // // // // // // // // // // // // Apple
// // // // // // // // // // // // // Banana
// // // // // // // // // // // // // Orange
// // // // // // // // // // // // // Grapes
// // // // // // // // // // // // // Output 1 :
// // // // // // // // // // // // // Document: Orange Banana Apple
// // // // // // // // // // // // // Updated Document: Orange Banana Apple Grapes
// // // // // // // // // // // // // Input 2 :
// // // // // // // // // // // // // 2
// // // // // // // // // // // // // Hello
// // // // // // // // // // // // // World
// // // // // // // // // // // // // Space
// // // // // // // // // // // // // Output 2 :
// // // // // // // // // // // // // Document: World Hello
// // // // // // // // // // // // // Updated Document: World Hello Space
// // // // // // // // // // // // // Note :
// // // // // // // // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // // // // // // // // // // // Single File Programming Question
// // // // // // // // // // // // // Problem Statement



// // // // // // // // // // // // // Lisa wants to create a linked list sorted in ascending order. She wants to insert nodes in such a way that the linked list remains sorted after insertion.



// // // // // // // // // // // // // Write a program that takes the number of nodes to be inserted, followed by their values in non-decreasing order. The program should then ask for a new value and insert a node with that value at the appropriate position to maintain the sorted order.



// // // // // // // // // // // // // Finally, the program should print the updated linked list.



// // // // // // // // // // // // // Example



// // // // // // // // // // // // // Input:

// // // // // // // // // // // // // 5

// // // // // // // // // // // // // 1 3 5 7 9

// // // // // // // // // // // // // 4



// // // // // // // // // // // // // Output:

// // // // // // // // // // // // // 1 3 4 5 7 9



// // // // // // // // // // // // // Explanation:

// // // // // // // // // // // // // The program first creates a sorted linked list using the given input values: 1, 3, 5, 7, and 9. After creating the initial sorted linked list, the program asks for a new value, which is 4. It then inserts a node with value 4 at the appropriate position to maintain the sorted order. Finally, the program prints the updated linked list, which is 1, 3, 4, 5, 7, and 9 in ascending order.



// // // // // // // // // // // // // Company tags: Wipro

// // // // // // // // // // // // // Input format :
// // // // // // // // // // // // // The first line of input consists of an integer n, representing the number of elements in the initial sorted linked list.

// // // // // // // // // // // // // The second line of input consists of n space-separated integers, representing the elements of the sorted linked list.

// // // // // // // // // // // // // The third line of input consists of integer data, which represents the element to be inserted into the linked list.

// // // // // // // // // // // // // Output format :
// // // // // // // // // // // // // The output displays the updated linked list after inserting the new element, separated by space.

// // // // // // // // // // // // // The linked list should remain sorted in ascending order.



// // // // // // // // // // // // // Refer to the sample output for the formatting specifications.

// // // // // // // // // // // // // Code constraints :
// // // // // // // // // // // // // In this scenario, the test cases fall under the following constraints:

// // // // // // // // // // // // // 1 ≤ n ≤ 10

// // // // // // // // // // // // // -100 ≤ elements, data ≤ 100

// // // // // // // // // // // // // Sample test cases :
// // // // // // // // // // // // // Input 1 :
// // // // // // // // // // // // // 5
// // // // // // // // // // // // // 1 3 5 7 9
// // // // // // // // // // // // // 4
// // // // // // // // // // // // // Output 1 :
// // // // // // // // // // // // // 1 3 4 5 7 9 
// // // // // // // // // // // // // Input 2 :
// // // // // // // // // // // // // 6
// // // // // // // // // // // // // -15 -10 0 5 9 10
// // // // // // // // // // // // // 7
// // // // // // // // // // // // // Output 2 :
// // // // // // // // // // // // // -15 -10 0 5 7 9 10 
// // // // // // // // // // // // // Note :
// // // // // // // // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // // // // // // // // // // Single File Programming Question
// // // // // // // // // // // // Problem Statement



// // // // // // // // // // // // Sarath is developing a text document editor that supports adding text lines at both the beginning and the end of the document. The editor should first read a list of initial lines to insert at the beginning of the document and then read an additional line to append at the end. 



// // // // // // // // // // // // Guide Sarath in implementing the functionality to handle these operations using a singly linked list and display the final state of the document.



// // // // // // // // // // // // Company tags: Capgemini

// // // // // // // // // // // // Input format :
// // // // // // // // // // // // The first line of input consists of an integer, n representing the number of lines in the document.

// // // // // // // // // // // // The next n lines consist of the lines of text that constitute the document.

// // // // // // // // // // // // The last line of input consists of a string s, which needs to be appended at the end of the document.

// // // // // // // // // // // // Output format :
// // // // // // // // // // // // The first line of output prints "Document: " followed by the initial document content, which inserts the given n values at the beginning.

// // // // // // // // // // // // The second line prints "Updated Document: " followed by the final document content, which appends the given value s at the end of the document.



// // // // // // // // // // // // Refer to the sample output for formatting specifications.

// // // // // // // // // // // // Code constraints :
// // // // // // // // // // // // The given test cases fall under the following constraints:

// // // // // // // // // // // // 1 ≤ n ≤ 10

// // // // // // // // // // // // Sample test cases :
// // // // // // // // // // // // Input 1 :
// // // // // // // // // // // // 3
// // // // // // // // // // // // Apple
// // // // // // // // // // // // Banana
// // // // // // // // // // // // Orange
// // // // // // // // // // // // Grapes
// // // // // // // // // // // // Output 1 :
// // // // // // // // // // // // Document: Orange Banana Apple
// // // // // // // // // // // // Updated Document: Orange Banana Apple Grapes
// // // // // // // // // // // // Input 2 :
// // // // // // // // // // // // 2
// // // // // // // // // // // // Hello
// // // // // // // // // // // // World
// // // // // // // // // // // // Space
// // // // // // // // // // // // Output 2 :
// // // // // // // // // // // // Document: World Hello
// // // // // // // // // // // // Updated Document: World Hello Space
// // // // // // // // // // // // Note :
// // // // // // // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // // // // // // // // // Single File Programming Question
// // // // // // // // // // // Problem Statement



// // // // // // // // // // // Prasath is developing a program to manage sorted singly linked lists of sales data. The linked list should be kept sorted in ascending order. The task is to insert a new data point into the sorted linked list and display the list before and after insertion.



// // // // // // // // // // // Help Prasath in creating the program.



// // // // // // // // // // // Company Tags: Capgemini

// // // // // // // // // // // Input format :
// // // // // // // // // // // The first line of input contains an integer n, the number of initial data points to be inserted into the linked list.

// // // // // // // // // // // The second line contains n integers, which are the initial data points.

// // // // // // // // // // // The third line contains a single integer data, the new data point to be inserted into the linked list.

// // // // // // // // // // // Output format :
// // // // // // // // // // // The first line of output prints "Original data points:" followed by the linked list elements before the insertion of the new data point.

// // // // // // // // // // // The second line prints "Updated data points:" followed by the linked list elements after the insertion of the new data point.



// // // // // // // // // // // Refer to the sample output for formatting specifications.

// // // // // // // // // // // Code constraints :
// // // // // // // // // // // 1 ≤ n ≤ 25

// // // // // // // // // // // 1 ≤ initial data points, data ≤ 100

// // // // // // // // // // // Sample test cases :
// // // // // // // // // // // Input 1 :
// // // // // // // // // // // 6
// // // // // // // // // // // 25 36 47 58 69 80
// // // // // // // // // // // 19
// // // // // // // // // // // Output 1 :
// // // // // // // // // // // Original data points: 25 36 47 58 69 80 
// // // // // // // // // // // Updated data points: 19 25 36 47 58 69 80 
// // // // // // // // // // // Input 2 :
// // // // // // // // // // // 2
// // // // // // // // // // // 50 100 
// // // // // // // // // // // 75
// // // // // // // // // // // Output 2 :
// // // // // // // // // // // Original data points: 50 100 
// // // // // // // // // // // Updated data points: 50 75 100 
// // // // // // // // // // // Note :
// // // // // // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // // // // // // // // Single File Programming Question
// // // // // // // // // // Problem Statement



// // // // // // // // // // In a warehouse management system, packages are organized sequentially using a singly linked list, where each node represents a package with its unique ID. To optimize the retrieval process, the system allows reversing the order of packages in groups of k nodes. 



// // // // // // // // // // Your task is to read the package IDs, construct the linked list, and reverse the order of packages in groups of k.

// // // // // // // // // // Input format :
// // // // // // // // // // The first line of input consists of an integer n, the number of packages.

// // // // // // // // // // The second line consists of n integers, the package IDs.

// // // // // // // // // // The third line consists of an integer k, the size of the groups to reverse.

// // // // // // // // // // Output format :
// // // // // // // // // // The first line of output prints the original sequence of package IDs as a linked list.

// // // // // // // // // // The second line prints the modified sequence of package IDs after reversing in groups of k.



// // // // // // // // // // Refer to the sample output for formatting specifications.

// // // // // // // // // // Code constraints :
// // // // // // // // // // 1 ≤ n ≤ 20

// // // // // // // // // // 1 ≤ package ID, k ≤ 100

// // // // // // // // // // Sample test cases :
// // // // // // // // // // Input 1 :
// // // // // // // // // // 8
// // // // // // // // // // 1 2 3 4 5 6 7 8
// // // // // // // // // // 4
// // // // // // // // // // Output 1 :
// // // // // // // // // // Original Linked List: 1 2 3 4 5 6 7 8 
// // // // // // // // // // Modified Linked List: 4 3 2 1 8 7 6 5 
// // // // // // // // // // Input 2 :
// // // // // // // // // // 5
// // // // // // // // // // 1 2 3 4 5
// // // // // // // // // // 3
// // // // // // // // // // Output 2 :
// // // // // // // // // // Original Linked List: 1 2 3 4 5 
// // // // // // // // // // Modified Linked List: 3 2 1 5 4 
// // // // // // // // // // Note :
// // // // // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // // // // // // // Single File Programming Question
// // // // // // // // // Problem Statement



// // // // // // // // // Imagine you are given an integer n representing the number of nodes in a singly linked list. 



// // // // // // // // // Your task is to implement a program that creates a singly linked list with the given number of nodes and string values and then deletes the last node from the list. Finally, you need to print the contents of the modified linked list.

// // // // // // // // // Input format :
// // // // // // // // // The first line of input consists of an integer n, representing the number of nodes in the singly linked list.

// // // // // // // // // The next n lines of input consist of n strings, where each line represents the string value of a node in the linked list.

// // // // // // // // // Output format :
// // // // // // // // // The output should print the elements of the singly linked list after deleting the last node. The elements should be separated by space.



// // // // // // // // // Refer to the sample output for formatting specifications.

// // // // // // // // // Code constraints :
// // // // // // // // // The given test cases fall under the following constraints:

// // // // // // // // // 1 ≤ n ≤ 20

// // // // // // // // // Sample test cases :
// // // // // // // // // Input 1 :
// // // // // // // // // 4
// // // // // // // // // Hello 
// // // // // // // // // World 
// // // // // // // // // I 
// // // // // // // // // Am
// // // // // // // // // Output 1 :
// // // // // // // // // Hello World I 
// // // // // // // // // Input 2 :
// // // // // // // // // 3
// // // // // // // // // Hello 
// // // // // // // // // Hello 
// // // // // // // // // Hello
// // // // // // // // // Output 2 :
// // // // // // // // // Hello Hello 
// // // // // // // // // Note :
// // // // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.

// // // // // // // // Single File Programming Question
// // // // // // // // Problem Statement



// // // // // // // // Dharun is working on a program to manipulate linked lists. He wants to write a function that takes two linked lists as input, inserts nodes at the end, and deletes all the nodes from the first list that also appear in the second list. 



// // // // // // // // Dharun needs your help implementing this function. The function should take two linked lists, list1, and list2, as input, where each list is represented by its head node.

// // // // // // // // Input format :
// // // // // // // // The first line contains an integer n, denoting the number of nodes in list1.

// // // // // // // // The second line contains n space-separated integers, representing the values of the nodes in list1.

// // // // // // // // The third line contains an integer m, denoting the number of nodes in list2.

// // // // // // // // The fourth line contains m space-separated integers, representing the values of the nodes in list2.

// // // // // // // // Output format :
// // // // // // // // The first line of output displays "Before deletion: " followed by the elements of the first linked list before the deletion, separated by a space.

// // // // // // // // The second line of output displays "After deletion: " followed by the elements of the first linked list after the deletion, separated by a space.

// // // // // // // // If all elements in the first linked list are the same after deletion, the third line displays, "Elements in both lists are same".



// // // // // // // // Refer to the sample output for formatting specifications.

// // // // // // // // Code constraints :
// // // // // // // // In this scenario, the test cases fall under the following constraints:

// // // // // // // // 1 ≤ n,m ≤ 100

// // // // // // // // -5000 ≤ values of nodes ≤ 5000

// // // // // // // // Sample test cases :
// // // // // // // // Input 1 :
// // // // // // // // 5
// // // // // // // // 2 3 4 5 1
// // // // // // // // 5
// // // // // // // // 1 6 2 3 8
// // // // // // // // Output 1 :
// // // // // // // // Before deletion: 2 3 4 5 1 
// // // // // // // // After deletion: 4 5 
// // // // // // // // Input 2 :
// // // // // // // // 5
// // // // // // // // 1 2 3 4 5
// // // // // // // // 5
// // // // // // // // 1 2 3 4 5
// // // // // // // // Output 2 :
// // // // // // // // Before deletion: 1 2 3 4 5 
// // // // // // // // After deletion: 
// // // // // // // // Elements in both lists are same
// // // // // // // // Note :
// // // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // // // // // Single File Programming Question
// // // // // // // Problem Statement



// // // // // // // Madhan is developing a contact management system for a mobile application. The system allows users to maintain a list of their contacts. Whenever a user adds a new contact, the system should add it at the end of the contact list.



// // // // // // // Write a program for Madhan to implement the code to perform insertion at the end using a grounded header linked list.



// // // // // // // Company Tags: TCS

// // // // // // // Input format :
// // // // // // // The first line of input consists of the size n of the contact list.

// // // // // // // The second line consists of n contact elements.

// // // // // // // Output format :
// // // // // // // The output represents the contact list with the contacts added at the end.



// // // // // // // Refer to the sample output for formatting specifications.

// // // // // // // Code constraints :
// // // // // // // The given test cases fall under the following constraints:

// // // // // // // 1 ≤ n ≤ 20

// // // // // // // 1 ≤ contact elements ≤ 100

// // // // // // // Sample test cases :
// // // // // // // Input 1 :
// // // // // // // 5
// // // // // // // 1 2 3 4 5
// // // // // // // Output 1 :
// // // // // // // 1 2 3 4 5 
// // // // // // // Input 2 :
// // // // // // // 8
// // // // // // // 13 45 67 82 29 35 72 91
// // // // // // // Output 2 :
// // // // // // // 13 45 67 82 29 35 72 91 
// // // // // // // Note :
// // // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.

// // // // // // Single File Programming Question
// // // // // // Problem Statement



// // // // // // Alex is maintaining a list of integers representing stock quantities in his warehouse. Sometimes, he needs to remove all occurrences of a particular quantity from the list when an item is discontinued. He wants to use a grounded header linked list for this purpose.



// // // // // // Help Alex in the task.



// // // // // // Company Tags: CTS 

// // // // // // Input format :
// // // // // // The first line of input consists of the number of items n in the warehouse.

// // // // // // The second line consists of n elements, separated by space.

// // // // // // The third line consists of the quantity to remove all occurrences.

// // // // // // Output format :
// // // // // // The output prints the sequence of integers representing the updated list of stock quantities after the removal of all occurrences of the specified value.



// // // // // // Refer to the sample output for formatting specifications.

// // // // // // Code constraints :
// // // // // // 1 ≤ n ≤ 15

// // // // // // 1 ≤ elements ≤ 100

// // // // // // Sample test cases :
// // // // // // Input 1 :
// // // // // // 5
// // // // // // 1 2 3 3 3
// // // // // // 3
// // // // // // Output 1 :
// // // // // // 1 2 
// // // // // // Input 2 :
// // // // // // 6
// // // // // // 1 1 1 1 1 12
// // // // // // 1
// // // // // // Output 2 :
// // // // // // 12 
// // // // // // Note :
// // // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.

// // // // // Single File Programming Question
// // // // // Problem Statement



// // // // // Emma is working with two sets of sensor data recorded in two separate grounded header linked lists. She wants to merge these two lists alternately to analyze the combined data more efficiently. 



// // // // // Help Emma by writing a program to merge the two grounded header linked lists alternately.



// // // // // Company Tags: TCS

// // // // // Input format :
// // // // // The first line of input consists of the number of elements n in the first list.

// // // // // The second line consists of n elements, separated by space.

// // // // // The third line consists of the number of elements m in the second list.

// // // // // The fourth line consists of m elements, separated by space.

// // // // // Output format :
// // // // // The output prints the merged linked list with nodes from both lists alternately.



// // // // // Refer to the sample output for formatting specifications.

// // // // // Code constraints :
// // // // // 1 ≤ n, m ≤ 15

// // // // // 1 ≤ elements ≤ 100

// // // // // Sample test cases :
// // // // // Input 1 :
// // // // // 5
// // // // // 1 2 3 4 5
// // // // // 5
// // // // // 6 7 8 9 10
// // // // // Output 1 :
// // // // // 1 6 2 7 3 8 4 9 5 10 
// // // // // Input 2 :
// // // // // 4
// // // // // 12 26 34 48
// // // // // 4
// // // // // 56 59 64 78
// // // // // Output 2 :
// // // // // 12 56 26 59 34 64 48 78 
// // // // // Note :
// // // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // // Extra spaces and new line characters in the program output will result in the failure of the test case.

// // // // Single File Programming Question
// // // // Problem Statement



// // // // You are given the task of developing a program that operates on a circular header linked list, a variant of the standard linked list. In this circular header linked list, the last node points back to the header node, forming a circular structure.



// // // // Your goal is to implement a program that inserts elements at the end of the circular linked list and prints the data values of alternate nodes.



// // // // Company Tags: TCS

// // // // Input format :
// // // // The first line contains an integer n, representing the number of elements in the circular linked list.

// // // // The second line contains n space-separated integers, representing the elements to be inserted into the linked list.

// // // // Output format :
// // // // The output displays "Alternate Nodes: " followed by the data of every alternate node in the circular linked list.

// // // // If no elements are inserted, print "Linked List is empty".



// // // // Refer to the sample output for formatting specifications.

// // // // Code constraints :
// // // // In this scenario, the test cases fall under the following constraints:

// // // // 1 ≤ n ≤ 15

// // // // 1 ≤ elements ≤ 100

// // // // Sample test cases :
// // // // Input 1 :
// // // // 5
// // // // 1 2 3 4 5
// // // // Output 1 :
// // // // Alternate Nodes: 1 3 5 
// // // // Input 2 :
// // // // 0
// // // // Output 2 :
// // // // Linked List is empty
// // // // Note :
// // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // Extra spaces and new line characters in the program output will result in the failure of the test case.

// // // // Single File Programming Question
// // // // Problem Statement



// // // // You are given a circular header linked list. The program should allow the insertion of elements at the end of the list and the deletion of nodes at a given position. The program should display the contents of the circular linked list after each operation.



// // // // Company Tags: CTS 

// // // // Input format :
// // // // The first line contains an integer n representing the number of elements to be inserted into the circular linked list.

// // // // The second line contains n space-separated integers representing the elements to be inserted.

// // // // The last line contains an integer representing the position(1-based) for deletion.

// // // // Output format :
// // // // The output should display the contents of the circular linked list after each operation.

// // // // If the position for deletion is invalid, the output should display "Invalid position."



// // // // Refer to the sample output for the exact text and formatting specifications.

// // // // Code constraints :
// // // // The data values in the circular linked list are integers.

// // // // The program should handle an empty list appropriately.

// // // // Sample test cases :
// // // // Input 1 :
// // // // 4
// // // // 1 2 3 4
// // // // 3
// // // // Output 1 :
// // // // Contents of the CLL:
// // // // |1| --> |2| --> |3| --> |4| --> 
// // // // After deleting at position 3:
// // // // Contents of the CLL:
// // // // |1| --> |2| --> |4| --> 
// // // // Input 2 :
// // // // 5
// // // // 1 2 3 4 5
// // // // 5
// // // // Output 2 :
// // // // Contents of the CLL:
// // // // |1| --> |2| --> |3| --> |4| --> |5| --> 
// // // // After deleting at position 5:
// // // // Contents of the CLL:
// // // // |1| --> |2| --> |3| --> |4| --> 
// // // // Input 3 :
// // // // 5
// // // // 1 2 3 4 5
// // // // 6
// // // // Output 3 :
// // // // Contents of the CLL:
// // // // |1| --> |2| --> |3| --> |4| --> |5| --> 
// // // // Invalid position.
// // // // Note :
// // // // The program will be evaluated only after the “Submit Code” is clicked.
// // // // Extra spaces and new line characters in the program output will result in the failure of the test case.

// // // Single File Programming Question
// // // Problem Statement



// // // Lisa is organizing a list of attendees for two consecutive events. She wants to split a list of attendee names into two halves for the two events. You are tasked with helping Lisa by creating a program that handles this task efficiently.



// // // Write a program to manage a two-way linked list of attendee names to split it into two halves. 



// // // Company Tags: Microsoft

// // // Input format :
// // // The first line of input consists of a single integer N, representing the number of attendees.

// // // The following N lines contain the names of the attendees, one name per line.

// // // Output format :
// // // The first line of output displays the names of the attendees assigned to the first event.

// // // The second line displays the names of the attendees assigned to the second event.



// // // Refer to the sample output for formatting specifications.

// // // Code constraints :
// // // 1 ≤ N ≤ 20

// // // Sample test cases :
// // // Input 1 :
// // // 4
// // // John
// // // Emma
// // // Michael
// // // Sophia
// // // Output 1 :
// // // John Emma 
// // // Michael Sophia 
// // // Input 2 :
// // // 5
// // // Alice
// // // Bob
// // // Claire
// // // David
// // // Emily
// // // Output 2 :
// // // Alice Bob Claire 
// // // David Emily 
// // // Note :
// // // The program will be evaluated only after the “Submit Code” is clicked.
// // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // Single File Programming Question
// // // Problem Statement



// // // Tom manages a library system where books are categorized by their ID numbers in ascending order. He wants to maintain the order of books using a two-way linked list. Each time a new book is added, it should be placed in the correct position to keep the list sorted. Tom also wants to insert a final book after all the initial books have been added. 



// // // Write a program to help Tom maintain the sorted order of books in the library.



// // // Company Tags: Capgemini

// // // Input format :
// // // The first line of input contains an integer n representing the number of initial books.

// // // The second line consists of n integers representing the ID of each book to be added.

// // // The third line contains an integer representing the ID of the final book to be added.

// // // Output format :
// // // The output prints the sorted order of book IDs after all books have been added.



// // // Refer to the sample output for formatting specifications.

// // // Code constraints :
// // // 1 ≤ n ≤ 25

// // // 1 ≤ book IDs ≤ 100

// // // Sample test cases :
// // // Input 1 :
// // // 3
// // // 2 4 1
// // // 3
// // // Output 1 :
// // // 1 2 3 4 
// // // Input 2 :
// // // 1
// // // 5
// // // 2
// // // Output 2 :
// // // 2 5 
// // // Note :
// // // The program will be evaluated only after the “Submit Code” is clicked.
// // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // // Single File Programming Question
// // // Problem Statement



// // // Dinesh is learning linked lists and wants to create a program that manages a two-way linked list and performs the deletion of a node at a specified position. The program should allow the user to input the number of nodes, their values, and the position of the node to be deleted. After the deletion, the program should display the updated two-way linked list in reverse order.



// // // Guide Dinesh in completing the program.

// // // Input format :
// // // The input begins with an integer n, representing the number of nodes in the two-way linked list.

// // // The next line contains n space-separated integers representing the data values of each node.

// // // Finally, an integer p is provided, representing the position(1-based) of the node to be deleted.

// // // Output format :
// // // The program should output the two-way linked list before and after the deletion of the specified node.

// // // The linked list should be displayed in reverse order as a space-separated list of integers.



// // // Refer to the sample output for formatting specifications.

// // // Code constraints :
// // // The given test cases fall under the following constraints:

// // // 1 ≤ n ≤ 20

// // // 1 ≤ elements ≤ 1000

// // // Sample test cases :
// // // Input 1 :
// // // 4
// // // 16 24 39 47
// // // 1
// // // Output 1 :
// // // Before deletion: 47 39 24 16 
// // // After deletion: 39 24 16 
// // // Input 2 :
// // // 5
// // // 5 2 4 8 10
// // // 7
// // // Output 2 :
// // // Before deletion: 10 8 4 2 5 
// // // After deletion: 10 8 4 2 5 
// // // Input 3 :
// // // 8
// // // 12 34 76 91 28 31 94 57
// // // 7
// // // Output 3 :
// // // Before deletion: 57 94 31 28 91 76 34 12 
// // // After deletion: 57 94 31 28 91 76 12 
// // // Note :
// // // The program will be evaluated only after the “Submit Code” is clicked.
// // // Extra spaces and new line characters in the program output will result in the failure of the test case.


// // Single File Programming Question
// // Problem Statement



// // Tom manages a library system where books are categorized by their ID numbers in ascending order. He wants to maintain the order of books using a two-way linked list. Each time a new book is added, it should be placed in the correct position to keep the list sorted. Tom also wants to insert a final book after all the initial books have been added. 



// // Write a program to help Tom maintain the sorted order of books in the library.



// // Company Tags: Capgemini

// // Input format :
// // The first line of input contains an integer n representing the number of initial books.

// // The second line consists of n integers representing the ID of each book to be added.

// // The third line contains an integer representing the ID of the final book to be added.

// // Output format :
// // The output prints the sorted order of book IDs after all books have been added.



// // Refer to the sample output for formatting specifications.

// // Code constraints :
// // 1 ≤ n ≤ 25

// // 1 ≤ book IDs ≤ 100

// // Sample test cases :
// // Input 1 :
// // 3
// // 2 4 1
// // 3
// // Output 1 :
// // 1 2 3 4 
// // Input 2 :
// // 1
// // 5
// // 2
// // Output 2 :
// // 2 5 
// // Note :
// // The program will be evaluated only after the “Submit Code” is clicked.
// // Extra spaces and new line characters in the program output will result in the failure of the test case.


// Single File Programming Question
// Problem Statement



// Lena is a librarian managing a list of books in her library. Each book is represented by an integer ID. Lena needs to update her list by adding a new book ID to the beginning of the list, another ID to the end, and a third ID at a random position within the list. 



// Your task is to help Lena implement a function to perform these insertions and manage the book list efficiently.

// Input format :
// The first line of input consists of an integer N, the number of existing books in the list.

// The second line contains N integers, each representing the ID of a book.

// The third line contains an integer B, the ID of the book to be added at the beginning.

// The fourth line contains an integer E, the ID of the book to be added at the end.

// The fifth line contains an integer p, the position at which the third ID will be inserted (0-based index).

// The sixth line contains an integer R, the ID of the book to be added at p.

// Output format :
// The output prints the updated list of book IDs after performing the insertions.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the given test cases will fall under the following constraints:

// 1 ≤ N ≤ 10

// 1 ≤ book ID ≤ 1000

// 0 ≤ p ≤ N

// Sample test cases :
// Input 1 :
// 3
// 100 200 300
// 10 
// 20
// 1
// 30
// Output 1 :
// 10 30 100 200 300 20 
// Input 2 :
// 5
// 101 102 103 104 105
// 200
// 300
// 4
// 400
// Output 2 :
// 200 101 102 103 400 104 105 300 
// Input 3 :
// 2
// 11 22
// 10 
// 20
// 2
// 30
// Output 3 :
// 10 11 30 22 20 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

// Single File Programming Question
// Problem Statement



// Raj, a mechanic, uses a linked list to track the cars waiting for repair. He needs to remove a car with a particular license plate number and also delete a car from a specific position in his list. Assist Raj by writing a program that allows him to perform these deletions based on given inputs.

// Input format :
// The first line of input consists of an integer N, the number of cars in the list.

// The second line contains N integers, each representing the license plate number of a car.

// The third line contains an integer R, the license plate number of the car to be removed.

// The fourth line contains an integer P, the position (0-based index) of the car to be removed.

// Output format :
// The output prints the updated list of license plate numbers after performing the deletions.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the given test cases will fall under the following constraints:

// 3 ≤ N ≤ 10

// 1000 ≤ license plate number ≤ 9999

// R is present in the list.

// Sample test cases :
// Input 1 :
// 3
// 1111 2222 3333
// 1111
// 0
// Output 1 :
// 3333 
// Input 2 :
// 5
// 1011 1034 1900 8789 9899
// 9899
// 3
// Output 2 :
// 1011 1034 1900 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// Single File Programming Question
// Problem Statement



// Jake maintains a linked list of his gym members, each represented by a unique membership number. Jake needs to check if a particular membership number is part of his list of active members. Write a solution to help Jake find out if the membership number exists in his linked list.

// Input format :
// The first line of input consists of an integer N, the number of active gym members in the list.

// The second line contains N integers, each representing a unique membership number of an active gym member.

// The third line contains an integer M, representing the membership number that Jake needs to check in the list.

// Output format :
// The output prints "Membership number M is active" if the membership number exists in the list.

// Otherwise, the output prints "Membership number M is not in the list".



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the given test cases will fall under the following constraints:

// 1 ≤ N ≤ 10

// 1 ≤ membership number ≤ 1000

// Sample test cases :
// Input 1 :
// 2
// 889 911
// 977
// Output 1 :
// Membership number 977 is not in the list
// Input 2 :
// 3
// 100 200 300
// 100
// Output 2 :
// Membership number 100 is active
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// Single File Programming Question
// Problem Statement



// Nina, a vet, keeps track of various pets for checkups using a circular linked list. Each pet is represented by an integer code. Nina wants to traverse the list of pets, add a new pet to the end of the list, and remove a pet based on its code. Implement a solution to help Nina with these tasks.

// Input format :
// The first line of input consists of an integer N, the number of pets currently in the circular linked list.

// The second line contains N integers, each representing a pet code.

// The third line contains an integer M, the code of the new pet to be added to the end of the list.

// The fourth line contains an integer R, the code of the pet to be removed from the list.

// Output format :
// The first line of output prints the list of pet codes after inserting the new pet at the end.

// The second line prints the list of pet codes after removing the specified pet code.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 10

// 1 ≤ pet code ≤ 100

// R is present in the list.

// Sample test cases :
// Input 1 :
// 7
// 12 59 23 70 71 34 78
// 88
// 12
// Output 1 :
// 12 59 23 70 71 34 78 88 
// 59 23 70 71 34 78 88 
// Input 2 :
// 5
// 32 28 49 26 18
// 99
// 28
// Output 2 :
// 32 28 49 26 18 99 
// 32 49 26 18 99 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



// Single File Programming Question
// Problem Statement



// Sarah keeps a two-way linked list of her favorite recipes, each represented by an integer code. She wants to traverse the list to review all recipes, insert a new recipe at the end, and remove a recipe based on its code. Write a program to assist Sarah with these tasks.

// Input format :
// The first line of input consists of an integer N, the number of recipes in the list.

// The second line contains N integers, each representing a recipe code.

// The third line contains an integer M, the code of the new recipe to be inserted at the end of the list.

// The fourth line contains an integer R, the code of the recipe to be removed from the list.

// Output format :
// The first line of output prints the list of recipe codes after inserting the new recipe at the end.

// The second line prints the list of recipe codes after removing the specified recipe code.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 10

// 100 ≤ recipe code ≤ 1000

// R is present in the list.

// Sample test cases :
// Input 1 :
// 5
// 101 202 303 404 505
// 606
// 303
// Output 1 :
// 101 202 303 404 505 606 
// 101 202 404 505 606 
// Input 2 :
// 5
// 101 102 103 104 105
// 106
// 101
// Output 2 :
// 101 102 103 104 105 106 
// 102 103 104 105 106 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

