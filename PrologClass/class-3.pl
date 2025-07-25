do:-p(N),q(N),write(N),!,r(N). %to cut the backtracing we use !
p(1).
p(2).
p(3).
p(4).
q(2).
q(3).
q(4).
r(3).
%% ?- do.
%%2
%%false.




% do:-p(N),q(N),write(N),r(N).
% p(1).
% p(2).
% p(3).
% p(4).
% q(2).
% q(3).
% q(4).
% r(5).
%% ?- do.
%%234
%%false.