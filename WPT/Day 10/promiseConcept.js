function checkNumber(num) {

    return new Promise(function(resolve, reject) {

        if (num > 0) {
            resolve("Number is Positive");
        } else {
            reject("Number is Negative");
        }

    });

}

checkNumber(5)
.then(function(result){
    console.log(result);
})
.catch(function(error){
    console.log(error);
});