/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLGeoLocationShifter : NSObject {
    NSMutableOrderedSet * _assetsToShift;
    PLGeoLocationShiftResult * _currentBatchResult;
    <PLGeoLocationShifterDelegate> * _delegate;
    NSMutableSet * _inFlightRequestIDs;
    bool  _isRunning;
    NSObject<OS_dispatch_queue> * _locationShiftQueue;
    GEOLocationShifter * _locationShifter;
    bool  _shiftOperationInProgress;
}

@property (nonatomic) <PLGeoLocationShifterDelegate> *delegate;
@property (nonatomic, readonly) bool hasWork;

+ (bool)isLocationShiftRequiredForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (unsigned int)locationShiftFunctionVersion;

- (void)_beginBatch:(id)arg1;
- (void)_completeBatchIfReady;
- (void)_processShiftRequestWithAssetID:(id)arg1 coordinate:(id)arg2;
- (void)_runShiftOperation;
- (void)_shiftCompletedForAssetID:(id)arg1 withSuccess:(bool)arg2 needsRetry:(bool)arg3 shiftedCoordinate:(struct { double x1; double x2; })arg4;
- (void)_updateShiftOperationStatus;
- (void)dealloc;
- (id)delegate;
- (void)enqueueAssetIDs:(id)arg1;
- (bool)hasWork;
- (id)init;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (id)shifterStatus;
- (void)start;
- (void)stop;

@end
