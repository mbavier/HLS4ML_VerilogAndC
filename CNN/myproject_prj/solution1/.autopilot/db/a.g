#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jovyan/Conv2dStream/cnn/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
