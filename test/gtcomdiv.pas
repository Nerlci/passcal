program test(input, output);
var a,x,y: integer;
function gtcomdiv (a,b:integer; var c:integer): integer;
begin
if b=0 then gtcomdiv:=a
else gtcomdiv:=gtcomdiv(b,a mod b)
end;
begin
read(x,y);
write(gtcomdiv(x,y))
end.
