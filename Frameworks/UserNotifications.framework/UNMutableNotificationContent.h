/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNMutableNotificationContent : UNNotificationContent

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSNumber *badge;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *defaultActionTitle;
@property (nonatomic, copy) NSURL *defaultActionURL;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic) bool hasDefaultAction;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, copy) UNNotificationIcon *icon;
@property (nonatomic, copy) NSString *launchImageName;
@property (nonatomic, copy) NSArray *peopleIdentifiers;
@property (nonatomic) bool shouldAuthenticateDefaultAction;
@property (nonatomic) bool shouldBackgroundDefaultAction;
@property (nonatomic) bool shouldHideDate;
@property (nonatomic) bool shouldHideTime;
@property (nonatomic) bool shouldIgnoreDoNotDisturb;
@property (nonatomic) bool shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic) bool shouldSuppressDefaultAction;
@property (nonatomic) bool shouldSuppressScreenLightUp;
@property (nonatomic) bool shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic) bool shouldUseRequestIdentifierForDismissalSync;
@property (nonatomic, copy) UNNotificationSound *sound;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSSet *topicIdentifiers;
@property (nonatomic, copy) NSDictionary *userInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDefaultActionTitle:(id)arg1;
- (void)setDefaultActionURL:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHasDefaultAction:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLaunchImageName:(id)arg1;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setShouldAuthenticateDefaultAction:(bool)arg1;
- (void)setShouldBackgroundDefaultAction:(bool)arg1;
- (void)setShouldHideDate:(bool)arg1;
- (void)setShouldHideTime:(bool)arg1;
- (void)setShouldIgnoreDoNotDisturb:(bool)arg1;
- (void)setShouldPreventNotificationDismissalAfterDefaultAction:(bool)arg1;
- (void)setShouldSuppressDefaultAction:(bool)arg1;
- (void)setShouldSuppressScreenLightUp:(bool)arg1;
- (void)setShouldSuppressSyncDismissalWhenRemoved:(bool)arg1;
- (void)setShouldUseRequestIdentifierForDismissalSync:(bool)arg1;
- (void)setSound:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummaryArgument:(id)arg1;
- (void)setSummaryArgumentCount:(unsigned long long)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicIdentifiers:(id)arg1;
- (void)setUserInfo:(id)arg1;

@end
