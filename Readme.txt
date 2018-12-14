Code explanation and commands to run the program

Text files to be created :-
1. input.txt: This file stores the problem sudoku to be solved
2. sat.txt: Contains the clauses that are to be fed into the miniSAT.
3. ans.txt: Contains the satisfiable clauses that are output by the SAT solver.
4. o.txt: Contains the decoded sudoku.

Most importantly, we also need to store an unsolved sudoku in th file named input.txt.

Sudoku Solver
file name : sudoku.cpp

In this file we have the code to take the unsolved sudoku as the input and we will get solved sudoku as output.
In the input we would substitute "." with "0" in order to get the solved answer.
Steps to run the file

1.compile the c++ file.
2.Run the c++ file
3.Give the unsolved sudoku as input.
4.We would get the solved sudoko as the output.

Within the file, these things happen in the file:-
1.The C++ code outputs the SAT conditions in a file.
2.From the code, we then execute a command to the SAT to solve the SAT encoding and store the satisfiable encodings in a separate file.
3.The last part of the code then decodes the information and ouputs the solved sudoku.

Required Commands 
1. g++ sudoku.cpp -o solver
2. ./solver


Sudoku Generator
file name : generator.cpp

Here we will take a solved sudoku as an input and output a minimal sudoku as a problem.
Components of code and their functions:-
1. invoke - generates a solved sudoku from an unsolved one.
2. isunique - tests the uniqueness of the unsolved sudoku generated.
3. main - generate an unsolved sudoku and check the minimality of the sudoku generated.

Commands to execute the sudoku generator.
1. g++ generator.cpp -o generator
2. ./generator

Proving that a sudoku is minimal:-

Lemma1- We assume S to be the set of points which have a unique solution.
          Is S1 is a superset of S , then S1 also has a unique solution.
Lemma2- Let S' be the set of points which have more than more solution.
          If S1 is a subset of S' , then S1 does not have a unique solution.

Algorithm-
Let Sm be the minimal subset that consists of the elements 
e1, e2,.....,ek.
Let e be an element which when only added gives a unique soluiton.
Let e does not belong to Sm.
If e does not belong to Sm, then we will not be having an unique solution.
But we know that Sm has an unique solution.
Therefore e must belong to Sm.

Now, we are left with e1, e2....., ek.
Now, each of those terms has two possibilities, either to be selected or rejected and hence we will test for the minimum number of them to get the required minimal sudoku.






