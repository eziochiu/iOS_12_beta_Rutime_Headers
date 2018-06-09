/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKNotificationScreenLockMonitor : _DKMonitor <_DKNotificationReceiver> {
    bool  _enabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventWithState:(id)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsLocked:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void)receiveNotificationEvent:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
