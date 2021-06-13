function changeColor(x, y, color) {
    let button = document.getElementById (
        "(" + x.toString() + "," + y.toString() + ")"
    );

    button.style.backgroundColor = color;
    button.style.borderColor = color;
}
