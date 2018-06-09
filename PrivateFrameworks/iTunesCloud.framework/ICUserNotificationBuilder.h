/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserNotificationBuilder : NSObject <NSCopying> {
    long long  _alertLevel;
    double  _timeoutInterval;
    NSMutableDictionary * _userNotificationDictionary;
}

@property (nonatomic) long long alertLevel;
@property (nonatomic) bool allowInCar;
@property (nonatomic, copy) NSString *alternateButtonTitle;
@property (nonatomic, copy) NSString *defaultButtonTitle;
@property (nonatomic) bool displaysActionButtonOnLockScreen;
@property (nonatomic) bool displaysAsTopMost;
@property (nonatomic) bool forcesModalAppearance;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *otherButtonTitle;
@property (nonatomic) double timeoutInterval;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_setBoolValue:(bool)arg1 forKey:(struct __CFString { }*)arg2;
- (long long)alertLevel;
- (bool)allowInCar;
- (id)alternateButtonTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFUserNotification { }*)createCFUserNotification;
- (id)defaultButtonTitle;
- (bool)displaysActionButtonOnLockScreen;
- (bool)displaysAsTopMost;
- (bool)forcesModalAppearance;
- (id)init;
- (id)initWithStoreDialog:(id)arg1;
- (id)message;
- (id)otherButtonTitle;
- (void)setAlertLevel:(long long)arg1;
- (void)setAllowInCar:(bool)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setDisplaysActionButtonOnLockScreen:(bool)arg1;
- (void)setDisplaysAsTopMost:(bool)arg1;
- (void)setForcesModalAppearance:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setOtherButtonTitle:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTitle:(id)arg1;
- (double)timeoutInterval;
- (id)title;

@end
