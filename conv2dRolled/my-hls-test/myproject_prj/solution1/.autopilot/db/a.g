#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jovyan/conv2dRolled/my-hls-test/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
