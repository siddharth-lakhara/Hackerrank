function Rectangle(a, b) {
    this.length = a;
    this.width = b;
    this.perimeter = 2 * (a + b);
    this.area = a * b;
}

// alternative solution

function Rectangle(a, b) {
    let rectangle = new Object();

    rectangle.length = a;
    rectangle.width = b;
    rectangle.perimeter = 2 * (a + b);
    rectangle.area = a * b;

    return rectangle;
}