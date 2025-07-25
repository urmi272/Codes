% Define some facts about animals
animal(dog).
animal(cat).
animal(bird).
animal(fish).

% Define a rule to classify animals as either mammals or non-mammals
mammal(X) :- animal(X), has_fur(X), !.
mammal(X) :- animal(X), gives_birth_to_live_young(X).

% Define some rules to check characteristics of animals
has_fur(dog).
has_fur(cat).
has_feathers(bird).
gives_birth_to_live_young(dog).
gives_birth_to_live_young(cat).
lays_eggs(bird).

% Define a rule to check if an animal is a fish
fish(X) :- animal(X), \+ mammal(X).
