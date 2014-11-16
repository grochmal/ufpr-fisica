module CALCULOS

use DADOS

implicit none

contains

  subroutine opera_vetores

  ! *** realiza calculos conforme tipo_de_calculo escolhido nos dados

  select case ( tipo_de_calculo)

    case ( 1 )
      b = a + 1

    case ( 2 )
      b = a * 2

    case ( 3 )
      b = a ** 2

    case default
      b = 1

  end select

  ! -----------------------------------------------

  ! *** emprega comandos usados com vetores e matrizes ***

  maximo = maxval(b) ! valor maximo do array

  local_maximo = maxloc(b) ! posicao do valor maximo do vetor b

  minimo = minval(b) ! valor minimo do array

  local_minimo = minloc(b) ! posicao do valor manimo do vetor b

  soma = sum(b)

  ! -----------------------------------------------

  end subroutine opera_vetores

end module CALCULOS

