/*

21 . Para que serve o uso de instruções break dentro de uma instrução switch?

        O uso da instrução break é encontrado no fim de cada "case", menos do "default". Isso ocorre para impedir que o 
    switch execute as comparações dos cases abaixo do desejado, fazendo com que a instrução switch seja "quebrada".
        O caso "default" não requer um break pois é o caso que ocorre caso todas os outros falhem, portanto, só
    ocorrerá uma vez.

*/