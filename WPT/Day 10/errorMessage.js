function addition(a, b, result) {
    let r = a + b;
    result(null, r);
}

function subtraction(a, b, result) {
    let r = a - b;
    result(null, r);
}

function multiplication(a, b, result) {
    if (b == 0) {
        result("Error: Second parameter is zero", null);
    } else {
        let r = a * b;
        result(null, r);
    }
}

function division(a, b, result) {
    if (b == 0) {
        result("Error: Cannot divide by zero", null);
    } else {
        let r = a / b;
        result(null, r);
    }
}

// calling functions

addition(10, 5, function(error, result){
    if(error) console.log(error);
    else console.log("Addition:", result);
});

subtraction(10, 5, function(error, result){
    if(error) console.log(error);
    else console.log("Subtraction:", result);
});

multiplication(10, 0, function(error, result){
    if(error) console.log(error);
    else console.log("Multiplication:", result);
});

division(10, 0, function(error, result){
    if(error) console.log(error);
    else console.log("Division:", result);
});