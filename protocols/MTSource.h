/* made by EzioChiu.
 */

@protocol MTSource <NSObject>

@required

- (NSString *)sourceIdentifier;

@optional

- (bool)donatesIntent;
- (bool)isFromOtherDevice;

@end
