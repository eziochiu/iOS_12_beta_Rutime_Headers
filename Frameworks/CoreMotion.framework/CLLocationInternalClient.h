/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLLocationInternalClient : NSObject {
    NSXPCConnection * _connection;
}

+ (id)sharedServiceClient;

- (unsigned char)clearLocationAuthorizations;
- (unsigned char)compassCalibrationDatabaseGetBias:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; int x2; }*)arg1 magneticField:(struct { float x1; float x2; float x3; })arg2 acceleration:(struct { float x1; float x2; float x3; })arg3;
- (unsigned char)compassCalibrationDatabaseSetBias:(struct { float x1; float x2; float x3; })arg1 magneticField:(struct { float x1; float x2; float x3; })arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (unsigned char)configure:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; unsigned char x7; float x8; BOOL x9; unsigned short x10; })arg1;
- (const struct __CFArray { }*)copyActivityAlarms;
- (const struct __CFDictionary { }*)copyAppsUsingLocation;
- (unsigned char)copyLastLog;
- (const struct __CFDictionary { }*)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString { }*)arg1 orBundlePath:(const struct __CFString { }*)arg2;
- (const struct __CFArray { }*)copyTechnologiesInUse;
- (unsigned char)displayStatistics;
- (unsigned char)dumpLogs:(const struct __CFString { }*)arg1;
- (unsigned char)getAuthorizationStatus:(int*)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3;
- (unsigned char)getAuthorizationStatusForService:(int*)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3 serviceMask:(unsigned long long)arg4;
- (unsigned char)getControlPlaneStatusReportClear:(int)arg1 startTime:(double*)arg2 endTime:(double*)arg3 latitude:(double*)arg4 longitude:(double*)arg5 altitude:(double*)arg6 accuracy:(double*)arg7 status:(unsigned int*)arg8;
- (unsigned char)getGestureServiceEnabled:(char *)arg1;
- (unsigned char)getGyroCalibrationDatabaseBiasFit:(struct { int x1; double x2; union { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_3_1_1; struct { bool x_2_2_1; BOOL x_2_2_2[246]; } x_3_1_2; } x3; }*)arg1 atTemperature:(float)arg2;
- (unsigned char)getGyroCalibrationDatabaseNumTemperatures:(int*)arg1;
- (const void*)getLocationDefaultForKey:(const struct __CFString { }*)arg1;
- (unsigned char)getLocationForBundleID:(const struct __CFString { }*)arg1 orBundlePath:(const struct __CFString { }*)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; }*)arg5;
- (unsigned char)getLocationServicesEnabled:(char *)arg1;
- (unsigned char)getPrivateMode;
- (unsigned char)getStatusBarIconEnabled:(bool*)arg1 forEntityClass:(int)arg2;
- (int)getStatusBarIconState;
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int*)arg1;
- (unsigned char)gyroCalibrationDatabaseWipe;
- (unsigned char)insertGyroCalibrationDatabaseBiasEstimateIfValid:(struct { float x1; float x2; float x3; })arg1 temperature:(float)arg2 variance:(struct { float x1; float x2; float x3; })arg3 timestamp:(double)arg4;
- (unsigned char)performMigration;
- (unsigned char)pingDaemon;
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3;
- (unsigned char)setAuthorizationStatusByType:(int)arg1 forBundleID:(const struct __CFString { }*)arg2 orBundlePath:(const struct __CFString { }*)arg3;
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString { }*)arg1 orBundlePath:(const struct __CFString { }*)arg2 enabled:(unsigned char)arg3;
- (void)setGestureServiceEnabled:(unsigned char)arg1;
- (void)setLocationDefaultForKey:(const struct __CFString { }*)arg1 value:(const void*)arg2;
- (void)setLocationServicesEnabled:(unsigned char)arg1;
- (void)setMapMatchingRouteHint:(unsigned long long*)arg1 count:(int)arg2;
- (void)setPrivateMode:(unsigned char)arg1;
- (unsigned char)setStatusBarIconEnabled:(bool)arg1 forEntityClass:(int)arg2;
- (unsigned char)shutdownDaemon;
- (bool)startStopAdvertisingBeacon:(id)arg1 power:(id)arg2;
- (id)synchronousRemoteObject;
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long*)arg1 oscarTimeStamp:(unsigned long long*)arg2;
- (id)timeZoneAtLocation:(id)arg1;

@end
