/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUBufferRenderRequest : NUImageRenderRequest

@property <NUMutableBufferImage> *targetBufferImage;

- (id)newRenderJob;
- (void)setTargetBufferImage:(id)arg1;
- (void)submit:(id /* block */)arg1;
- (id)targetBufferImage;

@end
