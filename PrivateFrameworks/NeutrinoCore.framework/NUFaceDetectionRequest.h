/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFaceDetectionRequest : NURenderRequest {
    long long  _maxFaceCount;
    <NUScalePolicy> * _scalePolicy;
}

@property long long maxFaceCount;
@property (retain) <NUScalePolicy> *scalePolicy;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithComposition:(id)arg1;
- (long long)maxFaceCount;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)scalePolicy;
- (void)setMaxFaceCount:(long long)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
