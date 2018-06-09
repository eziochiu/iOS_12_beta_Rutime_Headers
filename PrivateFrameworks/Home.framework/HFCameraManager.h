/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraManager : NSObject <HFAccessoryObserver, HFCameraObserver> {
    NSError * _cachedStreamError;
    HMCameraProfile * _cameraProfile;
    bool  _isRegisteredForEvents;
    <NACancelable> * _nextSnapshotEvent;
    unsigned long long  _snapshotErrorCount;
    NSDate * _snapshotErrorDate;
    NSMapTable * _snapshotRequesters;
    NSMapTable * _streamRequesters;
}

@property (nonatomic, retain) NSError *cachedStreamError;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRegisteredForEvents;
@property (nonatomic, retain) <NACancelable> *nextSnapshotEvent;
@property (nonatomic) unsigned long long snapshotErrorCount;
@property (nonatomic, retain) NSDate *snapshotErrorDate;
@property (nonatomic, readonly) NSMapTable *snapshotRequesters;
@property (nonatomic, readonly) NSMapTable *streamRequesters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginContinuousStreaming;
- (void)_beginPeriodicSnapshots;
- (void)_cancelNextSnapshotEvent;
- (void)_dispatchStreamStateUpdate;
- (void)_endContinuousStreaming;
- (void)_endPeriodicSnapshots;
- (void)_handleApplicationDidBecomeActiveNotificationNotification;
- (bool)_hasSnapshotRequesters;
- (bool)_hasStreamRequesters;
- (id)_nextSnapshotDate;
- (void)_scheduleNextSnapshotEventWithPreviousError:(id)arg1;
- (double)_snapshotTimeInterval;
- (void)_startStreaming;
- (void)_stopStreaming;
- (void)_updateEventRegistration;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)beginContinuousStreamingWithRequester:(id)arg1;
- (void)beginPeriodicSnapshotsWithRequester:(id)arg1;
- (id)cachedStreamError;
- (id)cameraProfile;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)dealloc;
- (void)endContinuousStreamingWithRequester:(id)arg1;
- (void)endPeriodicSnapshotsWithRequester:(id)arg1;
- (id)initWithCameraProfile:(id)arg1;
- (bool)isRegisteredForEvents;
- (id)nextSnapshotEvent;
- (void)setCachedStreamError:(id)arg1;
- (void)setIsRegisteredForEvents:(bool)arg1;
- (void)setNextSnapshotEvent:(id)arg1;
- (void)setSnapshotErrorCount:(unsigned long long)arg1;
- (void)setSnapshotErrorDate:(id)arg1;
- (unsigned long long)snapshotErrorCount;
- (id)snapshotErrorDate;
- (id)snapshotRequesters;
- (id)streamRequesters;

@end
