/* made by EzioChiu.
 */

@protocol FCFeedElement <NSObject, NSCopying>

@required

- (long long)feedElementType;
- (NSString *)identifier;

@end
