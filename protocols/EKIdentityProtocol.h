/* made by EzioChiu.
 */

@protocol EKIdentityProtocol <NSObject>

@required

- (NSURL *)URL;
- (NSString *)emailAddress;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)name;
- (NSString *)phoneNumber;

@optional

- (NSPredicate *)contactPredicate;

@end
