# 7/1/2013 firmware; this can be overridden from distro config
RPIFW_SRCREV ?= "0ac68cce44d4550c251172e8524100090e8211fa"
RPIFW_DATE ?= "20130107"
RPIFW_SRC_URI ?= "git://github.com/raspberrypi/firmware.git;protocol=git;branch=master"
RPIFW_S ?= "${WORKDIR}/git"

SRC_URI = "${RPIFW_SRC_URI}"
SRCREV = "${RPIFW_SRCREV}"
PV = "${RPIFW_DATE}"
