# argc, argv

# Learning Objectives

* How to use argument pass to your program
* What are the two prototypes of 'main' that you knpw of, and in which case do you use one or the other.
* How to use '__attribute__((unused))' or '(void)' to compile functions with unused variables or parameters

# Tasks

## It ain't what they call you, it's what you answer to

Write a program that prints its name, followed by a new line.

* If you rename the program, it will print the new name without having to compile it again
* You should not remove the path before the name of the program

 **Solution:** [0-whatsmyname.c] (https://github.com/Gideon-Esq/alx-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c)

```
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# ./mynameis
./mynameis
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# mv mynameis mynewnameis
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# ./mynewnameis
./mynewnameis
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv#
```

## Silence is argument carried out by another means

Write a program that prints the number of arguments passed into it.

* Your program should print a number, followed by a new line

**Solution:** [1-args.c] (https//github.com/Gideon-Esq/alx-_low_level_programming/blob/master/0x0A-argc_argv/1-args.c)

```
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# ./nargs
0
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# ./nargs hello
1
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# ./nargs "hello, world"
1
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv# ./nargs hello, world
2
root@d5edd60d5514:~/alx-low_level_programming/0x0A-argc_argv#
```

