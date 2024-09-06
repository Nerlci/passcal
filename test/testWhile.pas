program testRepeat(input,output);
var 
    c,b, a: integer;
    d : boolean;
begin
  c := 8;
  b := 1;
  a := 0;
  d := true;
  while d do
    begin
        c := c + 1;
        b := b * 2;
        a := a + 1;
        d := c > b;
    end;
    writeln(a, ' ', b, ' ', c);
end.