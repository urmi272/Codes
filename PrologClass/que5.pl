% Base case: Sum of an empty list is 0
sum_list([], 0).

% Recursive case: Sum of a non-empty list is the head of the list plus the sum of the rest of the list
sum_list([Head|Tail], Sum) :-
    sum_list(Tail, SumTail),
    Sum is Head + SumTail.
