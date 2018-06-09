/* made by EzioChiu.
 */

@protocol EKCancellableRemoteOperation <NSObject>

@required

- (void)cancel;
- (void)disconnect;

@optional

- (void)receivedBatchResultsFromServer:(id)arg1 finished:(bool)arg2;

@end
