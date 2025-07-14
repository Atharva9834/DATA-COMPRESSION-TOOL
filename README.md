# DATA-COMPRESSION-TOOL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: ATHARVA GULHANE

*INTERN ID*: CT04DF2093

*DOMAIN*: C Programming

*DURATION*: 4 WEEEKS

*MENTOR*: NEELA SANTOSH

##DESCRIPTION OF TASK

The objective of this task was to design and implement a basic data compression tool using the Run-Length Encoding (RLE) algorithm in the C programming language. The purpose of this tool is to demonstrate a simple yet effective method for reducing the size of text by identifying and compactly representing repeated sequences of characters.

Run-Length Encoding is one of the simplest forms of data compression. It works by replacing consecutive repeating characters with a single character followed by the number of its repetitions. For example, the string "aaabbc" would be compressed to "a3b2c1". This algorithm is widely used in contexts where data has lots of repeating characters, such as bitmap images, fax machines, and simple text files.

The program begins by prompting the user to enter a string they wish to compress. To safely handle user input, the code uses the fgets function, which reads an entire line of text into a buffer, preventing buffer overflow vulnerabilities. The input is stored in a character array named input.

To ensure correctness, the program removes the newline character that fgets captures when the user presses Enter. This is done by checking if the last character is '\n' and replacing it with the null terminator '\0'. This step is crucial to avoid unintended characters in the compression output.

The core compression logic uses a while loop to traverse the input string character by character. At each step, it checks how many consecutive times the current character appears. This is done using a nested while loop that increments a counter (count) every time it finds the same character next to the current one.

Once the repetition ends, the program prints the character and its count in the format %c%d. For example, if the current character is 'a' and it appeared three times, it outputs a3. The loop then continues to process the next unique character and repeats this process until the end of the string.

The program finally prints the complete compressed string on the console, showing the user how their input has been compressed.

For this task, I used:

Visual Studio Code (VS Code): as the programming environment and code editor, benefiting from syntax highlighting, error checking, and integrated terminal.

GCC compiler: to compile the C code into an executable file. The compilation was performed with a command like gcc rle_compression.c -o rle_compression.

Windows PowerShell or Command Prompt: to run the compiled program, allowing direct user interaction.

#OUTPUT

<img width="787" height="247" alt="Image" src="https://github.com/user-attachments/assets/c264cb0d-1eec-4418-bfad-b28020818b3d" />
