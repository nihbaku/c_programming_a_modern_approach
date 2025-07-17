## Chapter 2

- About data structures, how to compile programms, first program

- Getting a C programm to run requires some steps: Preprocessing (e.g. include statements with "#"), compiling, linking (linking the standard- or library functios to the output of the compiler). The linking step is done by gcc for example.

- Directives stand at the top of a C programm. They start with "#" and "supplement" the programm with additional headers and information. These can be libraries or also constant variables. We need this type of addition even for simple printing, because there are not standard functions for read or write like in other programming languages.

- Directives don't end with a ";".

- Statements can be function calls like printf() or "return"-statement. They always end with a semicolon.

- The "main" function is a critical part of a C program, it get's called automatically when the program is executed.

- The main function returns a value to the OS for error handling.
