c
c  Subrotinas
c
      dimension a(10)         !Morzna uzyc common a(10)
      call abc(r,s,2.,3.)     !Wyjmuje z 2. i 3. wklada w r i s
      print*,r,s
      do i=1,10
        a(i)=10.
      end do
      call def(x,y,a)         !Na common c(10) tu bedzie def(x,y)
      print*,x,y
      stop
      end
c
      subroutine abc(x,y,z,a)
      x=2.*z+a
      y=sin(x)/a
      return
      end
c
      subroutine def(a,b,c)   !Na common c(10) tu bedzie def(a,b)
c  Morze byc linia ale musi byc powiedziana wielkosc
      dimension c(10)         !Tu tez common c(10)
c  Jak pointer common c bedzie uzywal te sama pamiec
      a=0.
      do i=1,10
        a=a+c(i)              !Niewiadome (a) sa inne w obu subroutine
      end do
      a=sqrt(a)
      b=c(2)/c(1)
      return
      end

