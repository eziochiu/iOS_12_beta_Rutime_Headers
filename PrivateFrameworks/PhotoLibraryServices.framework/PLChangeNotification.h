/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLChangeNotification : NSNotification

@property (nonatomic, readonly, retain) PLChangeNotificationCenter *changeNotificationCenter;

+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (void)_calculateDiffs;
- (id)changeNotificationCenter;

@end
