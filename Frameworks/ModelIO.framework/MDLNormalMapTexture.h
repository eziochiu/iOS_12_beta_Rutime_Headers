/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLNormalMapTexture : MDLTexture {
    float  _contrast;
    float  _smoothness;
    MDLTexture * _sourceTexture;
}

- (void).cxx_destruct;
- (id)generateDataAtLevel:(long long)arg1;
- (id)initByGeneratingNormalMapWithTexture:(id)arg1 name:(id)arg2 smoothness:(float)arg3 contrast:(float)arg4;

@end
