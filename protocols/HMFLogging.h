/* made by EzioChiu.
 */

@protocol HMFLogging <NSObject>

@required

+ (HMFLogCategory *)logCategory;

@optional

- (NSString *)logIdentifier;

@end
