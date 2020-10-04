arrayOfWDYW = [];

insertElement = (elementToInsert) => {
    elementToInsert != null ? arrayOfWDYW.push(elementToInsert) &&
        arrayOfWDYW.forEach(element => {
            console.log(element);
        }) :
        console.log('bro do u jok me?')
}