<p align="center">
	<br>
	<img src="https://avatars3.githubusercontent.com/u/788676?s=200">
	<br>
	<br>
	<br>
	<b>cs50</b>: The CS50 Library for C ready to use with <a href="https://github.com/clibs/clib/">Clib</a>
	<br>
</p>

<p align="center">
	<a href="https://travis-ci.org/abranhe/os.c">
		<img src="https://img.shields.io/travis/abranhe/os.c.svg?logo=travis"/>
	</a>
	<a href="https://github.com/abranhe"><img src="https://abranhe.com/badge.svg"></a>
	<a href="https://cash.me/$abranhe"><img src="https://cdn.abranhe.com/badges/cash-me.svg"></a>
	<a href="https://patreon.com/abranhe"><img src="https://cdn.abranhe.com/badges/patreon.svg"/></a>
  <br>
  <br>
</p>

## Description

I was a [CS50](https://cs50.harvard.edu) student once, working with strings was easier back then while coding in C. So why not keep using it on future projects?

Well, I created this project to integrate it [Clib](https://github.com/clibs/clib) and to be easy to use as a dependency for future projects.

###### Keep in mind

If you are a CS50 student don't take this project as example to follow the style, make sure you read instead [the style guide for the C Programming Language](https://cs50.readthedocs.io/style/c/) from CS50.

## Installation

*Installing using [Clib](https://github.com/clibs/clib)*

```sh
$ clib install abranhe/cs50
```

For more installation options see the [official library][cs50] from the CS50 team.

## Usage

```
$ ./example
abranhe
hello, abranhe
```

###### example.c

```c
#include <stdio.h>
#include "cs50.h"

int main()
{
	string s = get_string();
	printf("hello, %s\n", s);
	return 0;
}
```

## API

#### `string`

*Type representing a C string. Aliased to* `char *`.

#### `void eprintf(const char *format, ...)`

*Prints an error message formatted like `printf()` to standard error, prefixing it with file and line number from which the function was called.*

###### Params:

- `format` - the `printf()`-like format string used to display the prompt
- `...` – values to be substituted into the format string a la `printf()`

#### `char get_char(const char *format, ...)`

*Prompts user for a line of text from standard input and returns the equivalent `char`; if text does not represent a single char, user is reprompted.*

###### Params:

- `format` - the `printf()`-like format string used to display the prompt
- `...` – values to be substituted into the format string a la `printf()`

###### Returns:

- the char equivalent to the line read from stdin, or `CHAR_MAX` on error

#### `double get_double(const char *format, ...)`

*Prompts user for a line of text from standard input and returns the equivalent `double`; if text does not represent a double or would cause overflow or underflow, user is reprompted.*

###### Params:

- `format` - the `printf()`-like format string used to display the prompt
- `...` – values to be substituted into the format string a la `printf()`

###### Returns:

- the double equivalent to the line read from stdin in [`DBL_MIN`, `DBL_MAX`), as precisely as possible, or `DBL_MAX` on error

#### `int get_int(const char *format, ...)`

*Prompts user for a line of text from standard input and returns the equivalent `int`; if text does not represent an int or would cause overflow, user is reprompted.*

###### Params:

- `format` - the `printf()`-like format string used to display the prompt
- `...` – values to be substituted into the format string a la `printf()`

###### Returns:

- the int equivalent to the line read from stdin in [`INT_MIN`, `INT_MAX`) or `INT_MAX` on error

#### `float get_float(const char *format, ...)`

*Prompts user for a line of text from standard input and returns the equivalent float; if text does not represent a `float` or would cause overflow or underflow, user is reprompted.*

###### Params:

- `format` - the `printf()`-like format string used to display the prompt
- `...` – values to be substituted into the format string a la `printf()`

###### Returns:

- the float equivalent to the line read from stdin in [`FLT_MIN`, `FLT_MAX`), as precisely as possible, or `FLT_MAX` on error

#### `long get_long(const char *format, ...)`

*Prompts user for a line of text from standard input and returns the equivalent float; if text does not represent a `long` or would cause overflow or underflow, user is reprompted.*

###### Params:

- `format` - the `printf()`-like format string used to display the prompt
- `...` – values to be substituted into the format string a la `printf()`

###### Returns:

- the float equivalent to the line read from stdin in [`LONG_MIN`, `LONG_MAX`), as precisely as possible, or `LONG_MAX` on error

#### `char *get_string(const char *format, ...)`

*Prompts user for a line of text from standard input and returns it as a string (char *), sans trailing line ending. Supports CR (`\r`), LF (`\n`), and CRLF (`\r\n`) as line endings. Stores string on heap, but library’s destructor frees memory on program’s exit.*

###### Params:

- `format` - the `printf()`-like format string used to display the prompt
- `...` – values to be substituted into the format string a la `printf()`

###### Returns:

- the read line as a string sans line endings, or `NULL` on `EOF`.

For more information read the documentation at [cs50.readthedocs.io/library/c](https://cs50.readthedocs.io/library/c/)
## Related

- [cs50][cs50]: Official CS50 Library for C

## License

The CS50 library is owned and managed by the Team behind CS50, [learn more](cs50).

<!-------------------- Links ------------------------>
[abranhe]: https://github.com/abranhe
[abranhe-img]: https://avatars3.githubusercontent.com/u/21347264?s=50
[license]: https://github.com/abranhe/os.c/blob/master/license
[example]: https://github.com/abranhe/os.c/blob/master/example.c
[cs50]: https://github.com/cs50/libcs50
[travis-badge]: https://img.shields.io/travis/abranhe/os.c.svg
[travis-status]: https://travis-ci.org/abranhe/os.c
[coverage-badge]: https://img.shields.io/coveralls/abranhe/os.c.svg
[coverage-status]: https://coveralls.io/r/abranhe/os.c?branch=master
