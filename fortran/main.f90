program PROGRAMA17C

  use SEGUNDO
  use portlib

  implicit none
  integer dos 
  integer,parameter :: R = 33
  integer :: N

  open ( 10, file = 'saida.txt' )

  call executa

  close (10)

  dos = system ( 'notepad saida.txt' )


contains


  subroutine executa

    call UM

    call DOIS

    call TRES

    call QUATRO

    N = 34

    write (10,*) 'rotina EXECUTA, PRINCIPAL, N =', N

  end subroutine executa


  subroutine QUATRO

    write (10,*) 'rotina QUATRO, PRINCIPAL, R =', R

    write (10,*) 'rotina QUATRO, PRINCIPAL, N =', N

    write (10,*) 'rotina QUATRO, PRINCIPAL, K =', K

    write (10,*) 'rotina QUATRO, PRINCIPAL, L =', L

  end subroutine QUATRO


end program PROGRAMA17C

