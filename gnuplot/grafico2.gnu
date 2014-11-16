set term postscript eps color
set output 'grafico2.eps'
set grid
set title 'Exemplo de Dilatacao Volumetrica'
set xlabel 'Temperatura (graus C)'
set ylabel 'Volume (m cubicos)'
plot [0:600][0.35:0.45](0.392699081*3*0.000011*x+0.392699081) title 'Volume do Bastao' with line 2