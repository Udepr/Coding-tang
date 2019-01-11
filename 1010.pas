var 
    s,n:real;
    i:longint;

begin
    read(n);

    for i:=1 to 8 do
    begin
        s:=s+n+n/2;
        n:=n/2;
    end;

    writeln(s-n:0:4);
    writeln(n:0:4);
end.
