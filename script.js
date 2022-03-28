
var jogada = true
var Escolha_j = ['']
var Rodada = 1
var combP1 = null
var combP2 = null
var combR1 = []
var combR2 = []

function opcao(pos, val){

  if(jogada == true){
    document.getElementById(pos).innerHTML = 'x'
    document.getElementById('vez').innerHTML = 'o'
    combR1.push(val)
    combP1 = combR1.sort()
    
    document.getElementById('rd').innerHTML = Rodada += 1
    
    if(combP1 == '1,2,3' || combP1 == '4,5,6' || combP1 == '7,8,9' ||
       combP1 == '1,4,7' || combP1 == '2,5,8' || combP1 == '3,6,9' ||
       combP1 == '1,5,9' || combP1 == '3,5,7'){
        document.getElementById('vez').innerHTML = 'x'
        document.getElementById('resultado').innerHTML = 'x ganhou'
        document.getElementById('rd').innerHTML = 1
        
      limpaC()
      
    }
    jogada = false
  
  
  } else {
    document.getElementById(pos).innerHTML = 'o'
    document.getElementById('vez').innerHTML = 'x'
    combR2.push(val)
    combP2 = combR2.sort()
  
    document.getElementById('rd').innerHTML = Rodada += 1
    
     
    if(combP2 == '1,2,3' || combP2 == '4,5,6' || combP2 == '7,8,9' ||
       combP2 == '1,4,7' || combP2 == '2,5,8' || combP2 == '3,6,9' ||
       combP2 == '1,5,9' || combP2 == '3,5,7'){
        document.getElementById('vez').innerHTML = 'x'
        document.getElementById('resultado').innerHTML = 'o ganhou'
        document.getElementById('rd').innerHTML = 1
        
      limpaC()
    }
    jogada = true

  }
}


function limpaC() {
    
      setTimeout(function() {
        for(var i = 1; i < 10; i++){
          document.getElementById('p' + i).innerHTML = ' '
        }
        
         jogada = true
      }, 1000);


  
}

   

