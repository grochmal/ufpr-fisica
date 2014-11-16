set term postscript eps color
set output 'teste3A.eps'
set grid
set title 'Michal Jan Grochmal'
plot [-3:3][-2:5]sin(x) title 'sin(x)' with point 6, exp(x) title 'exp(x)' with line 9