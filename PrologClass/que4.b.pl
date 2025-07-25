% Define a compound goal
compound_goal(X, Y) :-
    even(X),        % Check if X is even
    positive(Y),    % Check if Y is positive
    X > Y.          % Check if X is greater than Y

% Define even predicate
even(X) :- 0 is X mod 2.

% Define positive predicate
positive(X) :- X > 0.
