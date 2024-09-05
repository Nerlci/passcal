program testexpressions(input, output);
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
    x := 10.1;
    a := 10;
    y := x + a;
    b := 20;
    c := a + b;
end.