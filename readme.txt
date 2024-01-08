Readm Me File
Developing a Compiler Parser from scratch



Progress :
1) Set up file_opener.cpp : Opening a C++ file and copying its contents
Created: file_opener.cpp (implemented), scaner.cpp and scanner.h
Test:
g++ -o file_opener file_opener.cpp scanner.cpp
./file_opener testfile.txt

2) Set up tokens
Created token.h

Tokens Handled:
var             - int datatype
fun             - any function name
semicolon       - ;
identifier      - any variable name
bool            - bool datatype
string          - string datatype
hyphen          - "
stringvar       - "contents inside"
bang            - !
logical_and     - &&
less_equal      - <=
greater_equal   - >=
star_ass        - *=
slash_ass       - /=
sub_ass         - -=
add_ass         - +=
while           - while keyword
left_brace      - {
right_brace     - }
greater         - >
lesser          - <
ass_or          - |=
ass_and         - &=
shift_right     - >>
shift_left      - <<
if              - if keyword
equal_equal     - ==
left_paren      - (
right_paren     - )
number          - any number
equal           - =
break           - break keyword
continue        - continue keyword
true            - true keyword
false           - false keyword
sub_self        - --
add_self        - ++
for             - for keyword
bang_equal      - !=
inverse         - ~
tenary          - ?
colon           - :
switch          - switch keyword
case            - case keyword
default         - default keyword
funcall         - call to a function, eg: func(int s)
comma           - ,
void            - void keyword
endl            - endl keyword
cout            - cout keyword
cin             - cin keyword
return          - return keyword
eof             - End of File - '/0'
