module RESULTADOS

use CALCULOS

implicit none

contains

  subroutine escreve

  ! *** escreve o vetor b num arquivo ***

  open(20,file='saida.txt')  ! abre o arquivo "saida.txt"

  do i = 1, n
    write(20,30) i, b(i)
  end do

  write(20,31) maximo, local_maximo, minimo, local_minimo, soma

  close(20)

  30 format ( i4, 5x, 1pe10.3 )
  31 format (/,'Valor maximo = ',1pe12.3,/, &
               'Posicao      = ',i4,//,     &
               'Valor minimo = ',1pe12.3,/, &
               'Posicao      = ',i4,//,     &
               'Soma         = ',1pe12.3)

  ! -----------------------------------------------

  ! *** le o conteudo do arquivo "saida.txt" ***

  dos = system( 'notepad saida.txt' )

  ! -----------------------------------------------

  end subroutine escreve

end module RESULTADOS

