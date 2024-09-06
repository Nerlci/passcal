program chess(input,output);
var
  i,j,n,k,a,b,max,min,maxp:integer;
  c:array[1..250] of integer;
function aorb(a,b:integer):boolean;
  begin
    if a>b then aorb:=true
      else aorb:=false;
  end;
function abs(a:integer):integer;
  begin
    if a<0 then abs:=-a
      else abs:=a;
  end;
procedure qsort(l,r:integer);
  var
    i,j,mid,t:integer;
    c:array[1..250] of integer;
  begin
    i:=l; j:=r;
    mid:=c[(l+r) div 2];
    repeat
      while c[i]>mid do i:=i+1;
      while c[j]<mid do j:=j-1;
      if i<=j then
        begin
          t:=c[i];
          c[i]:=c[j];
          c[j]:=t;
          i:=i+1;
          j:=j-1;
        end;
    until i>j;
    if i<r then qsort(i,r);
    if l<j then qsort(l,j);
  end;
procedure ld;
  var
    x,y:integer;
    a,b,max,min:integer;
  begin
  if abs(a-max)>abs(a-min) then x:=abs(a-min)
    else x:=abs(a+1-max);
  if abs(b-max)>abs(b-min) then y:=abs(b-min)
    else y:=abs(b-max);
  end;
procedure zj;
  var
    i,n,ans:integer;
    c:array[1..250] of integer;
  begin
    ans:=0;
    for i:=1 to n do
      ans:=ans+c[i];
  end;
begin
  for i:=1 to n do
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
