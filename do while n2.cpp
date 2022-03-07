#include <conio.h>
#include <stdio.h>

int main()
{
    int cont=1,nivel,opcion,x,ba=0,bas=0,basi=0,bac=0, bach=0, bachi=0;
	float prom;
    
   

printf("ELIJA UNA OPCION \n");
printf("\n 1. SISTEMA\n");
printf(" 2. IRSE\n");
scanf("%d", &opcion);

	
if(opcion==1)
{

			   
				 		   
				   for(x=1;x<=6;x++)
				   {
				
					
				printf( "\n   promedio:\n");
				scanf("%f", &prom);
				
			
        		
        		printf( "\n    nivel :\n 3. BASICA\n 4. BACHILLERATO\n");
        		scanf("%d", &nivel);	
				
        		
        		  cont=cont+1;
        		  
        		  
        		  
        		  
        		  if(prom>=9 and prom<=10 and nivel==3) {
				  		printf("-");
				  		ba=ba+1;
					  }else{
					   if(prom>=9 and prom<=10 and nivel==4) {
				  		bac=bac+1;
				  	 }else{
					   if(prom>=7.5 and prom<9 and nivel==3){
					  		bas=bas+1;
						  }else{
						  	if(prom>=7.5 and prom<9 and nivel==4){
					  		bach=bach+1;
						  }else{
						   	  if(prom<7.5 and prom>=6 and nivel==3){
						  	  	basi=basi+1;
								}else{
									if(prom<7.5 and prom>=6 and nivel==4){
						  	  	bachi=bachi+1;
						  	  }else{									
								printf("Sin beca");	
								}
								}
							}
							}
						
							}
						  }
					  
					   }
					   printf("\n  $200 de BASICA: %d\n",ba);
					   printf("\n $200 de BACHILLERATO: %d\n",bac);
                       printf("\n $100 de BASICA: %d\n",bas);
                        printf("\n  $100 de BACHILLERATO: %d\n",bach);
                       printf("\n  $50 de BASICA: %d\n",basi);
                       printf("\n  de $50 de BACHILLERATO: %d\n",bachi);
                       
                       
                    
                       
					  	
}	else{
	printf("\n  GRACIAS  \n");
}

     return 0;   
 

}

