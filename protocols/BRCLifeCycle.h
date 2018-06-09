/* made by EzioChiu.
 */

@protocol BRCLifeCycle <NSObject>

@required

- (void)cancel;
- (void)close;
- (bool)isCancelled;
- (void)resume;

@end
