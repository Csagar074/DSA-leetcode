let arr=[1,2,1,3,4,5,3,6,7];

let temp=[];

for(let i=0; i < 9; i++){
    if(!temp.includes(arr[i])){
        temp.push(arr[i]);
    }
}
console.log(temp);
