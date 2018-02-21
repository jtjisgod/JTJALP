import angr
import json

FIND_ADDR = 0x400659
AVOID_ADDR = 0x400667

def main():
    proj = angr.Project("test01.elf", load_options={"auto_load_libs": False})
    sm = proj.factory.simulation_manager()
    sm.explore(find=(FIND_ADDR,), avoid=(AVOID_ADDR,))
    return sm.found

founded = main()
for found in founded :
    print(found.posix.dumps(0))
