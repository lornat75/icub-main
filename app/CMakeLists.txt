# Copyright: 2010 RobotCub Consortium
# Author: Lorenzo Natale
# CopyPolicy: Released under the terms of the GNU GPL v2.0.
# 

PROJECT (iCub)

# Check for the minimal set of packages required for the global project.
# If we include them here, sub-projects can be configured a bit faster.
# Only a few demo projects are included so far.

### Go through single applications

add_subdirectory(default)
add_subdirectory(actionsRenderingEngine)
add_subdirectory(armCartesianController)
add_subdirectory(cameraCalibration)
add_subdirectory(cartesianSolver)
add_subdirectory(ctpService)
add_subdirectory(demoy3)
add_subdirectory(demoForceControl)
add_subdirectory(demoForceImitation)
add_subdirectory(demoGrasp_IIT_ISR)
add_subdirectory(demoLogpolarGrabber)
add_subdirectory(controlBoardDumper)
add_subdirectory(iCubGui)
add_subdirectory(iKinGazeCtrl)
add_subdirectory(faceExpressions)
add_subdirectory(logpolarRemapper)
add_subdirectory(logpolarTransform)
add_subdirectory(objectsPropertiesCollector)
add_subdirectory(pf3dTracker)
add_subdirectory(pf3dBottomup)
add_subdirectory(lumaChroma)
add_subdirectory(simCartesianControl)
add_subdirectory(robotScripting)
add_subdirectory(skinGui)
add_subdirectory(wholeBodyDynamics)
add_subdirectory(robots)
add_subdirectory(simConfig)
add_subdirectory(iCubTest)
add_subdirectory(iCubCluster)
add_subdirectory(joystickCtrl)
add_subdirectory(iCubInterfaceGui)
add_subdirectory(iCubStartup)
add_subdirectory(simFaceExpressions)
add_subdirectory(fingersTuner)
add_subdirectory(depth2kin)
add_subdirectory(fingertipsPortScope)
add_subdirectory(comanStartup)

