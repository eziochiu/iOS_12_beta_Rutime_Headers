/* made by EzioChiu.
 */

@protocol GKExtensionHostProtocol <NSObject>

@required

- (GKGame *)game;
- (void)messageFromExtension:(NSData *)arg1;
- (void)setGame:(GKGame *)arg1;

@optional

- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;

@end
