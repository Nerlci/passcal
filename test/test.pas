program chess(input,output);
var
  i,j,n,k,a,b,max,min,maxp:integer;
  c:array[1..250] of integer;
function aorb(a,b:integer):boolean;
  begin
    if a>b then exit(TRUE)
      else exit(FALSE);
  end;
procedure qsort(l,r:integer);
  var
    i,j,mid,t:integer;
  begin
    i:=l; j:=r;
    mid:=c[(l+r) div 2];
    repeat
      while c[i]>mid do inc(i);
      while c[j]<mid do dec(j);
      if i<=j then
        begin
          t:=c[i];
          c[i]:=c[j];
          c[j]:=t;
          inc(i);
          dec(j);
        end;
    until i>j;
    if i<r then qsort(i,r);
    if l<j then qsort(l,j);
  end;
procedure ld;
  var
    x,y:integer;
  begin
  if abs(a-max)>abs(a-min) then x:=abs(a-min)
    else x:=abs(a+1-max);
  if abs(b-max)>abs(b-min) then y:=abs(b-min)
    else y:=abs(b-max);
  if x>y then write(x)
    else write(y);
  end;
procedure zj;
  var
    i,ans:integer;
  begin
    ans:=0;
    for i:=1 to n do
      ans:=ans+c[i];
    write(ans div (n div 2)-c[n div 2]-c[n div 2+1]);
  end;
begin
  readln(n,k,a,b);
  for i:=1 to n do
    read(c[i]);
  qsort(1,n);
  maxp:=0;
  for i:=1 to k do
    begin
      max:=max+c[i];
      min:=min+c[n-i+1];
      if c[i]>maxp then maxp:=c[i];
    end;
  if maxp>=a then zj
    else ld;
end.