c
c  Vetores e matrizes
c
      dimension a(4),b(3,2)   !Declaracia promien i calka
c  Morzna zmienic numeracie a(-4:4), a(-4), a(-3)... a(0) ... a(3), a(4)
c  Vetor a
      a(1)=2.
      a(2)=1.
      a(3)=0.5
      a(4)=0.25
c  Matriz b
      b(1,1)=2.*a(1)
      b(2,1)=1.
      b(3,1)=0.4*a(2)
      b(1,2)=0.34
      b(2,2)=0.24
      b(3,2)=0.41*a(3)
      c=a(4)+b(2,2)
      print*,c
      print*,a                !Tu mozna uzyc a bez numeru
      print*,b
      stop
      end

