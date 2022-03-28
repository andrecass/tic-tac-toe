<script>
    //Sem tempo limite 
    // TASKS
    //Escolhas do jogador1
    
    // 1 -  pegar a posição de cada escolha e receber o seu valor
    // 2 -  somar os valores 
    // 3 -  verificar se a soma dos valores batem de acordo com valor das possiveis combinações 
    // 8 -  Combinações Possiveis
    
    //     Y
    //   7 4 5 6 8
    //   1 A B C 
    // X 2 D E F 
    //   3 G H I 
    
    //Primeira IDEA!!!   

    //--------------------- -     
    //       Y                   
    //   2   2   9  =   13    
    // X 1   9   2  =   12    
    //   7   8   7  =   15    
    //   11  19  18          
    //-------------------- -  
    
    //[3, 8, 14, 12, 19, 8, 14]
    
    
    // Y - P1 = G H I VALOR = 6  | P2 = D E F VALOR = 14  | P3 = A B C VALOR = 24
    // J - P4 = A D G VALOR = 12 | P5 = B E H VALOR = 15  | P6 = C F I VALOR = 18
    // K - P7 - I E A VALOR = 15
    // Z - P8 - C E G VALOR = 15
    
    //Px + Px + Px = Vx
    //px + px não pode ser == combinação
    
    //                                    Bugs                                             //
    // A soma de duas posiçoes resulta em uma combinação
    // uma posição resulta em uma combinação
      
    //------------------------------------------------------------------------------------//
    
   
    
    
    //------------------------------------------------------------------------------------//

    //Segunda  IDEA!!!    QI -1000 KKK  EXODIA DOS BURROS xD
    
    //     Y
    //   7 4 5 6 8
    //   1 5   5   5  = 15
    // X 2 5   5   5  = 15
    //   3 5   5   5  = 15
    //     15  15  15
   
    //[15]
    
    
    // Y - P1 = G H I VALOR = 15  | P2 = D E F VALOR = 15  | P3 = A B C VALOR = 15
    // J - P4 = A D G VALOR = 15  | P5 = B E H VALOR = 15  | P6 = C F I VALOR = 15
    // K - P7 - I E A VALOR = 15
    // Z - P8 - C E G VALOR = 15
    
   
    
    //Px + Px + Px = Vx
    //------------------------------------------------------------------------------------//

    //                                    Bugs                                             //
    
    // maquina escolhe a mesma jogada do jogador 
    // continua sendo somado valor a combinação mesmo apos de ter atingido o valor da mesma
    //
    //------------------------------------------------------------------------------------//
    
    var Escolha_jogador = null
    var Escolha_maquina = null
    var posJ = null
    var posM = null
    var EscolhaM1   = ['z1','z2','z3',
                       'z4','z5','z6',
                       'z7','z8','z9']

    var EscolhaM2 = ' '
    var jogadJ = []
    var list2 = []

    function opcao(pos, valor) {
      
      
        //                                    Escolha da Jogador                           //

        
          posJ += pos 
          
          if(pos === 'z1'){
            document.getElementById('p1').innerHTML = 'x';
            Escolha_jogador += valor
            
            
          } else if (pos === 'z2'){
            document.getElementById('p2').innerHTML = 'x';
            Escolha_jogador += valor
             

          } else if (pos === 'z3'){
            document.getElementById('p3').innerHTML = 'x';
            Escolha_jogador += valor
            

          } else if (pos === 'z4'){
            document.getElementById('p4').innerHTML = 'x';
            Escolha_jogador += valor
            
          
          } else if (pos === 'z5'){
            document.getElementById('p5').innerHTML = 'x';
            Escolha_jogador += valor
             

          } else if (pos === 'z6'){
            document.getElementById('p6').innerHTML = 'x';
            Escolha_jogador += valor
            
          
          } else if (pos === 'z7'){
            document.getElementById('p7').innerHTML = 'x';
            Escolha_jogador += valor
             

          } else if (pos === 'z8'){
            document.getElementById('p8').innerHTML = 'x';
            Escolha_jogador += valor
             
          
          } else if (pos === 'z9'){
            document.getElementById('p9').innerHTML = 'x';
            Escolha_jogador += valor
            
          } 

          
          
          var combinaC = 15
        //-----------------------------------------------------------------------------------//
         
        
        
        
        //A escolha do jogador é deletada da lista da maquina
        var EscolhaM1   = ['z1','z2','z3',
                           'z4','z5','z6',
                           'z7','z8','z9']
        var random = Math.floor(Math.random() * EscolhaM1.length) 
        var EscRm  = EscolhaM1[random]  
        //-----------------------------------------------------------------------------------//  
          
        
              
              if(EscRm === 'z1'){
                
                document.getElementById('p1').innerHTML = 'o';
                Escolha_maquina += 5
                
              } else if (EscRm === 'z2'){
                
                document.getElementById('p2').innerHTML = 'o';
                Escolha_maquina += 5
              
              } else if (EscRm === 'z3'){
                
                document.getElementById('p3').innerHTML = 'o';
                Escolha_maquinar += 5
              } else if (EscRm === 'z4'){
                
                document.getElementById('p4').innerHTML = 'o';
                Escolha_maquina +=  5
              
              } else if (EscRm === 'z5'){
                
                document.getElementById('p5').innerHTML = 'o';
                Escolha_maquina += 5
              } else if (EscRm === 'z6'){
                
                document.getElementById('p6').innerHTML = 'o';
                Escolha_maquina += 5
              
              } else if (EscRm === 'z7'){
                
                document.getElementById('p7').innerHTML = 'o';
                Escolha_maquina += 5
              } else if (EscRm === 'z8'){
                
                document.getElementById('p8').innerHTML = 'o';
                Escolha_maquina += 5
              
              } else if (EscRm === 'z9'){
                
                document.getElementById('p9').innerHTML = 'o';
                Escolha_maquina += 5
              } 
        
       
              
        
        
         
     
           
        
        
        //------------------------------------------------------------------------------------// 
       
          
        //Se a soma das Px for igual a Cx então escolha do jogador recebe espaço vazio ' '

        if(Escolha_jogador >= combinaC || Escolha_maquinaor >= combinaC){
              document.getElementById('resultado').innerHTML = 'Combinação  feita' 
              
              setTimeout(function() {
                document.getElementById('p1').innerHTML = ' '
                document.getElementById('p2').innerHTML = ' '
                document.getElementById('p3').innerHTML = ' ' 
                document.getElementById('p4').innerHTML = ' ' 
                document.getElementById('p5').innerHTML = ' '   
                document.getElementById('p6').innerHTML = ' '  
                document.getElementById('p7').innerHTML = ' ' 
                document.getElementById('p8').innerHTML = ' '  
                document.getElementById('p9').innerHTML = ' ' 
                Escolha_jogador = 0
                Escolha_maquinaor = 0
              }, 1000);
              
            } else if ( Escolha_jogador == 20 || Escolha_maquinaor == 20 ){
              document.getElementById('resultado').innerHTML = 'Combinação  feita' 
              
              setTimeout(function() {
                document.getElementById('p1').innerHTML = ' '
                document.getElementById('p2').innerHTML = ' '
                document.getElementById('p3').innerHTML = ' ' 
                document.getElementById('p4').innerHTML = ' ' 
                document.getElementById('p5').innerHTML = ' '   
                document.getElementById('p6').innerHTML = ' '  
                document.getElementById('p7').innerHTML = ' ' 
                document.getElementById('p8').innerHTML = ' '  
                document.getElementById('p9').innerHTML = ' ' 
                Escolha_jogador = 0
                Escolha_maquinaor = 0
              }, 1000);
              
            }
        
          
        //------------------------------------------------------------------------------------// 
    
     
    }

    function reset(){
                document.getElementById('p1').innerHTML = ' '
                document.getElementById('p2').innerHTML = ' '
                document.getElementById('p3').innerHTML = ' ' 
                document.getElementById('p4').innerHTML = ' ' 
                document.getElementById('p5').innerHTML = ' '   
                document.getElementById('p6').innerHTML = ' '  
                document.getElementById('p7').innerHTML = ' ' 
                document.getElementById('p8').innerHTML = ' '  
                document.getElementById('p9').innerHTML = ' ' 

    }

   
 
  </script>
