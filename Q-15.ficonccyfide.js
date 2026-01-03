const str = "nayan";
const freq = {};

// ...spriade kahevai 

[...str].forEach(ch => freq[ch] = (freq[ch] || 0) + 1);

console.log(freq);
