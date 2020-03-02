# fillit
This project is an exercise in recursion, optimization, and use of data structures. The goal is to construct a recursive algorithm that, given any text list of Tetronimos (Tetris pieces), will find and return the smallest square in which they can all fit.
To use this project, download and run make in the directory. Run the program by piping a text file into the program using ./fillit [text file].

In the text file, the tetronimos must be sent in in 4x4 boxes with hash signes representing blocks and periods represeiting the blank spaces and an empty line between each tetronimo.

## Compiling
Run `make`, an executable called `fillit` should compile directly. Please submit
an issue if you run into any.

## Usage

`./fillit [file]`

Example:

	.###
	..#.
	....
	....

	....
	..#.
	###.
	....
	
	..#.
	..#.
	..#.
	..#.

Result:

	ABBB
	A.BC
	ACCC
	A...
