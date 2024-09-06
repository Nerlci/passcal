program TestReadWrite(input, output);

var
  x, y: integer;
  a: real;
begin
  read(x, y);
  writeln('x', x, 'y', y);
  read(a);
  if a = 1.0 then
    writeln('y','e','s')
  else
    writeln('n','o');
  writeln('a', a);
end.
