/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoExportRequest : NUExportRequest {
    NUColorSpace * _cachedColorSpace;
    NSArray * _metadata;
    NSDictionary * _outputSettings;
    bool  _requiresVideoComposition;
}

@property (retain) NUColorSpace *cachedColorSpace;
@property (readonly) NUColorSpace *colorSpace;
@property (copy) NSArray *metadata;
@property (copy) NSDictionary *outputSettings;
@property (nonatomic) bool requiresVideoComposition;

- (void).cxx_destruct;
- (id)cachedColorSpace;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)metadata;
- (id)newRenderJob;
- (id)outputSettings;
- (bool)requiresVideoComposition;
- (void)setCachedColorSpace:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setRequiresVideoComposition:(bool)arg1;
- (void)submit:(id /* block */)arg1;

@end
