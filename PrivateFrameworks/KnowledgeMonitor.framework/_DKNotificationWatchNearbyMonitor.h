/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKNotificationWatchNearbyMonitor : _DKMonitor <_DKNotificationReceiver> {
    bool  _enabled;
    int  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventWithNearbyDeviceCount:(unsigned long long)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsWatchNearby:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void)receiveNotificationEvent:(id)arg1;
- (void)setWatchIsNearby;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
