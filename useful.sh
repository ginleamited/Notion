COMMANDES

// add text in a file and create that file
echo “texte a copier” > dossier

// compile a c file
cc -Wall -Wextra -Werror

// show folder subfolder
ls -la *

// cat all
cat */*

// move multiple folder in another folder
mv folder1 folder2 folder3 destination_folder

// see the root
pwd

// printf function
integer : %d, string : %s

// find ubuntu folder in windows
explorer.exe .

// add a file
touch

//help
man

VIM

// edit vim 
vi ~/.vimrc
//add in the file
syntax on
filetype plugin indent on
set number
set mouse=a
set ruler
highlight LineNr term=bold cterm=NONE ctermfg=DarkGrey ctermbg=NONE gui=NONE guifg=DarkGrey guibg=NONE
highlight Conditional ctermfg=161 cterm=bold
highlight Statement ctermfg=161 cterm=bold

// open makefile of vim
vim .zshrc

// change header in vim
export MAIL=jilin@student.s19.be

// add alias
alias gw='gcc -Wall -Wextra -Werror'
alias gg='gcc -Wall -Wextra -Werror -g'
alias ggg='gcc -Wall -Wextra -Werror -ggdb -fsanitize=address'

// PythonTutor
cc -Wall -Wextra -Werror -g filename.c
lldb a.out
b function name or main
run
gui
exit
s next step in the program
n next line in the program
tab + esc exit in the program

// search old cmd
control + r

// replace word in vim
%s/yourtext/replacetext/g (+c)

// to tab in vim
control + n

// to add Cclean
alias cclean="ncdu ~"

-ggdb -fsanitize=adreess


