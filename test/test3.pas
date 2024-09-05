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

  procedure SwapNoRef(a: integer; b: integer);
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
  write(x);
  write(y);
  SwapNoRef(x, y);
  write(x);
  write(y);
  Swap(x, y);
  write(x);
  write(y);
end.
