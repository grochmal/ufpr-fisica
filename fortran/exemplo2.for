c
c  Funcoes elementares
c
      print*,'x='
      read(*,*) x
      a=sin(x)
      b=cos(x)
      c=exp(x)
      d=alog(x)          !Uzywa alog bo l jest pelna liczba
      print 2,x,a,b,c,d  !Typ format2 w nastepnej lini
    2 format('x=',e14.7/'sin',e14.7/'cos',e14.7/'exp',e14.7/'ln',e14.7)
      stop
      end

