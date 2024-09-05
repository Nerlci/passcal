program test(input, output);
var a,x,y: integer;
function gtcomdiv (a,b:integer; var c:integer): integer;
    begin
        if b=0 then gtcomdiv:=a
        else gtcomdiv:=gtcomdiv(b,a mod b)
    end;
begin
    x:=10;
    y:=15;
    a:=gtcomdiv(x,y,a);
end.
