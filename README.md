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
> - `-0.` and minimum field width with all conversions
> - Manage all the following flags: `# +`(yes, one of them is a space)<i>

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
