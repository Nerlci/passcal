proGram testExpressions(input, output);
Var
    a, b, c: integer;
    x, y: real;
    flag: boolean;
    arr: array[1..5, 5..10] of integer;
    rec: reCord
            x: inTeger;
            y: reAl
    eNd;
bEgiN
    a := 10;
    b := 20;
    c := a + b;
    c := a - b;
    c := a mod b;
    c := a * b;
    c := a div b;

    x := 10.5;
    y := 20;
    x := x + a;
    x := x - y;
    x := a / x;

    flag := a < b;
    flag := a = b;
    flag := a <> b;

    rec.y := a;
    A := 4;
    arr[a, 5] := 10;
    wrITeln(rEc.Y, ' ', arr[a, 5]);
    writeln(a, ' ', b, ' ', c, ' ', x, ' ', y);
    writeln(flag);
eNd.