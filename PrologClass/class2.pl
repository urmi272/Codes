likes(dan,sally).
likes(sally,dan).
likes(josh,brittney).
friendship(X,Y):-likes(X,Y),likes(Y,X).
friendship(X,Y):-likes(X,Y);likes(Y,X).
