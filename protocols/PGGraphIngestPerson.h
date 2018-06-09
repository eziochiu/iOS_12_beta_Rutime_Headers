/* made by EzioChiu.
 */

@protocol PGGraphIngestPerson <NSObject>

@required

- (NSString *)UUID;
- (NSDate *)anniversaryDate;
- (NSDate *)birthdayDate;
- (NSString *)contactID;
- (NSString *)fullName;
- (bool)isFavorite;
- (bool)isMe;
- (bool)isUserCreated;
- (NSDictionary *)locationsByAddressTypes;
- (unsigned long long)relationship;

@end
