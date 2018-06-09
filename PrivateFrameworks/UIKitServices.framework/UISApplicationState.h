/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISApplicationState : NSObject {
    UISApplicationStateClient * _client;
}

@property (setter=_setNextWakeDate:, nonatomic) NSDate *_nextWakeDate;
@property (setter=_setUsesBackgroundNetwork:, nonatomic) bool _usesBackgroundNetwork;
@property (nonatomic, copy) id badgeValue;

- (void).cxx_destruct;
- (id)_nextWakeDate;
- (void)_setMinimumBackgroundFetchInterval:(double)arg1;
- (void)_setNextWakeDate:(id)arg1;
- (void)_setUsesBackgroundNetwork:(bool)arg1;
- (bool)_usesBackgroundNetwork;
- (id)badgeValue;
- (void)dealloc;
- (id)init;
- (id)initForCurrentApplication;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)setBadgeValue:(id)arg1;

@end
