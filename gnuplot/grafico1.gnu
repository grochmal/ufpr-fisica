set term postscript eps color
set output 'grafico1.eps'
set grid
set title 'Exemplo de Dilatacao Linear'
set xlabel 'Temperatura (graus C)'
set ylabel 'Comprimento (m)'
plot [0:600][0.9:1.1](1*0.000011*x +1) title 'Comprimento do Bastao' with line 5