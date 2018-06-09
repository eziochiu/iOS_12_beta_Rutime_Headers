/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDNotifierConfiguration : NSObject <DEDSecureArchiving, NSSecureCoding> {
    NSString * _followupExtensionIdentifier;
    double  _followupFrequency;
    NSString * _followupLocalizedInformativeText;
    NSString * _followupLocalizedTitle;
    NSString * _followupNotificationActionTitle;
    NSURL * _followupNotificationActionURL;
    NSURL * _followupReviewActionURL;
    NSDictionary * _followupReviewActionUserInfo;
    NSURL * _followupSendActionURL;
    NSDictionary * _followupSendActionUserInfo;
    NSString * _followupUniqueIdentifier;
    bool  _followupUseSpringboardNotification;
    NSString * _hostAppIdentifier;
    NSString * _localizedNotificationBody;
    NSString * _localizedNotificationTitle;
    NSString * _reviewActionLabel;
    NSString * _sendActionLabel;
    bool  _userNotificationShouldPlaySound;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *followupExtensionIdentifier;
@property double followupFrequency;
@property (retain) NSString *followupLocalizedInformativeText;
@property (retain) NSString *followupLocalizedTitle;
@property (retain) NSString *followupNotificationActionTitle;
@property (retain) NSURL *followupNotificationActionURL;
@property (retain) NSURL *followupReviewActionURL;
@property (retain) NSDictionary *followupReviewActionUserInfo;
@property (retain) NSURL *followupSendActionURL;
@property (retain) NSDictionary *followupSendActionUserInfo;
@property (retain) NSString *followupUniqueIdentifier;
@property bool followupUseSpringboardNotification;
@property (readonly) unsigned long long hash;
@property (retain) NSString *hostAppIdentifier;
@property (retain) NSString *localizedNotificationBody;
@property (retain) NSString *localizedNotificationTitle;
@property (retain) NSString *reviewActionLabel;
@property (retain) NSString *sendActionLabel;
@property (readonly) Class superclass;
@property bool userNotificationShouldPlaySound;

+ (id)archivedClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)followupExtensionIdentifier;
- (double)followupFrequency;
- (id)followupLocalizedInformativeText;
- (id)followupLocalizedTitle;
- (id)followupNotificationActionTitle;
- (id)followupNotificationActionURL;
- (id)followupReviewActionURL;
- (id)followupReviewActionUserInfo;
- (id)followupSendActionURL;
- (id)followupSendActionUserInfo;
- (id)followupUniqueIdentifier;
- (bool)followupUseSpringboardNotification;
- (id)hostAppIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostAppIdentifier:(id)arg1 localizedNotificationTitle:(id)arg2 localizedNotificationBody:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedNotificationBody;
- (id)localizedNotificationTitle;
- (id)reviewActionLabel;
- (id)sendActionLabel;
- (void)setFollowupExtensionIdentifier:(id)arg1;
- (void)setFollowupFrequency:(double)arg1;
- (void)setFollowupLocalizedInformativeText:(id)arg1;
- (void)setFollowupLocalizedTitle:(id)arg1;
- (void)setFollowupNotificationActionTitle:(id)arg1;
- (void)setFollowupNotificationActionURL:(id)arg1;
- (void)setFollowupReviewActionURL:(id)arg1;
- (void)setFollowupReviewActionUserInfo:(id)arg1;
- (void)setFollowupSendActionURL:(id)arg1;
- (void)setFollowupSendActionUserInfo:(id)arg1;
- (void)setFollowupUniqueIdentifier:(id)arg1;
- (void)setFollowupUseSpringboardNotification:(bool)arg1;
- (void)setHostAppIdentifier:(id)arg1;
- (void)setLocalizedNotificationBody:(id)arg1;
- (void)setLocalizedNotificationTitle:(id)arg1;
- (void)setReviewActionLabel:(id)arg1;
- (void)setSendActionLabel:(id)arg1;
- (void)setUserNotificationShouldPlaySound:(bool)arg1;
- (bool)userNotificationShouldPlaySound;

@end
