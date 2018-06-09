/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRemoteNotification : NSObject <SSXPCCoding> {
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) NSString *alertBodyString;
@property (nonatomic, readonly) NSString *alertCancelString;
@property (nonatomic, readonly) NSString *alertOKString;
@property (nonatomic, readonly) NSString *alertTitleString;
@property (nonatomic, readonly) NSString *artworkUrl;
@property (nonatomic, readonly) id badgeValue;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) bool explicitContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic, readonly) NSDictionary *notificationUserInfo;
@property (nonatomic, readonly) NSString *soundFileName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tapUrl;
@property (nonatomic, readonly) long long version;

- (id)_valueForAPSKey:(id)arg1;
- (id)_valueForAlertKey:(id)arg1;
- (long long)actionType;
- (id)alertBodyString;
- (id)alertCancelString;
- (id)alertOKString;
- (id)alertTitleString;
- (id)artworkUrl;
- (id)badgeValue;
- (id)buttons;
- (id)category;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)expirationDate;
- (bool)explicitContent;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)metrics;
- (id)notificationUserInfo;
- (id)soundFileName;
- (id)tapUrl;
- (id)valueForKey:(id)arg1;
- (long long)version;

@end
