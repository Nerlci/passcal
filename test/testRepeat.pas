program testRepeat(input,output);
var c,b: integer;
begin
  c := 1;
  b := 1;
  repeat
    c := c + 1;
    b := b * 2;
  until c > 5;
  writeln(c, ' ', b);
end.