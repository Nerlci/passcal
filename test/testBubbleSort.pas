program BubbleSort(input, output);
var
  n: integer;
  i, j: integer;
  arr: array[1..10] of integer;
procedure swap(var a, b: integer);
var
  temp: integer;
begin
    temp := a;
    a := b;
    b := temp;
end;
begin
  readln(n);
  for i := 1 to n do
    read(arr[i]);

  for i := 1 to n-1 do
  begin
    for j := 1 to n-i do
    begin
      if arr[j] > arr[j+1] then
        swap(arr[j], arr[j+1]);
    end;
  end;

  for i := 1 to 10 do
    write(arr[i], ' ');
end.
