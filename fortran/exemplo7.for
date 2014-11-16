c
c  Funcao
c
      a=abc(1.)
      print*,a
      b=z(2.,-1.)
      print*,b
      c=abc(a)/z(2.,b)
      print*,c
      stop
      end
c
      function abc(x)
      abc=x*x+x+1.
      return        !Aby wrocic do programu
      end
c
      function z(x,y)
      z=cos(sqrt(x*x+y*y))
      return
      end

