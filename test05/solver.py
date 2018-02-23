import angr
import json


def main():
    proj = angr.Project("jtjalp_example.elf", load_options={"auto_load_libs": False})
    sm = proj.factory.simulation_manager()
#    print sm.explore(find=(FIND_ADDR,), avoid=(AVOID_ADDR,))
    print sm.explore(find=(0x4007F9,), avoid=(0x40071D, 0x400813, 0x40078F))
    return sm.found

founded = main()

res = founded[0].posix.dumps(0).replace("\x00", "")
while True :
    res = res.replace("\x01\x01", "\x01")
    if "\x01\x01" not in res :
        break

res = res.strip("\x01").split("\x01")

print "=== Stdin ==="
for r in res[-1::-1] :
    print r
print "============="    