% Facts
has_fur(dog).
has_fur(cat).
has_feathers(bird).
gives_birth_to_live_young(dog).
gives_birth_to_live_young(cat).
lays_eggs(bird).

% Rule
mammal(X) :- has_fur(X), gives_birth_to_live_young(X).
