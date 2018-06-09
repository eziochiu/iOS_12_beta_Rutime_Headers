/* made by EzioChiu.
 */

@protocol FCUserInfoObserving <NSObject>

@optional

- (void)userInfo:(FCUserInfo *)arg1 didChangeAccessTokenForTagID:(NSString *)arg2;
- (void)userInfo:(FCUserInfo *)arg1 didRemoveAccessTokenForTagID:(NSString *)arg2 userInitiated:(bool)arg3;
- (void)userInfoDidChangeDateLastViewedSaved:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeEditorialArticleVersion:(FCUserInfo *)arg1;
- (void)userInfoDidChangeFeldsparID:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeNotificationsUserID:(FCUserInfo *)arg1;
- (void)userInfoDidChangeOnboardingStatus:(FCUserInfo *)arg1;

@end
