/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKStarkMonitor : _DKMonitor

+ (id)_eventWithState:(id)arg1;
+ (id)entitlements;
+ (id)eventStream;

- (void)onCarplayIsConnectedAttributeNotification:(id)arg1;
- (void)registerForCallbacks;
- (void)saveCurrentState;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end