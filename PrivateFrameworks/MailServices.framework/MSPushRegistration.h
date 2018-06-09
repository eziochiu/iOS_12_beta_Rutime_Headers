/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSPushRegistration : MSMailDefaultService {
    NSString * _accountIdentifier;
    NSString * _bundleIdentifier;
    NSArray * _mailboxNames;
    NSString * _notificationNamePrefix;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSArray *mailboxNames;
@property (nonatomic, copy) NSString *notificationNamePrefix;

- (id)accountIdentifier;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)init;
- (id)mailboxNames;
- (id)notificationNamePrefix;
- (void)registerForPush:(id /* block */)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setMailboxNames:(id)arg1;
- (void)setNotificationNamePrefix:(id)arg1;

@end
