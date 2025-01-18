COMMANDES

//! SHELL

//* add text in a file and create that file
echo “texte a copier” > dossier

//* compile a c file
cc -Wall -Wextra -Werror

//* show folder subfolder
ls -la *

//* cat all
cat '*/*' 

//* move multiple folder in another folder
mv folder1 folder2 folder3 destination_folder

//* see the root
pwd

//* printf function
integer : %d, string : %s

//* find ubuntu folder in windows
explorer.exe .

//* add a file
touch

//* add a folder
mkdir

//* help
man

//* '' issue
setxkbmap -query
setxkbmap us

//* search old cmd
control + r

//* replace word in vim
%s/yourtext/replacetext/g (+c)

//* to tab in vim
control + n

//* to add Cclean
alias cclean="ncdu ~"

//! VIM

//* edit vim 
vi ~/.vimrc

//* add in the file
syntax on
filetype plugin indent on
set number
set mouse=a
set ruler
highlight LineNr term=bold cterm=NONE ctermfg=DarkGrey ctermbg=NONE gui=NONE guifg=DarkGrey guibg=NONE
highlight Conditional ctermfg=161 cterm=bold
highlight Statement ctermfg=161 cterm=bold

//* open makefile of vim
vim .zshrc

//* change header in vim
export MAIL=jilin@student.s19.be

//* add alias
alias gw='gcc -Wall -Wextra -Werror'
alias gg='gcc -Wall -Wextra -Werror -g'
alias ggg='gcc -Wall -Wextra -Werror -ggdb -fsanitize=address'

//! Sanitizers

//* Adress Sanitizer (Asan)
// Use-after-free
// Buffer overflows
// Memory leaks
gcc -fsanitize=address -g -o program program.c
./program
//* Undefined Behavior Sanitizer (UBSan)
// Integer overflows
// Out-of-bounds shifts
// Use of uninitialized variables
gcc -fsanitize=undefined -g -o program program.c
./program
//* Memory Sanitizer (MSan)
// Use of uninitialized memory
clang -fsanitize=memory -g -o program program.c
./program
//* Thread Sanitizer (TSan)
// Data races in multithreading
gcc -fsanitize=thread -g -o program program.c -pthread
./program
//* Leak Sanitizer (LSan)
// Memory leaks
gcc -fsanitize=leak -g -o program program.c
./program
//* Combining Sanitizers
// Note: Some sanitizers (e.g., address and thread) are incompatible.
gcc -fsanitize=address,undefined -g -o program program.c
./program

//! VALGRIND

//* Normal report
gcc -g -o my_program my_program.c
valgrind ./my_program
//* Full report
gcc -g -o my_program my_program.c
valgrind --leak-check=full ./my_program
//* Uninitialized Memory
gcc -g -o uninit uninit.c
valgrind ./uninit
//* Valgrind Options
valgrind ./program									Basic memory check
valgrind --leak-check=full ./program				Detect memory leaks
valgrind --track-origins=yes ./program				Show where uninitialized memory was allocated
valgrind --show-leak-kinds=all ./program			Show all types of memory leaks
valgrind --log-file=valgrind_output.txt ./program	Save output to a file

//! Comparison

Feature							Valgrind		AddressSanitizer
Detects memory leaks			✅ Yes			✅ Yes
Detects invalid memory access	✅ Yes			✅ Yes
Detects uninitialized variables	✅ Yes			❌ No
Performance overhead			High			 Low
Works on optimized code			❌ No			✅ Yes
// Use AddressSanitizer for performance, but Valgrind for more detailed analysis.

//! PythonTutor

cc -Wall -Wextra -Werror -g filename.c
lldb a.out
b function name or main
run
gui
exit
s next step in the program
n next line in the program
tab + esc exit in the program