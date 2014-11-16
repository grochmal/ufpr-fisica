module DADOS

use VARIAVEIS

implicit none

contains

  subroutine le_dados

  ! *** leitura dos dados ***

  ! ve o conteudo do arquivo "dados.txt" com o programa NOTEPAD
  dos = system( 'notepad dados.txt' )

  open(10,file='dados.txt')  ! abre o arquivo "dados.txt"

  read(10,*) tipo_de_calculo
  read(10,*) n

  ! aloca memoria para os vetores a, b
  allocate ( a(n), b(n) )

  read(10,*) (a(i),i=1,n)

  close(10)

  end subroutine le_dados

end module dados

