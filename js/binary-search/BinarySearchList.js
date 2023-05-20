//implementation
function binary_search(list, number){
    let low = 0;
    let high = list.length;

    do{
        const mediumIndex = Math.floor (low + (high - low) / 2)
        const mediumValue = list[mediumIndex];

        if (mediumValue === number){ 
            return true
        }
        //if the number is bigger then value, we take the greater half of the array
        else if (mediumValue < number){
            low = mediumIndex + 1;
        }
        //if the number is lower then value, we take the lower half of the array
        else{
            high = mediumIndex;
        }
    } while(low < high);

    return false;
}


//Pattern
const numbers = [1, 2, 3, 4, 5, 65, 76, 87, 90, 230, 304, 340, 540, 4345];
const numero = 304

console.log(binary_search(numbers, numero));