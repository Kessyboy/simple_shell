
Sure, here's a rephrased version:

Project Title: ALX Shell Project by Kesiena and Tomilola

Overview:
This project involves the creation of a UNIX command interpreter resembling the functionalities of the simple shell (sh). It encompasses additional functions beyond the basic shell operations. The entire program was developed using the C language and stands as a significant milestone project within the ALX Africa Software Engineering curriculum.

Installation:
To integrate this project into your working environment, clone the repository into your directory. For optimal performance, compile the files using GCC along with specific flags: -Wall -Wextra -Werror -pedantic -std=gnu89

How to Use:
Once compiled, the resulting program operates autonomously, supporting both interactive and non-interactive modes.

Interactive Mode:
In interactive mode, execute the program and await the appearance of the prompt. Subsequently, input commands directly. Terminate the session using either the "exit" command or by pressing ctrl-D.

Non-Interactive Mode:
For non-interactive mode, echo the desired command and pipe it into the program using the following syntax:

bash
Copy code
echo "ls" | ./shell
In non-interactive mode, upon executing your desired command(s), the program will exit.

Included Features:
The shell incorporates support for several built-in commands, including:





