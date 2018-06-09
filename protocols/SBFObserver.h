/* made by EzioChiu.
 */

@protocol SBFObserver <NSObject>

@required

- (void)observerDidComplete;
- (void)observerDidFailWithError:(NSError *)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
