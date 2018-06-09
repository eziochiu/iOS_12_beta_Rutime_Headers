/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKAudioOutputMonitor : _DKMonitor {
    AVAudioSession * _outputMonitor;
}

+ (id)_eventWithState:(id)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5;
+ (id)contextValueForAudioOutputConnectionStatus:(bool)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5;
+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (id)init;
- (void)onAudioRouteChangeNotification:(id)arg1;
- (void)start;
- (void)stop;

@end
