/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRDeferredElementInfo : NSObject {
    NSMutableArray * _faces;
    NSObject<OS_dispatch_semaphore> * _infoLoaded;
}

@property (nonatomic, readonly) NSMutableArray *faces;

- (void).cxx_destruct;
- (id)faces;
- (id)initAsCubemap:(bool)arg1;

@end
