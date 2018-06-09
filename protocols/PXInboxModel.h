/* made by EzioChiu.
 */

@protocol PXInboxModel <NSObject, NSCopying>

@required

- (unsigned long long)assetsCount;
- (NSDate *)creationDate;
- (NSString *)inboxModelTitle;
- (bool)isSeen;
- (NSArray *)leftPreviewItems;
- (NSArray *)senderNames;
- (void)setSeen:(bool)arg1;
- (long long)type;
- (bool)userIsSender;

@optional

- (NSArray *)assetsForOneUp;
- (NSString *)ownerEmail;
- (NSString *)ownerFirstName;
- (NSString *)ownerLastName;

@end
