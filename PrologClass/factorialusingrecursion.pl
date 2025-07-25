factorial(0,1). %base case
factorial(N,F):-N>0,N1 is N-1, %recursion step
    factorial(N1,F1), F is N*F1.
