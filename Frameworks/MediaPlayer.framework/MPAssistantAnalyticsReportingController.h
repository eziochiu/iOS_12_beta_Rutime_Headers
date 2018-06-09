/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAssistantAnalyticsReportingController : NSObject {
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSString * _lastSiriReferenceIdentifierForPlaybackStart;
    NSString * _lastSiriReferenceIdentifierForWillReload;
    NSString * _lastSiriReferenceIdentifierWithLikelyToKeepUp;
    NSMapTable * _playerToObservedTimebase;
    NSHashTable * _players;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1;
- (void)_attemptPlaybackStartReportingEventWithPlayer:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (id)_createContextDictionaryWithSiriReferenceIdentifier:(id)arg1 siriWHAMetricsInfo:(id)arg2;
- (id)_init;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemTimebaseDidChangeNotification:(id)arg1;
- (void)_timebaseEffectiveRateChangedNotification;
- (void)_willReloadWithPlaybackContextNotification:(id)arg1;
- (void)logAssistantEvent:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)registerPlayer:(id)arg1;
- (void)unregisterPlayer:(id)arg1;

@end
