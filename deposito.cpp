

#include <iostream>
using namespace std; 

int main(){

 /*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Código feito por João.
Codigo feito semelhante a um sistema de loja.
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
 */
  

    
  int idadedoCliente, contadorProduto, consultarEstoque;
  char nomedoCliente[1024];
  int refazerCadastro;
  int produtosdaVenda[5] = {1,23,5,25,30};
  bool conferirstock;
  int alterarnome_idade;
  int desconto_idade[2] = {10,50};
  bool refazercompra;
  char produtosComprados[5][100] = {"Tijolo","Cimento","Areia","Madeira","Ferro"};
  int estoquetrue[5] = {1000,45,15,4,5};

  

  cout << "\n";
  cout << " XXXX 𝑪𝑨𝑫𝑨𝑺𝑻𝑹𝑶 𝑶𝑭𝑰𝑪𝑰𝑨𝑳 XXXX \n";
  cout << "\n";
     
  int produto1=0,produto2=0,produto3=0,produto4=0,produto5=0;

  //Cadastro do cliente.
    
  cout << "\nPOR GENTILEZA DIGITE SEU NOME >>  ";
  cin >> nomedoCliente;           
  cout << "\nDIGITE SUA IDADE >> ";
  cin >> idadedoCliente;
  
  while (idadedoCliente <= 0){ 
    
    cout << endl << nomedoCliente << " DIGITE UMA IDADE VÁLIDA >>  ";
    cin >> idadedoCliente;
  }
         
  cout << "\n\nVOCÊ DESEJA IR PARA O MENU DE ALTERAÇÃO DE CADASTRO? 1 - SIM | 0 - NÃO.\n";
  cin >> refazerCadastro;
         
  while (refazerCadastro > 1 || refazerCadastro < 0){
    cout << "O NUMERO DIGITADO É INVÁLIDO OU DIGITE SOMENTE 1 - SIM | 0 - NÃO.\n";
    cin >> refazerCadastro;   
  }
    
  if(refazerCadastro==1) {
            
do{   
         cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-";
         cout << "\nOPÇÕES DE EDIÇÃO:\n";
         cout << "\n1° - ALTERAR NOME;\n";     
         cout << "2° - ALTERAR IDADE;\n";
         cout << "3° - SAIR DA EDIÇÃO;";
         cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
         cin >> alterarnome_idade;
          
          //carina: ver se usuario digitar num diferente de 1,2 ou3
     switch(alterarnome_idade){
             
         case 1:
           
                  cout << "\n\nDIGITE SEU NOVO NOME:\n";
                      cin >> nomedoCliente;
        
         break;
        
         case 2:
         
                  cout << "\nDIGITE SUA NOVA IDADE:\n";
                  cin >> idadedoCliente;
        
         while (idadedoCliente < 0){
            
                cout << "CARO CLIENTE DIGITE UMA IDADE VÁLIDA!\n";    
                cin >> idadedoCliente;
         
         }

        break;
             
       default:

       cout << "\nNUMERO DIGITADO INVÁLIDO!.\n";    
     
     
     }
         
} while(alterarnome_idade!=3);
            
         }
            
    //Area principal ( Apresentação da loja )

     cout << "\n\n";
     cout << "XXX 𝑫𝒆𝒑𝒐𝒔𝒊𝒕𝒐 𝑺𝒂𝒐 𝑴𝒂𝒓𝒄𝒐𝒔 XXX ";
     cout << "\n\n";
    //Informar ao usuário um desconto especial.
     cout << "SEJAM BEM-VINDO(A) " << nomedoCliente << " AO DEPÓSITO SÃO MARCOS.\n";
     cout << "TEMOS ALGUNS PRODUTOS QUE VOCÊ IRÁ SE INTERESSAR!\n";
     cout << "ESTAMOS REALIZANDO UM DESCONTO DE " << desconto_idade[0] <<"%, SOMENTE SE VOCÊ ESTIVER " << desconto_idade[1] << " ANOS OU MAIS.\n";
                  
     if(idadedoCliente >= 50 ){

     cout << "\nPARABÉNS!! VOCÊ ACABA DE GANHAR " << desconto_idade[0] << "% DE DESCONTO EM COMPRAS DA NOSSA LOJA!\n";

                  }
       
    
         cout << "\n\nXXX 𝑷𝒓𝒐𝒅𝒖𝒕𝒐𝒔 𝒅𝒊𝒔𝒑𝒐𝒏𝒊𝒗𝒆𝒊𝒔 XXX\n\n";
    
     string produtoDisponivel [5] = {"|Tijolo R$ 1.00   | Codigo - 1 | \n","|Cimento R$ 23.00 | Codigo - 2 | \n","|Areia R$ 5.00    | Codigo - 3 | \n","|Madeira R$ 25.00 | Codigo - 4 | \n","|Ferro R$ 30.00   | Codigo - 5 | \n"};  
         
     //Utilizei o for para exibir todos os nomes dentro da string
    
         for (contadorProduto=0;contadorProduto<5;contadorProduto++) {
             cout << produtoDisponivel[contadorProduto]; }

             cout << "\n\nVOCÊ DESEJA CONFERIR O ESTOQUE DOS PRODUTOS? 1 - SIM | 0 - NÃO \n";
             cin >> consultarEstoque;
             
         while ( consultarEstoque < 0 ){

             cout << "DIGITE UM NÚMERO VÁLIDO POR GENTILEZA!\n";
             cin >> consultarEstoque;  }

         switch(consultarEstoque){

        case 1:
        cout << "\n PRODUTOS - DISPONIVEL        \n";  
        cout << "| " << produtosComprados[0] << "  | " << estoquetrue[0] << endl;
        cout << "| " << produtosComprados[1] << " | " << estoquetrue[1] << endl;
        cout << "| " << produtosComprados[2] << "   | " << estoquetrue[2] << endl;
        cout << "| " << produtosComprados[3] << " | " << estoquetrue[3] << endl;
        cout << "| " << produtosComprados[4] << "   | " << estoquetrue[4] << endl;
         
        break;

         }
    
     cout << "\n\n\nXXX 𝑽𝒆𝒏𝒅𝒂 𝒅𝒐𝒔 𝒑𝒓𝒐𝒅𝒖𝒕𝒐𝒔 XXX";
	
     	   int producto, adicional, totalPagamento=0;
           int quantidadeProduto=0;
     	   float desconto=0;

do{

          cout << "\n\nDIGITE O CÓDIGO DO PRODUTO DA SUA ESCOLHA: " << "\n";
          cin>>producto; 
    
     while (producto > 5){
       
          cout << "OPA! NÃO EXISTE ESSE CÓDIGO DE PRODUTO DISPONÍVEL, DIGITE NOVAMENTE.\n";
          cin >> producto;
     }
              

          if (estoquetrue[0] <= 0){

             cout << "\nINFELIZMENTE NÃO TEMOS MAIS ESTE PRODUTO NO NOSSO ESTOQUE.\n";
             cout << "DIGITE OUTRO CÓDIGO DO PRODUTO.\n";
             cin >> producto;

          }    
          
  switch(producto){

case 1:

cout << "POR GENTILEZA, DIGITE A QUANTIDADE DO TIJOLO!\n";
cin >> quantidadeProduto;

while ( quantidadeProduto > estoquetrue[0] || quantidadeProduto < 0){

if (quantidadeProduto > estoquetrue[0]){
cout << "\nOPS! NÃO TEMOS ESSA QUANTIA NO ESTOQUE, DIGITE NOVAMENTE\n";
cin >> quantidadeProduto;   }

else {

cout << "DIGITE O CÓDIGO VÁLIDO POR GENTILEZA\n";
cin >> quantidadeProduto;  }

}

break;

case 2:

cout << "POR GENTILEZA, DIGITE A QUANTIDADE DE CIMENTO!\n";
cin >> quantidadeProduto;

while ( quantidadeProduto > estoquetrue[1] || quantidadeProduto < 0){

if (quantidadeProduto > estoquetrue[1]){
cout << "\nOPS! NÃO TEMOS ESSA QUANTIA NO ESTOQUE, DIGITE NOVAMENTE\n";
cin >> quantidadeProduto;   }

else {

cout << "DIGITE O CÓDIGO VÁLIDO POR GENTILEZA\n";
cin >> quantidadeProduto;  }

}

break;

case 3:

cout << "POR GENTILEZA, DIGITE A QUANTIDADE DE AREIA!\n";
cin >> quantidadeProduto;

while ( quantidadeProduto > estoquetrue[2] || quantidadeProduto < 0){

if (quantidadeProduto > estoquetrue[2]){
cout << "\nOPS! NÃO TEMOS ESSA QUANTIA NO ESTOQUE, DIGITE NOVAMENTE\n";
cin >> quantidadeProduto;   }

else {

cout << "DIGITE O CÓDIGO VÁLIDO POR GENTILEZA\n";
cin >> quantidadeProduto;  }

}

break;

case 4:

cout << "POR GENTILEZA, DIGITE A QUANTIDADE DA MADEIRA!\n";
cin >> quantidadeProduto;

while ( quantidadeProduto > estoquetrue[3] || quantidadeProduto < 0){

if (quantidadeProduto > estoquetrue[3]){
cout << "\nOPS! NÃO TEMOS ESSA QUANTIA NO ESTOQUE, DIGITE NOVAMENTE\n";
cin >> quantidadeProduto;   }

else {

cout << "DIGITE O CÓDIGO VÁLIDO POR GENTILEZA\n";
cin >> quantidadeProduto;  }

}

break;

case 5:

cout << "POR GENTILEZA, DIGITE A QUANTIDADE DO FERRO!\n";
cin >> quantidadeProduto;

while ( quantidadeProduto > estoquetrue[4] || quantidadeProduto < 0){

if (quantidadeProduto > estoquetrue[4]){
cout << "\nOPS! NÃO TEMOS ESSA QUANTIA NO ESTOQUE, DIGITE NOVAMENTE\n";
cin >> quantidadeProduto;   }

else {

cout << "DIGITE O CÓDIGO VÁLIDO POR GENTILEZA\n";
cin >> quantidadeProduto;  }

}
break;              
                    }        
                          
    switch (producto){
        
    case 1:
    
    produto1+=quantidadeProduto;
    
    break;
    
    case 2:                   
   
     produto2+=quantidadeProduto;
    
    break;
    
    case 3:
    
    produto3+=quantidadeProduto;
    
    break;
    
    case 4:
    
    produto4+=quantidadeProduto;
     
    break;
    
    case 5:
    
    produto5+=quantidadeProduto;
     
    break;  }
    
    
    
    cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";

   
          adicional = producto[produtosdaVenda-1]; 
  
        totalPagamento = totalPagamento + ( adicional * quantidadeProduto );


    cout << endl << nomedoCliente << " SUAS COMPRAS ESTÃO CUSTANDO " << totalPagamento <<" REAIS" << endl; 


        cout << "\nVOCÊ DESEJA COMPRAR MAIS ALGUM PRODUTO? 1 - SIM | 0 - NÃO\n";
        cin >> refazercompra; 
       
           if(refazercompra==true){
           
        cout << "VOCÊ DESEJA CONFERIR NOSSOS PRODUTOS NOVAMENTE? 1 - SIM | 0 - NÃO.\n"; 
         cin >> conferirstock;
               
        switch (conferirstock){
             
         case 1:
        
        cout << "\n\nXXX 𝑷𝒓𝒐𝒅𝒖𝒕𝒐𝒔 𝒅𝒊𝒔𝒑𝒐𝒏𝒊𝒗𝒆𝒊𝒔 XXX\n\n";
         
        for (contadorProduto=0;contadorProduto<5;contadorProduto++) {
         cout << produtoDisponivel[contadorProduto];
             
             }
             
                }       
           
                    }
       
     cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";


}while (refazercompra==true);

        
     
            cout << "\n\n XXX 𝑷𝒓𝒐𝒅𝒖𝒕𝒐𝒔 𝒄𝒐𝒎𝒑𝒓𝒂𝒅𝒐𝒔 XXX\n\n";

 cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
 cout << "PRODUTOS" << " QUANTIDADE " << " PREÇO\n";
 cout <<"| " << produtosComprados[0]<<"  | " << produto1 << "        R$ " << produtosdaVenda[0]*produto1 <<  endl;
 cout <<"| " << produtosComprados[1] <<" | " <<  produto2 <<"        R$ " << produtosdaVenda[1]*produto2 << endl;
 cout <<"| " << produtosComprados[2] <<"   | " << produto3 <<"        R$ " << produtosdaVenda[2]*produto3 << endl;
 cout <<"| " << produtosComprados[3] <<" | " << produto4 <<"        R$ " << produtosdaVenda[3]*produto4 << endl;
 cout <<"| " << produtosComprados[4] <<"   | " << produto5 <<"        R$ " << produtosdaVenda[4]*produto5 << endl;
 cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";


	   if(idadedoCliente > 50){
	      
	       desconto = totalPagamento*0.10;
     
        cout << "\nVALOR DO DESCONTO: " << desconto << " REAIS " << endl;
        cout << "VALOR TOTAL A PAGAR COM DESCONTO: " << totalPagamento-desconto << " REAIS " << endl;
	}
 
   else {
     
            cout<<"\nVALOR TOTAL A PAGAR É: "<< totalPagamento<< " REAIS" << endl;
   }
   
 
      cout << "\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-";
      cout << endl << nomedoCliente << " OBRIGADO POR ADQUIRIR PRODUTOS EM NOSSA LOJA!";
      cout << "\n\nPARA MAIS INFORMAÇÕES ACESSE: | www.depositosaomarcos.com.br |\n";
      cout << "TELEFONE PARA CONTATO: | (88) 9 9622-7391 | \n";
      cout << "               \n XXXX  𝑽𝑶𝑳𝑻𝑬 𝑺𝑬𝑴𝑷𝑹𝑬  XXXX";
      cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        
    }

  
    
