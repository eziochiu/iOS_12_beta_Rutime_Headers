/* made by EzioChiu.
 */

@protocol BRCancellable <NSObject>

@required

- (oneway void)invalidate;

@end
