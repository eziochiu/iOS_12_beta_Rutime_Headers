/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMetalRenderer : NURenderer {
    <MTLDevice> * _device;
}

- (void).cxx_destruct;
- (id)_textureForSurface:(id)arg1 owner:(id)arg2;
- (unsigned long long)_textureFormatForPixelFormat:(id)arg1;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (id)initWithCIContext:(id)arg1;
- (id)initWithMetalDevice:(id)arg1 options:(id)arg2;
- (id)name;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;

@end
