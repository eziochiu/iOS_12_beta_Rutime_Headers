/* made by EzioChiu.
 */

@protocol PVVisionIntegrating <NSObject>

@required

- (void)configureRequest:(VNRequest *)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;

@optional

- (void)performVisionForcedCleanup;
- (void)performVisionForcedCleanupWithOptions:(NSDictionary *)arg1;

@end
