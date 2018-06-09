/* made by EzioChiu.
 */

@protocol TSUTraceableResourceToken <NSObject>

@required

- (NSArray *)acquireCallStack;
- (NSObject *)context;
- (NSString *)intent;
- (void)pauseTimeout;
- (NSArray *)relinquishCallStack;
- (void)resumeTimeout;
- (double)timeout;

@end
