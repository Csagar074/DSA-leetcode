let arr=[89,12,74,63,78,99];

let Left=0;
let Right=arr.length-1;
let temp;

while(Left <Right){
    temp=arr[Left];
    arr[Left]=arr[Right];
    arr[Right]=temp;

    Left++;
    Right--;
}
console.log(arr);
