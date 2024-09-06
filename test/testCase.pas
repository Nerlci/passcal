program testRepeat(input,output);
var b,c: integer;
begin
  c := 1;
  b := 1;
  case b of
    1: c := 2;
    2,3: c := 3;
    4,5: c := 4
  end;
  writeln(c);
end.