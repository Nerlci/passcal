program testExpressions(input, output);
var
    a, b, c: integer;
    x, y: real;
    flag: boolean;
    arr: array[1..5, 5..10] of integer;
    rec: record
            x: integer;
            y: real
    end;
begin
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
    a := 4;
    arr[a, 5] := 10;
    writeln(rec.y, ' ', arr[a, 5]);
    writeln(a, ' ', b, ' ', c, ' ', x, ' ', y);
    writeln(flag);
end.