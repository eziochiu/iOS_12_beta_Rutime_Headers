/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _attachments;
    NSNumber * _badge;
    NSString * _body;
    NSString * _categoryIdentifier;
    NSDate * _date;
    NSString * _defaultActionTitle;
    NSURL * _defaultActionURL;
    NSDate * _expirationDate;
    NSString * _header;
    UNNotificationIcon * _icon;
    NSString * _launchImageName;
    NSArray * _peopleIdentifiers;
    bool  _shouldAuthenticateDefaultAction;
    bool  _shouldBackgroundDefaultAction;
    bool  _shouldHideDate;
    bool  _shouldHideTime;
    bool  _shouldIgnoreDoNotDisturb;
    bool  _shouldPreventNotificationDismissalAfterDefaultAction;
    bool  _shouldSuppressDefaultAction;
    bool  _shouldSuppressScreenLightUp;
    bool  _shouldSuppressSyncDismissalWhenRemoved;
    bool  _shouldUseRequestIdentifierForDismissalSync;
    UNNotificationSound * _sound;
    NSString * _subtitle;
    NSString * _summaryArgument;
    unsigned long long  _summaryArgumentCount;
    NSString * _threadIdentifier;
    NSString * _title;
    NSSet * _topicIdentifiers;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, readonly, copy) NSNumber *badge;
@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSString *defaultActionTitle;
@property (nonatomic, readonly, copy) NSURL *defaultActionURL;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool hasDefaultAction;
@property (nonatomic, readonly, copy) NSString *header;
@property (nonatomic, readonly, copy) UNNotificationIcon *icon;
@property (nonatomic, readonly, copy) NSString *launchImageName;
@property (nonatomic, readonly, copy) NSArray *peopleIdentifiers;
@property (nonatomic, readonly) bool shouldAuthenticateDefaultAction;
@property (nonatomic, readonly) bool shouldBackgroundDefaultAction;
@property (nonatomic, readonly) bool shouldHideDate;
@property (nonatomic, readonly) bool shouldHideTime;
@property (nonatomic, readonly) bool shouldIgnoreDoNotDisturb;
@property (nonatomic, readonly) bool shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic, readonly) bool shouldSuppressDefaultAction;
@property (nonatomic, readonly) bool shouldSuppressScreenLightUp;
@property (nonatomic, readonly) bool shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic, readonly) bool shouldUseRequestIdentifierForDismissalSync;
@property (nonatomic, readonly, copy) UNNotificationSound *sound;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *summaryArgument;
@property (nonatomic, readonly) unsigned long long summaryArgumentCount;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSSet *topicIdentifiers;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAttachments:(id)arg1 badge:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 date:(id)arg5 icon:(id)arg6 defaultActionTitle:(id)arg7 defaultActionURL:(id)arg8 expirationDate:(id)arg9 header:(id)arg10 launchImageName:(id)arg11 peopleIdentifiers:(id)arg12 shouldHideDate:(bool)arg13 shouldHideTime:(bool)arg14 shouldIgnoreDoNotDisturb:(bool)arg15 shouldSuppressScreenLightUp:(bool)arg16 shouldAuthenticateDefaultAction:(bool)arg17 shouldBackgroundDefaultAction:(bool)arg18 shouldPreventNotificationDismissalAfterDefaultAction:(bool)arg19 shouldSuppressDefaultAction:(bool)arg20 shouldSuppressSyncDismissalWhenRemoved:(bool)arg21 shouldUseRequestIdentifierForDismissalSync:(bool)arg22 sound:(id)arg23 subtitle:(id)arg24 threadIdentifier:(id)arg25 title:(id)arg26 topicIdentifiers:(id)arg27 summaryArgument:(id)arg28 summaryArgumentCount:(unsigned long long)arg29 userInfo:(id)arg30;
- (id)attachments;
- (id)badge;
- (id)body;
- (id)categoryIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)defaultActionTitle;
- (id)defaultActionURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (bool)hasDefaultAction;
- (unsigned long long)hash;
- (id)header;
- (id)icon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)launchImageName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)peopleIdentifiers;
- (bool)shouldAuthenticateDefaultAction;
- (bool)shouldBackgroundDefaultAction;
- (bool)shouldHideDate;
- (bool)shouldHideTime;
- (bool)shouldIgnoreDoNotDisturb;
- (bool)shouldPreventNotificationDismissalAfterDefaultAction;
- (bool)shouldSuppressDefaultAction;
- (bool)shouldSuppressScreenLightUp;
- (bool)shouldSuppressSyncDismissalWhenRemoved;
- (bool)shouldUseRequestIdentifierForDismissalSync;
- (id)sound;
- (id)subtitle;
- (id)summaryArgument;
- (unsigned long long)summaryArgumentCount;
- (id)threadIdentifier;
- (id)title;
- (id)topicIdentifiers;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (bool)uns_willAlertUser;
- (bool)uns_willNotifyUser;

@end
