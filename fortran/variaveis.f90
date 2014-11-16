module VARIAVEIS

! inclusao de modulos do Fortran90

USE PORTLIB ! para usar o comando SYSTEM

! -----------------------------------------------

! definicao das variaveis globais do programa

implicit none

integer   :: n               ! numero de elementos dos vetores
integer   :: i               ! numero do elemento dos vetores
integer   :: tipo_de_calculo ! a realizar
integer   :: dos             ! acessa prompt dos

integer   :: local_maximo(1) ! posicao do valor maximo do vetor b
integer   :: local_minimo(1) ! posicao do valor minimo do vetor b

real*8    :: soma            ! soma dos valores do vetor b
real*8    :: maximo          ! valor maximo do vetor b
real*8    :: minimo          ! valor minimo do vetor b

! vetores com dimensao aberta e alocaveis
real*8,dimension(:),allocatable :: a, b

end module VARIAVEIS

