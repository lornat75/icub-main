# Copyright: (C) 2010 RobotCub Consortium
# Authors: Alberto Cardellino
# CopyPolicy: Released under the terms of the GNU GPL v2.0.

PREPARE_DEVICE(embObjSkin TYPE EmbObjSkin INCLUDE embObjSkin.h WRAPPER skinWrapper)

if (NOT SKIP_embObjSkin)
    set(ICUB_COMPILE_EMBOBJ_LIBRARY ON CACHE INTERNAL "use the embObjLib lib")
    INCLUDE(../embObjLib/embObjLib.cmake)

    include_directories(${CMAKE_CURRENT_SOURCE_DIR}
                   ${YARP_INCLUDE_DIRS}
                   ../skinLib
                   ${iCubDev_INCLUDE_DIRS}
                   ${icub_firmware_shared_canProtocolLib_INCLUDE_DIR})

    yarp_add_plugin(embObjSkin embObjSkin.h embObjSkin.cpp ../skinLib/SkinConfigReader.cpp ../skinLib/SkinDiagnostics.h)
    target_link_libraries(embObjSkin ethResources ${YARP_LIBRARIES})
    icub_export_library(embObjSkin)
    yarp_install(FILES embObjSkin.ini  DESTINATION ${ICUB_PLUGIN_MANIFESTS_INSTALL_DIR})
endif (NOT SKIP_embObjSkin)
