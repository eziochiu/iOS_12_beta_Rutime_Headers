/* made by EzioChiu.
 */

@protocol BWQRCodeSceneObserver <NSObject>

@required

- (void)sceneConfidenceDidChangeForQR:(float)arg1 document:(float)arg2;

@end
