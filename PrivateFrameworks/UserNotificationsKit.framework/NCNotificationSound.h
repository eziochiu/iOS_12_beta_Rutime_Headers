/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationSound : NSObject <BSDescriptionProviding> {
    TLAlertConfiguration * _alertConfiguration;
    NSDictionary * _controllerAttributes;
    double  _maxDuration;
    bool  _repeats;
    NSString * _ringtoneName;
    NSString * _songPath;
    unsigned long long  _soundBehavior;
    long long  _soundType;
    unsigned int  _systemSoundID;
    NSDictionary * _vibrationPattern;
}

@property (nonatomic, readonly, copy) TLAlertConfiguration *alertConfiguration;
@property (nonatomic, readonly, copy) NSDictionary *controllerAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxDuration;
@property (getter=isRepeating, nonatomic, readonly) bool repeats;
@property (nonatomic, readonly, copy) NSString *ringtoneName;
@property (nonatomic, readonly, copy) NSString *songPath;
@property (nonatomic, readonly) unsigned long long soundBehavior;
@property (nonatomic, readonly) long long soundType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int systemSoundID;
@property (nonatomic, readonly, copy) NSDictionary *vibrationPattern;

- (void).cxx_destruct;
- (id)alertConfiguration;
- (id)controllerAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotificationSound:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRepeating;
- (double)maxDuration;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)ringtoneName;
- (id)songPath;
- (unsigned long long)soundBehavior;
- (long long)soundType;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned int)systemSoundID;
- (id)vibrationPattern;

@end
