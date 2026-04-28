function normalFunction() {
    console.log("1. Normal Function Executed");
}

console.log("Start Program");

normalFunction();

setTimeout(function () {
    console.log("4. setTimeout Executed");
}, 0);

let p = new Promise(function(resolve, reject){
    resolve("3. Promise Executed");
});

p.then(function(result){
    console.log(result);
});

console.log("2. End Program");