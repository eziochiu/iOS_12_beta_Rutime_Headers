/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUDepthDataRenderRequest : NURenderRequest {
    long long  _depthType;
}

@property long long depthType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)depthType;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)setDepthType:(long long)arg1;
- (void)submit:(id /* block */)arg1;

@end
