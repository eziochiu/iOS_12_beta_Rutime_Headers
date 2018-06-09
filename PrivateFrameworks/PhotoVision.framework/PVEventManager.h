/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVEventManager : NSObject {
    PVContext * _context;
    NSMutableArray * _notificationListeners;
}

- (void).cxx_destruct;
- (void)addNotificationListener:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)notifyListeners:(id)arg1;
- (void)publishEvent:(id)arg1 source:(id)arg2;
- (void)removeNotificationListener:(id)arg1;

@end
