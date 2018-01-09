open(IN, "<", "/dev/fmem")||die($!);
seek(IN, hex($ARGV[0]), 0)||die($!);
print "Reading ".$ARGV[0]."\n";
$b = sysread(IN, $a, $ARGV[1]||10);
print(join("\n", map { sprintf("0x%X", ord($_)).":".$_ } split(//, $a)))."\n";
