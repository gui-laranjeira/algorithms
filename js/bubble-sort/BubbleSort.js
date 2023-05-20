function bubble_sort(array){
    for (let i = 0; i < array.length; i++){
        for (let j = 0; j < array.length - 1 - i; ++j){
            if (array[j] > array[ j + 1 ]){
                const temp = array[j];
                array[j] = array[ j + 1 ];
                array[ j + 1 ] = temp;
            }
        }
    } 
    return array
}

const numbers = [1, 23, 3, 4234, 2, 5, 76, 65, 32, 87, 90, 230, 304, 340, 540, 4345];
const numberSorted = bubble_sort(numbers);

console.log(numberSorted)