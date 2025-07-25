% Facts
parent(john, mary).
parent(mary, ann).
parent(mary, peter).

% Rule
grandparent(X, Y) :- parent(X, Z), parent(Z, Y).
