/* made by EzioChiu.
 */

@protocol AVTCancelable <NSObject>

@required

- (void)cancel;
- (bool)isCanceled;

@end
