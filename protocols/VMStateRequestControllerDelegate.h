/* made by EzioChiu.
 */

@protocol VMStateRequestControllerDelegate <NSObject>

@optional

- (void)stateRequestController:(VMStateRequestController *)arg1 didSendStateRequest:(VMStateRequest *)arg2 error:(NSError *)arg3;

@end
