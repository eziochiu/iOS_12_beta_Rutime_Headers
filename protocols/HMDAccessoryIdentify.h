/* made by EzioChiu.
 */

@protocol HMDAccessoryIdentify <NSObject>

@required

- (bool)supportsIdentify;

@optional

- (void)identifyAccessory:(HMFMessage *)arg1;

@end
