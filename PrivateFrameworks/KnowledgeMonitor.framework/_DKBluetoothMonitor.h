/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKBluetoothMonitor : _DKMonitor

+ (id)_eventWithState:(id)arg1 name:(id)arg2 address:(id)arg3 type:(int)arg4;
+ (id)contextValueForBluetoothConnectionStatus:(bool)arg1 name:(id)arg2 address:(id)arg3 deviceType:(int)arg4;
+ (id)entitlements;
+ (id)eventStream;

- (void)start;
- (void)stop;

@end
