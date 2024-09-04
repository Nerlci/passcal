program aplusb(input,output);
const 
  e=1;
  f='a';
type
  g=array[1..10] of integer;
  rectyp=record
    a:integer;
    b:char;
    c:array[1..10] of integer
  end;
var
  a,b:integer;
  c,d:integer;
  arr:array[1..10, 1..20] of integer;
  rec:record
    a:integer;
    b:char
  end;
  recc:record
    a:integer;
    c:char
  end;
begin
    read(a);
    read(b);
    write(e);
end.