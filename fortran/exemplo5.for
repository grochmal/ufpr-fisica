c
c  Loops
c
      dimension a(10)
      do i=1,10,1    !i od 1, do 10, dodajac 1 (morze byc negatywny)
        a(i)=2.*i
      end do  
      s=0.   
      do i=1,5       !od 1, do 5, dodajac 1 (default)
        s=s+a(i)
      end do
      print*,s
      print*,(a(i),i=1,5)     !pisze od a(1) do a(5)
      print*,(a(i),i=6,10)    !pisze od a(1) do a(5)
      stop
      end

