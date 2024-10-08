program PassByReferenceExample(input, output);

var
  x, y: integer;

procedure Swap(var a: integer; var b: integer);
var
  temp: integer;
begin
  temp := a;
  a := b;
  b := temp;
end;

procedure SwapNoRef(a, b: integer);
var
  temp: integer;
begin
  temp := a;
  a := b;
  b := temp;
end;

begin
  x := 5;
  y := 10;
  Swap(x,y);
  SwapNoRef(x,y);
  writeln(x);
  writeln(y);
end.
