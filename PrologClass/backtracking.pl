animal(leo).
animal(tweety).
animal(sweety).
animal(rambo).
has_feather(sweety).
has_feather(rambo).
tame(rambo).
bird(X):- animal(X), has_feather(X). %if any rule is false, then it will start from the strat
tame_bird(X):-bird(X),tame(X).
/* we can use (!)cut to prevent backtracking