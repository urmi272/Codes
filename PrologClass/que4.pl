% Addition
add(X, Y, Z) :- Z is X + Y.

% Subtraction
subtract(X, Y, Z) :- Z is X - Y.

% Multiplication
multiply(X, Y, Z) :- Z is X * Y.

% Division
divide(X, Y, Z) :- Z is X / Y.

% Integer Division
integer_divide(X, Y, Z) :- Z is X // Y.

% Modulus
modulus(X, Y, Z) :- Z is X mod Y.

% Exponentiation
power(X, Y, Z) :- Z is X ** Y.

% Simple Input/Output
io_example :-
    write('Enter a number: '),
    read(Number),
    Result is Number * 2,
    write('Twice the number is '), write(Result), nl.
