/* made by EzioChiu.
 */

@protocol FCCommandQueueDelegate <NSObject>

@optional

- (long long)commandQueue:(FCCommandQueue *)arg1 qualityOfServiceForCommand:(FCCommand *)arg2;

@end
