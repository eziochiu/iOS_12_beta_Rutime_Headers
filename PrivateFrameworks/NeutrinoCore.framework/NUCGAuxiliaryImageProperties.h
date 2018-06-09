/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCGAuxiliaryImageProperties : NSObject <NUDepthProperties, NUPortraitEffectsMatteProperties> {
    NSDictionary * _auxiliaryData;
    NSString * _auxiliaryType;
    AVDepthData * _depthData;
    id  _imageSource;
    AVPortraitEffectsMatte * _portraitEffectsMatte;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (retain) NSDictionary *auxiliaryData;
@property (copy) NSString *auxiliaryType;
@property (readonly, copy) NSString *debugDescription;
@property (retain) AVDepthData *depthData;
@property (readonly) NSString *depthType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) AVPortraitEffectsMatte *portraitEffectsMatte;
@property struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)auxiliaryData;
- (id)auxiliaryData:(out id*)arg1;
- (id)auxiliaryType;
- (id)depthData;
- (id)depthData:(out id*)arg1;
- (id)depthType;
- (id)description;
- (id)initWitProperties:(id)arg1 imageSource:(struct CGImageSource { }*)arg2;
- (id)portraitEffectsMatte;
- (id)portraitEffectsMatte:(out id*)arg1;
- (void)setAuxiliaryData:(id)arg1;
- (void)setAuxiliaryType:(id)arg1;
- (void)setDepthData:(id)arg1;
- (void)setPortraitEffectsMatte:(id)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })size;

@end
