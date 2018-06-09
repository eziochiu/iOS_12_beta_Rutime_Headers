/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKBacklightMonitor : _DKMonitor {
    int  notifyToken;
}

+ (id)_eventWithState:(id)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (bool)indicatesScreenOnWithNotificationState:(id)arg1;
+ (void)setIsBacklit:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
