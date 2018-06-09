/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions
 */

@interface FMIPActionContext : NSObject {
    long long  _actionType;
    NSString * _deviceId;
    NSString * _expression;
    INIntent * _intent;
    NSUserActivity * _userActivity;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic, retain) NSString *expression;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic, retain) NSUserActivity *userActivity;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)configurationForActionContextActionType:(long long)arg1;
+ (id)supportedIntentClasses;
+ (bool)supportsIntentClass:(Class)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)actionContextForIntent:(id)arg1;
- (id)actionContextForUserActivity:(id)arg1;
- (long long)actionType;
- (id)description;
- (id)deviceId;
- (id)expression;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)intent;
- (void)setActionType:(long long)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setExpression:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)urlForActionContext:(id)arg1;
- (id)userActivity;
- (id)userActivityForActionContext:(id)arg1;
- (id)userInfo;
- (id)userInfoForActionContext:(id)arg1;
- (id)userInfoForIntent:(id)arg1;

@end
