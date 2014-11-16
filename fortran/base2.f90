module SEGUNDO

  USE PRIMEIRO

  implicit none

  integer,parameter,private :: R = 22

  integer,private :: N


contains


  subroutine DOIS

    write (10,*) 'rotina DOIS, modulo SEGUNDO, R =', R

    write (10,*) 'rotina DOIS, modulo SEGUNDO, N =', N

    write (10,*) 'rotina DOIS, modulo SEGUNDO, K =', K

    write (10,*) 'rotina DOIS, modulo SEGUNDO, L =', L

  end subroutine DOIS


  subroutine TRES

    N = 23

    write (10,*) 'rotina TRES, modulo SEGUNDO, N =', N

  end subroutine TRES


end module SEGUNDO

