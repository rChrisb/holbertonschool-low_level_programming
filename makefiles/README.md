
<img width = 65% src = "https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/273/giphy-2.gif" />

# <p align=center> `C - Makefiles`</p>
## <p align=center> `Project's obejectives` </p>
Be able to explain:
- What are make, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

## <p align=center>`Tasks`</p>
### <p align=center>`0. make -f 0-Makefile`</p>
Create your first Makefile.

Requirements:

- name of the executable: school
- rules: all
  - The `all` rule builds your executable
- variables: none
-----------------------------------------------
### <p align=center>`1. make -f 1-Makefile`</p>
Requirements:

- name of the executable: school
- rules: all
  - The `all` rule builds your executable
- variables: CC, SRC
  - CC: the compiler to be used
  - SRC: the .c files
-----------------------------------------------
### <p align=center>`2. make -f 2-Makefile`</p>
Create your first useful Makefile.

Requirements:

- name of the executable: school
- rules: all
  - The `all` rule builds your executable
- variables: CC, SRC, OBJ, NAME
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
- The all rule should recompile only the updated source files
- You are not allowed to have a list of all the .o files
-----------------------------------------------
### <p align=center>`3. make -f 3-Makefile`</p>
Requirements:

- name of the executable: school
- rules: all, clean, oclean, fclean, re
  - all: builds your executable
  - clean: deletes all Emacs and Vim temporary files along with the executable
  - oclean: deletes the object files
  - fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
  - re: forces recompilation of all source files
- variables: CC, SRC, OBJ, NAME, RM
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
  - RM: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the .o files
-----------------------------------------------
### <p align=center>`4. A complete Makefile`</p>

-----------------------------------------------
## <p align=right>`Score: 100/100`</p>
