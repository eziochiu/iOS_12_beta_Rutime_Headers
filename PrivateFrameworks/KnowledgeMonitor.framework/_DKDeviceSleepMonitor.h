/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKDeviceSleepMonitor : _DKMonitor <_DKNotificationReceiver> {
    bool  _enabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventWithMessage:(long long)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsAwake:(bool)arg1;

- (void)receiveNotificationEvent:(id)arg1;
- (void)start;
- (void)stop;

@end
