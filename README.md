<h2 align="center">
	:anger: <i>ft_printf : A new headache was born.</i>

---

</p>
<p align="center">
<img src="https://64.media.tumblr.com/tumblr_m2rdijRXvp1qksjbgo1_500.gifv" width="500">
<p/>

---

</h1>

<h2 align="center">
	:trophy: <i>1337Cursus project :</i>
</h2>

<p align=center>
	The versatility of The <b>printf</b> function in C represents a great exercise in programming. This project is of MODERATE difficulty. 
	It will enable you to discover variadic functions in C. The key to a successful ft_printf is a well-structured and good extensible code.

---

</p>
<p align="center">
<img src="https://github.com/ablaamim/ft_printf/blob/main/SRC/ft_printfm.png">
</p>

---

<p align="center">
:no_entry_sign: <i><b> ft_printf("%s\n", "When you light a candle, you also cast a shadow."); <b></i>
<p align="center">
:no_entry_sign: <i><b> ft_printf("%s\n", "What hurts you, blesses you. Darkness is your candle."); <b></i>
<p align="center">
:no_entry_sign: <i><b> ft_printf("%s\n", "Into the darkness they go, the wise and the lovely."); <b></i>

---

<h3 align=center>
:dart: Mandatory :
</h3>

---

> <i>A small description of the required conversions :

| %  | Type |
|--- |--- |
| %c | Print a single character. |
| %s | Print a string of characters.	|
| %p | The void * pointer argument is printed in hexadecimal. |
| %d | Print a decimal (base 10) number. |
| %i | Print an integer in base 10. |
| %u | Print an unsigned decimal (base 10) number. |
| %x | Print a number in hexadecimal (base 16, lowercase).|
| %X | Hex integer (uppercase). |
| %% | Just the %. |				|

---

<h3 align=center>
:dart: Bonus :
</h3>

> <i>Manage any combination of the following flags : 
> - `-0.` and minimum field width with all conversions.
> - Manage all the following flags: `# +`(yes, one of them is a space)<i>.

| :triangular_flag_on_post: Flags :triangular_flag_on_post: | :question: |
|--- |--- |
| Num | (Number between % and the identifier) Minimum field width. |
| **-** | Left justify. |
| **0** | Field padded with 0's instead of blanks. |
| **.** |  Precision. |
| **+** | Add a plus sign ('+') in the front of positive numeric conversions. |
| **' '** | Add a single space (' ') in the front of positive numeric conversions. |
| **#** | Add the corresponding prefix in front of x, X and o conversions. |

This is how the embedded format tags are aligned :

| Holder key  | Prefix and justification flags *| Minimum Width *| Precision *	| Conversion 	|
|--- |--- |--- |--- |--- |
|`%`  | `-` , `0` , `+` ,  ... | `10`, `5` , ... | `.`, `.10`, `.5`, ... | `c`, `d`, `i`, `s`, ... |  

**For %d and %i, the precision is the minimum number of digits to print.**

**For %s, the precision is the maximum field width.**

:small_red_triangle_down: To be aware of :

* flag '0' is ignored when flag '-' is present.
* flag '0' is ignored when flag '.' is present (%d e %i).
* flag '0' results in undefined behavior with '%c', '%s' and '%p'.
* flag '.' results in undefined behavior with '%c' and '%p'.

---

</p>
<p align="center">
<img src="https://c.tenor.com/muf5U1UEp7MAAAAC/mickey-mouse-match.gif" width="500">
<p/>

---

:construction: Project Organization :

```
.
├── includes/
├── libft/
├── srcs/
├── Makefile
```

---

Step :one: :

- I created a format structure inside my headerfile and also made some basic util typdefs :

```c
typedef	struct s_fmt
{
	const char	*format;
	va_list		ap;
	size_t		i;
	size_t		counter;
}	t_fmt;
```

- Also a placeholder structure to stock all the informations about every placeholder that printf manages :

```c
typedef	struct s_holder
{
	int	left_justify;
	char	*prefix;
	char	padding;
	int	width;
	int	precision;
	char	conversion;
	char	*argument;
	size_t	counter;	
}	t_holder;
```

Step :two: : 

I created mandatory functions in my ft_printf.c file :

> int	ft_printf(const char	*format, ...); 

> int	ft_vprintf(const char	*format, va_list ap);

DESCRIPTION :

The  functions in the printf() family produce output according to a format 
as described below.  The functions printf() and vprintf() write output to 
stdout, the standard output stream. 

PARAMETERS :

#1. The string format in which the output will be printed.
#2. ... The variadic arguments passed to the format string's placeholders. In 
the vprintf() function, the variadic argument are already passed as a 
va_list type.

RETURN VALUES :

Upon successful return, these functions return the number of characters printed.

---

Step :three: :

I created functions responsible of initilizing both of my structures inside my ft_initializer.c file:

> t_fmt		*ft_initialize_fmt(const char *format, va_list ap);

> t_holder	*ft_initialize_holder(void);

FT_INITIALIZE_FMT!
--------------------
DESCRIPTION :

Initializes the format struct with the string given and the va_list variable,
setting the initial values of both variables i and counter up to 0.

PARAMETERS :

#1. The string format in which the output will be printed.
#2. The variadic arguments list

RETURN VALUES :

The new, inilialized variable struct format.
	
FT_INITIALIZE_HOLDER!
--------------------
DESCRIPTION :

Initialize the holder struct that will retain the information of the 
placeholders flags and conversions.

PARAMETERS :

NONE.

RETURN VALUES :

The new, inilialized variable struct holder.

---