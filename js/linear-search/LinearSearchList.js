function linear_search(lista, numero){
    for (let i = 0; i < lista.length; i++){
        if (lista[i] === numero){
            return true;
        }
    }
    return false;
}


const numbers = [1, 2, 3, 4, 5, 65, 76, 87, 90, 230, 304, 340, 540, 4345];

const numero = 85;

console.log(linear_search(numbers, numero));
