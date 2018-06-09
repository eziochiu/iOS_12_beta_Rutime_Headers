/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSUserNotificationAction : NSObject {
    NSURL * _defaultURL;
    NSString * _identifier;
    long long  _style;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSURL *defaultURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) unsigned long long un_ActionOptions;
@property (nonatomic, retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)defaultURL;
- (id)generateUserInfoAction;
- (id)identifier;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (id)initWithUserInfoAction:(id)arg1;
- (void)setDefaultURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (long long)style;
- (id)title;
- (unsigned long long)un_ActionOptions;
- (id)userInfo;

@end
