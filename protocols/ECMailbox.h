/* made by EzioChiu.
 */

@protocol ECMailbox <NSCopying, NSObject>

@required

- (NSString *)name;
- (NSString *)persistentID;
- (long long)type;

@end
