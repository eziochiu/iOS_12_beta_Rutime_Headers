/* made by EzioChiu.
 */

@protocol CKDURLRequestAuthRetryDelegate <NSObject>

@required

- (void)requestDidBeginWaitingForUserAuth:(CKDURLRequest *)arg1;
- (void)requestDidEndWaitingForUserAuth:(CKDURLRequest *)arg1;

@end
