/* made by EzioChiu.
 */

@protocol MFObserver <NSObject>

@required

- (void)observerDidComplete;
- (void)observerDidFailWithError:(NSError *)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
