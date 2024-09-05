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

  procedure aaa(x: integer);
  begin
    a := 10;
  end;
begin
  temp := a;
  a := b;
  b := temp;
  aaa(10);
end;

begin
  x := 5;
  y := 10;
  SwapNoRef(x, y);
  aaa(10);
end.
