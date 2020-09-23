//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// Licensed under the Apache License, Version 2.0 (the "License");          *
// you may not use this file except in compliance with the License.         *
// You may obtain a copy of the License at                                  *
//                                                                          *
// http://www.apache.org/licenses/LICENSE-2.0                               *
//                                                                          *
// Unless required by applicable law or agreed to in writing, software      *
// distributed under the License is distributed on an "AS IS" BASIS,        *
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
// See the License for the specific language governing permissions and      *
// limitations under the License.                                           *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 0fe4582bf06b504af601569d6a25a3a2                            *
//***************************************************************************

#ifndef IMC_ALLMESSAGES_HPP_INCLUDED_
#define IMC_ALLMESSAGES_HPP_INCLUDED_

#include <IMC/Spec/EntityState.hpp>
#include <IMC/Spec/QueryEntityState.hpp>
#include <IMC/Spec/EntityInfo.hpp>
#include <IMC/Spec/QueryEntityInfo.hpp>
#include <IMC/Spec/EntityList.hpp>
#include <IMC/Spec/CpuUsage.hpp>
#include <IMC/Spec/TransportBindings.hpp>
#include <IMC/Spec/RestartSystem.hpp>
#include <IMC/Spec/DevCalibrationControl.hpp>
#include <IMC/Spec/DevCalibrationState.hpp>
#include <IMC/Spec/EntityActivationState.hpp>
#include <IMC/Spec/QueryEntityActivationState.hpp>
#include <IMC/Spec/VehicleOperationalLimits.hpp>
#include <IMC/Spec/MsgList.hpp>
#include <IMC/Spec/SimulatedState.hpp>
#include <IMC/Spec/LeakSimulation.hpp>
#include <IMC/Spec/UASimulation.hpp>
#include <IMC/Spec/DynamicsSimParam.hpp>
#include <IMC/Spec/StorageUsage.hpp>
#include <IMC/Spec/CacheControl.hpp>
#include <IMC/Spec/LoggingControl.hpp>
#include <IMC/Spec/LogBookEntry.hpp>
#include <IMC/Spec/LogBookControl.hpp>
#include <IMC/Spec/ReplayControl.hpp>
#include <IMC/Spec/ClockControl.hpp>
#include <IMC/Spec/HistoricCTD.hpp>
#include <IMC/Spec/HistoricTelemetry.hpp>
#include <IMC/Spec/HistoricSonarData.hpp>
#include <IMC/Spec/HistoricEvent.hpp>
#include <IMC/Spec/ProfileSample.hpp>
#include <IMC/Spec/VerticalProfile.hpp>
#include <IMC/Spec/Heartbeat.hpp>
#include <IMC/Spec/Announce.hpp>
#include <IMC/Spec/AnnounceService.hpp>
#include <IMC/Spec/RSSI.hpp>
#include <IMC/Spec/VSWR.hpp>
#include <IMC/Spec/LinkLevel.hpp>
#include <IMC/Spec/Sms.hpp>
#include <IMC/Spec/SmsTx.hpp>
#include <IMC/Spec/SmsRx.hpp>
#include <IMC/Spec/SmsState.hpp>
#include <IMC/Spec/TextMessage.hpp>
#include <IMC/Spec/IridiumMsgRx.hpp>
#include <IMC/Spec/IridiumMsgTx.hpp>
#include <IMC/Spec/IridiumTxStatus.hpp>
#include <IMC/Spec/GroupMembershipState.hpp>
#include <IMC/Spec/SystemGroup.hpp>
#include <IMC/Spec/LinkLatency.hpp>
#include <IMC/Spec/ExtendedRSSI.hpp>
#include <IMC/Spec/HistoricData.hpp>
#include <IMC/Spec/CompressedHistory.hpp>
#include <IMC/Spec/HistoricSample.hpp>
#include <IMC/Spec/HistoricDataQuery.hpp>
#include <IMC/Spec/RemoteCommand.hpp>
#include <IMC/Spec/CommSystemsQuery.hpp>
#include <IMC/Spec/TelemetryMsg.hpp>
#include <IMC/Spec/LblRange.hpp>
#include <IMC/Spec/LblBeacon.hpp>
#include <IMC/Spec/LblConfig.hpp>
#include <IMC/Spec/AcousticMessage.hpp>
#include <IMC/Spec/SimAcousticMessage.hpp>
#include <IMC/Spec/AcousticOperation.hpp>
#include <IMC/Spec/AcousticSystemsQuery.hpp>
#include <IMC/Spec/AcousticSystems.hpp>
#include <IMC/Spec/AcousticLink.hpp>
#include <IMC/Spec/AcousticRequest.hpp>
#include <IMC/Spec/AcousticStatus.hpp>
#include <IMC/Spec/Rpm.hpp>
#include <IMC/Spec/Voltage.hpp>
#include <IMC/Spec/Current.hpp>
#include <IMC/Spec/GpsFix.hpp>
#include <IMC/Spec/EulerAngles.hpp>
#include <IMC/Spec/EulerAnglesDelta.hpp>
#include <IMC/Spec/AngularVelocity.hpp>
#include <IMC/Spec/Acceleration.hpp>
#include <IMC/Spec/MagneticField.hpp>
#include <IMC/Spec/GroundVelocity.hpp>
#include <IMC/Spec/WaterVelocity.hpp>
#include <IMC/Spec/VelocityDelta.hpp>
#include <IMC/Spec/DeviceState.hpp>
#include <IMC/Spec/BeamConfig.hpp>
#include <IMC/Spec/Distance.hpp>
#include <IMC/Spec/Temperature.hpp>
#include <IMC/Spec/Pressure.hpp>
#include <IMC/Spec/Depth.hpp>
#include <IMC/Spec/DepthOffset.hpp>
#include <IMC/Spec/SoundSpeed.hpp>
#include <IMC/Spec/WaterDensity.hpp>
#include <IMC/Spec/Conductivity.hpp>
#include <IMC/Spec/Salinity.hpp>
#include <IMC/Spec/WindSpeed.hpp>
#include <IMC/Spec/RelativeHumidity.hpp>
#include <IMC/Spec/DevDataText.hpp>
#include <IMC/Spec/DevDataBinary.hpp>
#include <IMC/Spec/Force.hpp>
#include <IMC/Spec/SonarData.hpp>
#include <IMC/Spec/Pulse.hpp>
#include <IMC/Spec/PulseDetectionControl.hpp>
#include <IMC/Spec/FuelLevel.hpp>
#include <IMC/Spec/GpsNavData.hpp>
#include <IMC/Spec/ServoPosition.hpp>
#include <IMC/Spec/DataSanity.hpp>
#include <IMC/Spec/RhodamineDye.hpp>
#include <IMC/Spec/CrudeOil.hpp>
#include <IMC/Spec/FineOil.hpp>
#include <IMC/Spec/Turbidity.hpp>
#include <IMC/Spec/Chlorophyll.hpp>
#include <IMC/Spec/Fluorescein.hpp>
#include <IMC/Spec/Phycocyanin.hpp>
#include <IMC/Spec/Phycoerythrin.hpp>
#include <IMC/Spec/GpsFixRtk.hpp>
#include <IMC/Spec/EstimatedState.hpp>
#include <IMC/Spec/ExternalNavData.hpp>
#include <IMC/Spec/DissolvedOxygen.hpp>
#include <IMC/Spec/AirSaturation.hpp>
#include <IMC/Spec/Throttle.hpp>
#include <IMC/Spec/PH.hpp>
#include <IMC/Spec/Redox.hpp>
#include <IMC/Spec/CameraZoom.hpp>
#include <IMC/Spec/SetThrusterActuation.hpp>
#include <IMC/Spec/SetServoPosition.hpp>
#include <IMC/Spec/SetControlSurfaceDeflection.hpp>
#include <IMC/Spec/RemoteActionsRequest.hpp>
#include <IMC/Spec/RemoteActions.hpp>
#include <IMC/Spec/ButtonEvent.hpp>
#include <IMC/Spec/LcdControl.hpp>
#include <IMC/Spec/PowerOperation.hpp>
#include <IMC/Spec/PowerChannelControl.hpp>
#include <IMC/Spec/QueryPowerChannelState.hpp>
#include <IMC/Spec/PowerChannelState.hpp>
#include <IMC/Spec/LedBrightness.hpp>
#include <IMC/Spec/QueryLedBrightness.hpp>
#include <IMC/Spec/SetLedBrightness.hpp>
#include <IMC/Spec/SetPWM.hpp>
#include <IMC/Spec/PWM.hpp>
#include <IMC/Spec/EstimatedStreamVelocity.hpp>
#include <IMC/Spec/IndicatedSpeed.hpp>
#include <IMC/Spec/TrueSpeed.hpp>
#include <IMC/Spec/NavigationUncertainty.hpp>
#include <IMC/Spec/NavigationData.hpp>
#include <IMC/Spec/GpsFixRejection.hpp>
#include <IMC/Spec/LblRangeAcceptance.hpp>
#include <IMC/Spec/DvlRejection.hpp>
#include <IMC/Spec/LblEstimate.hpp>
#include <IMC/Spec/AlignmentState.hpp>
#include <IMC/Spec/GroupStreamVelocity.hpp>
#include <IMC/Spec/Airflow.hpp>
#include <IMC/Spec/DesiredHeading.hpp>
#include <IMC/Spec/DesiredZ.hpp>
#include <IMC/Spec/DesiredSpeed.hpp>
#include <IMC/Spec/DesiredRoll.hpp>
#include <IMC/Spec/DesiredPitch.hpp>
#include <IMC/Spec/DesiredVerticalRate.hpp>
#include <IMC/Spec/DesiredPath.hpp>
#include <IMC/Spec/DesiredControl.hpp>
#include <IMC/Spec/DesiredHeadingRate.hpp>
#include <IMC/Spec/DesiredVelocity.hpp>
#include <IMC/Spec/PathControlState.hpp>
#include <IMC/Spec/AllocatedControlTorques.hpp>
#include <IMC/Spec/ControlParcel.hpp>
#include <IMC/Spec/Brake.hpp>
#include <IMC/Spec/DesiredLinearState.hpp>
#include <IMC/Spec/DesiredThrottle.hpp>
#include <IMC/Spec/Goto.hpp>
#include <IMC/Spec/PopUp.hpp>
#include <IMC/Spec/Teleoperation.hpp>
#include <IMC/Spec/Loiter.hpp>
#include <IMC/Spec/IdleManeuver.hpp>
#include <IMC/Spec/LowLevelControl.hpp>
#include <IMC/Spec/Rows.hpp>
#include <IMC/Spec/PathPoint.hpp>
#include <IMC/Spec/FollowPath.hpp>
#include <IMC/Spec/YoYo.hpp>
#include <IMC/Spec/TeleoperationDone.hpp>
#include <IMC/Spec/StationKeeping.hpp>
#include <IMC/Spec/Elevator.hpp>
#include <IMC/Spec/TrajectoryPoint.hpp>
#include <IMC/Spec/FollowTrajectory.hpp>
#include <IMC/Spec/CustomManeuver.hpp>
#include <IMC/Spec/VehicleFormationParticipant.hpp>
#include <IMC/Spec/VehicleFormation.hpp>
#include <IMC/Spec/StopManeuver.hpp>
#include <IMC/Spec/RegisterManeuver.hpp>
#include <IMC/Spec/ManeuverControlState.hpp>
#include <IMC/Spec/FollowSystem.hpp>
#include <IMC/Spec/CommsRelay.hpp>
#include <IMC/Spec/PolygonVertex.hpp>
#include <IMC/Spec/CoverArea.hpp>
#include <IMC/Spec/CompassCalibration.hpp>
#include <IMC/Spec/FormationParameters.hpp>
#include <IMC/Spec/FormationPlanExecution.hpp>
#include <IMC/Spec/FollowReference.hpp>
#include <IMC/Spec/Reference.hpp>
#include <IMC/Spec/FollowRefState.hpp>
#include <IMC/Spec/RelativeState.hpp>
#include <IMC/Spec/FormationMonitor.hpp>
#include <IMC/Spec/Dislodge.hpp>
#include <IMC/Spec/Formation.hpp>
#include <IMC/Spec/Launch.hpp>
#include <IMC/Spec/Drop.hpp>
#include <IMC/Spec/ScheduledGoto.hpp>
#include <IMC/Spec/RowsCoverage.hpp>
#include <IMC/Spec/Sample.hpp>
#include <IMC/Spec/ImageTracking.hpp>
#include <IMC/Spec/Takeoff.hpp>
#include <IMC/Spec/Land.hpp>
#include <IMC/Spec/AutonomousSection.hpp>
#include <IMC/Spec/FollowPoint.hpp>
#include <IMC/Spec/Alignment.hpp>
#include <IMC/Spec/StationKeepingExtended.hpp>
#include <IMC/Spec/Magnetometer.hpp>
#include <IMC/Spec/VehicleState.hpp>
#include <IMC/Spec/VehicleCommand.hpp>
#include <IMC/Spec/MonitorEntityState.hpp>
#include <IMC/Spec/EntityMonitoringState.hpp>
#include <IMC/Spec/OperationalLimits.hpp>
#include <IMC/Spec/GetOperationalLimits.hpp>
#include <IMC/Spec/Calibration.hpp>
#include <IMC/Spec/ControlLoops.hpp>
#include <IMC/Spec/VehicleMedium.hpp>
#include <IMC/Spec/Collision.hpp>
#include <IMC/Spec/FormState.hpp>
#include <IMC/Spec/AutopilotMode.hpp>
#include <IMC/Spec/FormationState.hpp>
#include <IMC/Spec/ReportControl.hpp>
#include <IMC/Spec/StateReport.hpp>
#include <IMC/Spec/TransmissionRequest.hpp>
#include <IMC/Spec/TransmissionStatus.hpp>
#include <IMC/Spec/SmsRequest.hpp>
#include <IMC/Spec/SmsStatus.hpp>
#include <IMC/Spec/VtolState.hpp>
#include <IMC/Spec/ArmingState.hpp>
#include <IMC/Spec/TCPRequest.hpp>
#include <IMC/Spec/TCPStatus.hpp>
#include <IMC/Spec/Abort.hpp>
#include <IMC/Spec/PlanVariable.hpp>
#include <IMC/Spec/PlanManeuver.hpp>
#include <IMC/Spec/PlanTransition.hpp>
#include <IMC/Spec/PlanSpecification.hpp>
#include <IMC/Spec/EmergencyControl.hpp>
#include <IMC/Spec/EmergencyControlState.hpp>
#include <IMC/Spec/PlanDB.hpp>
#include <IMC/Spec/PlanDBInformation.hpp>
#include <IMC/Spec/PlanDBState.hpp>
#include <IMC/Spec/PlanControl.hpp>
#include <IMC/Spec/PlanControlState.hpp>
#include <IMC/Spec/PlanGeneration.hpp>
#include <IMC/Spec/LeaderState.hpp>
#include <IMC/Spec/PlanStatistics.hpp>
#include <IMC/Spec/ReportedState.hpp>
#include <IMC/Spec/RemoteSensorInfo.hpp>
#include <IMC/Spec/MapPoint.hpp>
#include <IMC/Spec/MapFeature.hpp>
#include <IMC/Spec/Map.hpp>
#include <IMC/Spec/CcuEvent.hpp>
#include <IMC/Spec/VehicleLinks.hpp>
#include <IMC/Spec/TrexObservation.hpp>
#include <IMC/Spec/TrexCommand.hpp>
#include <IMC/Spec/TrexAttribute.hpp>
#include <IMC/Spec/TrexToken.hpp>
#include <IMC/Spec/TrexOperation.hpp>
#include <IMC/Spec/TrexPlan.hpp>
#include <IMC/Spec/Event.hpp>
#include <IMC/Spec/CompressedImage.hpp>
#include <IMC/Spec/ImageTxSettings.hpp>
#include <IMC/Spec/RemoteState.hpp>
#include <IMC/Spec/Target.hpp>
#include <IMC/Spec/EntityParameter.hpp>
#include <IMC/Spec/EntityParameters.hpp>
#include <IMC/Spec/QueryEntityParameters.hpp>
#include <IMC/Spec/SetEntityParameters.hpp>
#include <IMC/Spec/SaveEntityParameters.hpp>
#include <IMC/Spec/CreateSession.hpp>
#include <IMC/Spec/CloseSession.hpp>
#include <IMC/Spec/SessionSubscription.hpp>
#include <IMC/Spec/SessionKeepAlive.hpp>
#include <IMC/Spec/SessionStatus.hpp>
#include <IMC/Spec/PushEntityParameters.hpp>
#include <IMC/Spec/PopEntityParameters.hpp>
#include <IMC/Spec/IoEvent.hpp>
#include <IMC/Spec/UamTxFrame.hpp>
#include <IMC/Spec/UamRxFrame.hpp>
#include <IMC/Spec/UamTxStatus.hpp>
#include <IMC/Spec/UamRxRange.hpp>
#include <IMC/Spec/UamTxRange.hpp>
#include <IMC/Spec/FormCtrlParam.hpp>
#include <IMC/Spec/FormationEval.hpp>
#include <IMC/Spec/FormationControlParams.hpp>
#include <IMC/Spec/FormationEvaluation.hpp>
#include <IMC/Spec/SoiWaypoint.hpp>
#include <IMC/Spec/SoiPlan.hpp>
#include <IMC/Spec/SoiCommand.hpp>
#include <IMC/Spec/SoiState.hpp>
#include <IMC/Spec/MessagePart.hpp>
#include <IMC/Spec/NeptusBlob.hpp>
#include <IMC/Spec/Aborted.hpp>
#include <IMC/Spec/UsblAngles.hpp>
#include <IMC/Spec/UsblPosition.hpp>
#include <IMC/Spec/UsblFix.hpp>
#include <IMC/Spec/ParametersXml.hpp>
#include <IMC/Spec/GetParametersXml.hpp>
#include <IMC/Spec/SetImageCoords.hpp>
#include <IMC/Spec/GetImageCoords.hpp>
#include <IMC/Spec/GetWorldCoordinates.hpp>
#include <IMC/Spec/UsblAnglesExtended.hpp>
#include <IMC/Spec/UsblPositionExtended.hpp>
#include <IMC/Spec/UsblFixExtended.hpp>
#include <IMC/Spec/UsblModem.hpp>
#include <IMC/Spec/UsblConfig.hpp>
#include <IMC/Spec/DissolvedOrganicMatter.hpp>
#include <IMC/Spec/OpticalBackscatter.hpp>
#include <IMC/Spec/Tachograph.hpp>
#include <IMC/Spec/ApmStatus.hpp>
#include <IMC/Spec/SadcReadings.hpp>
#include <IMC/Spec/DmsDetection.hpp>
#include <IMC/Spec/TotalMagIntensity.hpp>
#include <IMC/Spec/HomePosition.hpp>

#endif
