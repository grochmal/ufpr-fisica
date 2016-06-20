set term postscript eps color
set output 'fig.eps'
set xtics -3,0.5,3
set ytics -1.5,1
set grid
set title 'Exemplo 1'
set xlabel 'eixo X'
set ylabel 'eixo Y'
set key 2,-0.5
plot [-3:3] [-1.5:2] sin(x) t'Senoide' w l 3,exp(x) t'Expoente' w p 6,'dados' t'Dados' w p 8