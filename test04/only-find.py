import angr
import json
import time


def main():
    proj = angr.Project("jtjalp_example.elf", load_options={"auto_load_libs": False})
    sm = proj.factory.simulation_manager()
    print sm.explore(find=(0x4006CB,))
    return sm.found

start = time.time()

for i in range(0, 10) :
    founded = main()

print "Time : " + str(time.time()-start)
