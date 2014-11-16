set term postscript eps color
set output 'teste3.eps'
set output 'teste3.ps'
set grid
set title 'Exemplo'
set xlabel 'Temperatura'
set ylabel 'Comprimento'
plot [0:10][0:2](1*0.11*x +1) title 'Comprimento do Bastao' with line 6, (9*0.11*x +1) title 'Comprimento do Bastao' with line 7