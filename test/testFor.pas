program testFor(input,output);
var 
    n, i: integer;
begin
  n := 0;
  for i := 5 downto 1 do
        n := n + 1;
  for i := 1 to 5 do
        n := n + 1;
  writeln(n);
end.
