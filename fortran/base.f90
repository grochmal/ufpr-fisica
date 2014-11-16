module PRIMEIRO


  implicit none

  integer,parameter,private :: R = 11

  integer,private :: N

  integer,public  :: K

  integer :: L


contains


  subroutine UM

    N = 12

    K = 13

    L = 14

    write (10,*) 'rotina UM, modulo PRIMEIRO, R =', R

    write (10,*) 'rotina UM, modulo PRIMEIRO, N =', N

    write (10,*) 'rotina UM, modulo PRIMEIRO, K =', K

    write (10,*) 'rotina UM, modulo PRIMEIRO, L =', L

  end subroutine UM


end module PRIMEIRO

