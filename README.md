# Text of PI
Converting PI to text.

## Compiling
`gcc convert.c -o convert`

## Converting
Using the `convert` executable you can pass a `.txt` file containing the digits of PI and a output `.txt` file as well.

`./convert <pi file.txt> <pi text.txt>`

You can find a pi file [here](https://www.angio.net/pi/digits.html).

More digits of pi is more patterns to see.

## Searching

There is a `search` lua script for searching patterns in this converted text.

`lua search.lua <pi text.txt> <pattern>`

## Warning

Those patterns doesn't represents anything, this is just a interessant project. Every pattern generated will be just a coincidence.
