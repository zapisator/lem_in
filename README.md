# Lem-in
My Lem-in project for School21 by Sberbank

The task of the project is to write a program which finds the optimal path in a graph. Project features - the graph can consist of any number of nodes, the graph is undirected, the number of so called "ants" is specified. They must get from the starting node to the end node in as few moves as possible. Each turn, each ant may move from its node to any other node connected to that node. Each node (except for the start and finish node) may contain only one ant. For more details see the file in the folder [sbj/09_lem-in.en.pdf](https://github.com/TesenDesk/Lemin/blob/master/sbj/09_lem-in.en.pdf).

Implemented its own algorithm, based on the [Disjoint Path Finding] algorithm (http://www.macfreek.nl/memory/Disjoint_Path_Finding).

To start the program, first run `make`.    
Use the command below to start the program.  

```
./lem-in -f[hpnlkd] FILENAME
```
or
```
./lem-in [-hpnlkd] < FILENAME.
```
The `FILENAME` contains information about the graph. Details about such files can be found in the project file in the `sbj` folder.    
The program will print the transmitted file and the instructions for the ants at each step (which ant should go and to which node of the graph).    
For example,атает переданный файл и указания для муравьев на каждом шаге (какой муравей должен пеместиться и в какой узел графа).    
For example,
```
5
5 2 2
4 2 2
3 4 5
2 3 4
##start
1 23 3
##end
0 9 5
1-0
1-2
1-3

L1-0 L2-0 L3-0 L4-0 L5-0
```

Additional operation flags have been added. The `lem-in` supports flags:    
`-h` - will show the help page.    
`-f <file>` - ability to transfer a file to the program directly.    
`-c` - shows the total number of steps.    
`-n` - hides the answer of the program. This was necessary for mass tests, so that the program would display only the number of steps.    
`-p` - shows the paths found.    
`-l` - shows the lengths of the paths found. It is recommended to use with the flag `-p`.    
`-k` - Colors ants depending on the path they use. Use with flag `-p` will color the paths too.    
`-d` - Debug mode. Prints out a lot of additional information.    

I did this project with a student of @jjerde School. I did the file validation and data saving, algorithm checking. His part of the job was to write the algorithm.

Final score: 125%

2019, Moscow, Russia
