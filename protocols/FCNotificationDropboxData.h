/* made by EzioChiu.
 */

@protocol FCNotificationDropboxData <NSObject, NSMutableCopying>

@required

- (NSString *)baseURLString;
- (NSString *)deviceToken;
- (NSString *)notificationUserID;
- (NSString *)storefrontID;

@end
