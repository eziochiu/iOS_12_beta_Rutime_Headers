/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _hasRefreshed;
    bool  _hasValidStationGroups;
    NSMutableArray * _pendingRecentStations;
    NSArray * _serverRecentStationGroups;
    NSArray * _stationGroups;
}

@property (nonatomic, readonly, copy) NSArray *stationGroups;
@property (nonatomic, readonly, copy) NSArray *stations;

- (void).cxx_destruct;
- (void)_createStationGroups;
- (void)_handleRecentStationsResponse:(id)arg1 fromRequest:(id)arg2 pendingRecentStations:(id)arg3 isInitialCacheLoad:(bool)arg4;
- (void)_insertPendingRecentStation:(id)arg1;
- (id)_newRecentStationsRequest;
- (void)_postStationsDidChangeNotification;
- (id)init;
- (void)insertPendingRecentStation:(id)arg1;
- (void)insertPendingRecentStationDictionary:(id)arg1;
- (void)refreshWithCompletionHandler:(id /* block */)arg1;
- (void)removePendingRecentStation:(id)arg1;
- (id)stationGroups;
- (id)stations;

@end
