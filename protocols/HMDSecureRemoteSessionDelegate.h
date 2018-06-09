/* made by EzioChiu.
 */

@protocol HMDSecureRemoteSessionDelegate <NSObject>

@required

- (void)secureRemoteSession:(HMDSecureRemoteSession *)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional

- (void)secureRemoteSession:(HMDSecureRemoteSession *)arg1 didCloseWithError:(NSError *)arg2;

@end
