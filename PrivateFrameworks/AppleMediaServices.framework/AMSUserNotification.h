/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSUserNotification : NSObject {
    NSArray * _buttonActions;
    NSString * _categoryIdentifier;
    AMSUserNotificationAction * _defaultAction;
    NSString * _identifier;
    NSString * _informativeText;
    long long  _intent;
    NSString * _logKey;
    NSString * _subtitle;
    NSString * _title;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, retain) NSArray *buttonActions;
@property (nonatomic, readonly) NSString *categoryIdentifier;
@property (nonatomic, retain) AMSUserNotificationAction *defaultAction;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *informativeText;
@property (nonatomic) long long intent;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)_compileStoredUserInfo;
- (void)_populatePropertiesFromStoredUserInfo:(id)arg1;
- (void)addButtonAction:(id)arg1;
- (id)buttonActions;
- (id)categoryIdentifier;
- (id)createUNNotificationCategory;
- (id)createUNNotificationContent;
- (id)defaultAction;
- (void)handleSelectedButton:(id)arg1;
- (id)identifier;
- (id)informativeText;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 intent:(long long)arg2;
- (id)initWithUNNotification:(id)arg1 center:(id)arg2;
- (long long)intent;
- (id)logKey;
- (void)setButtonActions:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setIntent:(long long)arg1;
- (void)setLogKey:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldHandleSelection;
- (id)subtitle;
- (id)title;
- (id)userInfo;

@end
