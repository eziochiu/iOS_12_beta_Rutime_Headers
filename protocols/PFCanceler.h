/* made by EzioChiu.
 */

@protocol PFCanceler <NSObject>

@required

- (void)cancel;
- (bool)isCanceled;

@end
