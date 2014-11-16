c
c  Operacoes elementares
c
      a=2.
      b=3.
      c=a+b
      print*,'c=',c
      d=a-b
      write(*,*) 'd=',d
      e=a*b
      write(*,1),e            !Typ format1
    1 format('e=',F10.4)      !To jest format1
c  F(wszystkie cyfry, . kropka, cyfry po kropce)
      f=a/b
      open(10,file='out.dat')
      write(10,2),f           !Typ archiwum10, format2
    2 format('f=',E14.7)
c  E(wszyskie cyfry, siedem numerow znacznych)
      i=1                     !ijklmn sa numerami pelnymi zawsze
      j=2
      k=3
      la=4
      mb=la+1
      nc=6.6                  !Ignoruje .6
      print3,i,j,k,la,mb,nc   !Typ format3
    3 format(6i6)
c  '6' razy powtaza format 'i' pelnych '6' cyfr
      stop
      end

