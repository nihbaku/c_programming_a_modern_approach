## Chapter 2

- About data structures, how to compile programms, first program

- Getting a C programm to run requires some steps: Preprocessing (e.g. include statements with "#"), compiling, linking (linking the standard- or library functios to the output of the compiler). The linking step is done by gcc for example.

- Directives stand at the top of a C programm. They start with "#" and "supplement" the programm with additional headers and information. These can be libraries or also constant variables. We need this type of addition even for simple printing, because there are not standard functions for read or write like in other programming languages.

- Directives don't end with a ";".

- Statements can be function calls like printf() or "return"-statement. They always end with a semicolon.

- The "main" function is a critical part of a C program, it get's called automatically when the program is executed.

- The main function returns a value to the OS for error handling.

- A string literal is a series of characters enclosed in double quotation marks, like "apple"

- The "//" notation of the comment was introduced in C99 and terminates after a linebreak. The "/* */" combo preceeds this and ends if the last "*/" is reached.

- Arithmetics on floats might be slower than on ints. And floats maybe approximated when storing them, i.e. 0.1 -> 0.9999999987

- In C89 ALL declarations have to come before the first statement. In C99 this was changed that they have to be declared, before they are used.

- It is said in the book that it is best practice to have a succeeding "f" behind floats: "float foo = 0.5f". Otherwise the compiler might through an error. My search has shown, that this actually specifies the type of float, i.e. "double" or "float" ... and thus is needed to specify which type of float we want.
