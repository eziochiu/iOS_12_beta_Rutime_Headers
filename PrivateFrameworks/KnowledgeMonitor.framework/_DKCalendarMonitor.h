/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKCalendarMonitor : _DKMonitor {
    bool  _enabled;
}

+ (id)_eventWithTitle:(id)arg1 interaction:(id)arg2;
+ (id)entitlements;
+ (id)eventStream;

- (void)_receiveDatabaseChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (void)update;

@end
