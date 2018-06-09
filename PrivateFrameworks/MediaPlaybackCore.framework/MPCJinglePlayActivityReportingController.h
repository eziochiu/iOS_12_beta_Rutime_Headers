/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCJinglePlayActivityReportingController : MPCReportingController {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    double  _nonCatalogAggregatePlayDuration;
    double  _nonCatalogAggregateStartTime;
    NSString * _nonCatalogBuildVersion;
    NSString * _nonCatalogDeviceName;
    bool  _nonCatalogOffline;
    bool  _nonCatalogSBEnabled;
    unsigned long long  _nonCatalogSourceType;
    unsigned long long  _nonCatalogStoreAccountID;
    NSString * _nonCatalogStoreFrontID;
    SSVPlayActivityController * _playActivityController;
    bool  _shouldReportAggregateTimePlayActivityEvents;
    bool  _shouldReportPlayActivityEvents;
}

@property (nonatomic, readonly) SSVPlayActivityController *playActivityController;
@property (nonatomic) bool shouldReportAggregateTimePlayActivityEvents;
@property (nonatomic) bool shouldReportPlayActivityEvents;

- (void).cxx_destruct;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)arg1;
- (void)_clearNonCatalogAggregatePlayActivityEventData;
- (void)_recordReportingEvents:(id)arg1;
- (void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (id)playActivityController;
- (void)setShouldReportAggregateTimePlayActivityEvents:(bool)arg1;
- (void)setShouldReportPlayActivityEvents:(bool)arg1;
- (bool)shouldReportAggregateTimePlayActivityEvents;
- (bool)shouldReportPlayActivityEvents;

@end
