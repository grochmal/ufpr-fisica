c
c  Operadores condicionais
c
      print*,'b='
      read*,b
      print*,'c='
      read*,c
      d=(b/2.)**2-c
      if(d < 0.) then    !Morzna wlorzyc wszyskow jedna linie
c  Jezeli nie potrzebujesz else if(d < 0.) then print*, 'a solucao nao existe)
        print*,'a solucao nao existe'
      else
        x1=-b/2.+sqrt(d)
        x2=-b/2.-sqrt(d)
        print*,x1,x2
      end if             !Ten jest wazny
      stop
      end

