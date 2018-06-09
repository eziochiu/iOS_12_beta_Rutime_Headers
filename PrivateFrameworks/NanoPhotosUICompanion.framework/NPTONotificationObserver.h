/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTONotificationObserver : NSObject {
    int  _notificationToken;
}

@property (nonatomic) int notificationToken;

+ (id)notificationObserverWithNotificationName:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;

- (void)dealloc;
- (id)initWithNotificationToken:(int)arg1;
- (int)notificationToken;
- (void)setNotificationToken:(int)arg1;

@end
