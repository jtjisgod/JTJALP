import angr
import json

FIND_ADDR = 0x4006C9
AVOID_ADDR = 0x4006D7 

def main():
    proj = angr.Project("jtjalp_example.elf", load_options={"auto_load_libs": False})
    sm = proj.factory.simulation_manager()
    print sm.explore(find=(FIND_ADDR,), avoid=(AVOID_ADDR,))
    return sm.found

founded = main()
for found in founded :
    print found.posix.dumps(0)