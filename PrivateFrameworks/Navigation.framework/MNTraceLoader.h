/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceLoader : NSObject {
    MNTrace * _trace;
}

- (void).cxx_destruct;
- (bool)_executeQuery:(id)arg1 rowHandler:(id /* block */)arg2;
- (id)_handleUpdateError;
- (bool)_loadAnnotatedUserBehaviorTable;
- (bool)_loadAnnotatedUserEnvironmentTable;
- (bool)_loadCommuteDestinationsTable;
- (bool)_loadCommuteDirectionsRequestsTable;
- (bool)_loadCompassHeadingDataTable;
- (bool)_loadDirectionsTable;
- (bool)_loadETAUpdatesTable;
- (bool)_loadInfoTable;
- (bool)_loadLocationsTable;
- (bool)_loadMotionDataTable;
- (bool)_loadRouteSelectionsTable;
- (bool)_loadSignificantEventsTable;
- (bool)_loadTraceVersion;
- (bool)_loadVehicleDataTable;
- (bool)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id*)arg2;
- (id)loadTraceWithPath:(id)arg1 outError:(id*)arg2;

@end
