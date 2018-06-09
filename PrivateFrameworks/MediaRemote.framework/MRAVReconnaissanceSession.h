/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVReconnaissanceSession : NSObject {
    NSArray * _availableEndpoints;
    NSArray * _availableOutputDevices;
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackSyncQueue;
    MRAVRoutingDiscoverySession * _discoverySession;
    id  _discoverySessionCallbackToken;
    unsigned int  _endpointFeatures;
    NSArray * _lastProcessedEndpoints;
    NSArray * _lastProcessedOutputDevices;
    NSMutableSet * _localMatchingDevicesFound;
    NSMutableSet * _matchingDevicesFound;
    NSArray * _matchingLogicalDeviceIDs;
    NSString * _matchingOutputDeviceGroupID;
    NSSet * _matchingOutputDeviceUIDsSet;
    bool  _returnPartialResults;
    bool  _searchInProgress;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldWaitForUnanimousEndpoints;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    double  _timeoutTimerTimeout;
    MRAVEndpoint * _unanimousEndpoint;
    unsigned long long  _updatesReceived;
    bool  _useWeakMatching;
}

@property (nonatomic, retain) NSArray *availableEndpoints;
@property (nonatomic, retain) NSArray *availableOutputDevices;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackSyncQueue;
@property (nonatomic, retain) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic, retain) id discoverySessionCallbackToken;
@property (nonatomic, readonly) unsigned int endpointFeatures;
@property (nonatomic, retain) NSArray *lastProcessedEndpoints;
@property (nonatomic, retain) NSArray *lastProcessedOutputDevices;
@property (nonatomic, retain) NSMutableSet *matchingDevicesFound;
@property (nonatomic, copy) NSArray *matchingLogicalDeviceIDs;
@property (nonatomic, retain) NSString *matchingOutputDeviceGroupID;
@property (nonatomic, readonly) NSArray *matchingOutputDeviceUIDs;
@property (nonatomic, retain) NSSet *matchingOutputDeviceUIDsSet;
@property (nonatomic) bool returnPartialResults;
@property (nonatomic) bool searchInProgress;
@property (nonatomic) bool shouldWaitForUnanimousEndpoints;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;
@property (nonatomic, retain) MRAVEndpoint *unanimousEndpoint;
@property (nonatomic) unsigned long long updatesReceived;
@property (nonatomic) bool useWeakMatching;

- (void).cxx_destruct;
- (void)_discoverySessionEndpointsChangedCallback:(id)arg1;
- (void)_discoverySessionOutputDevicesChangedCallback:(id)arg1;
- (void)_onQueue_cancelSearch;
- (void)_onQueue_concludeSearch;
- (void)_onQueue_endSearch;
- (void)_onQueue_timeoutTimerFired;
- (void)_onQueue_updateCachedOutputDevices:(id)arg1 endpoints:(id)arg2;
- (void)_processSearchLoop;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (void)beginSearchWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id /* block */)callback;
- (id)callbackSyncQueue;
- (void)cancelSearch;
- (void)dealloc;
- (id)discoverySession;
- (id)discoverySessionCallbackToken;
- (unsigned int)endpointFeatures;
- (id)initWithOutputDeviceUIDs:(id)arg1 outputDeviceGroupID:(id)arg2 features:(unsigned int)arg3;
- (id)lastProcessedEndpoints;
- (id)lastProcessedOutputDevices;
- (id)matchingDevicesFound;
- (id)matchingLogicalDeviceIDs;
- (id)matchingOutputDeviceGroupID;
- (id)matchingOutputDeviceUIDs;
- (id)matchingOutputDeviceUIDsSet;
- (bool)returnPartialResults;
- (bool)searchInProgress;
- (void)setAvailableEndpoints:(id)arg1;
- (void)setAvailableOutputDevices:(id)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setCallbackSyncQueue:(id)arg1;
- (void)setDiscoverySession:(id)arg1;
- (void)setDiscoverySessionCallbackToken:(id)arg1;
- (void)setLastProcessedEndpoints:(id)arg1;
- (void)setLastProcessedOutputDevices:(id)arg1;
- (void)setMatchingDevicesFound:(id)arg1;
- (void)setMatchingLogicalDeviceIDs:(id)arg1;
- (void)setMatchingOutputDeviceGroupID:(id)arg1;
- (void)setMatchingOutputDeviceUIDsSet:(id)arg1;
- (void)setReturnPartialResults:(bool)arg1;
- (void)setSearchInProgress:(bool)arg1;
- (void)setShouldWaitForUnanimousEndpoints:(bool)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (void)setUnanimousEndpoint:(id)arg1;
- (void)setUpdatesReceived:(unsigned long long)arg1;
- (void)setUseWeakMatching:(bool)arg1;
- (bool)shouldWaitForUnanimousEndpoints;
- (id)timeoutTimer;
- (id)unanimousEndpoint;
- (unsigned long long)updatesReceived;
- (bool)useWeakMatching;

@end
