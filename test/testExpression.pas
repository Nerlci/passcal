program testExpressions(input, output);
var
    a, b, c: integer;
    x, y: real;
    flag: boolean;
    arr: array[1..5] of integer;
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

    flag := a < b;
    flag := a = b;
    flag := a <> b;

    flag := a <> b;
    rec.x := 15;
    arr[4] := 10;
end.