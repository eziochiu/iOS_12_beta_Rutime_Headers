/* made by EzioChiu.
 */

@protocol CNUIUserActionURLOpener <NSObject>

@required

- (CNFuture *)openURL:(NSURL *)arg1 isSensitive:(bool)arg2 withScheduler:(id <CNScheduler>)arg3;
- (CNFuture *)openURL:(NSURL *)arg1 withScheduler:(id <CNScheduler>)arg2;

@end
