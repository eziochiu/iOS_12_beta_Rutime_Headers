/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUImageProperties : NSObject <NUImageProperties> {
    long long  _alphaInfo;
    struct CGColorSpace { } * _colorSpace;
    long long  _componentInfo;
    <NUDepthProperties> * _depthProperties;
    NSString * _fileUTI;
    NSDictionary * _metadata;
    long long  _orientation;
    <NUPortraitEffectsMatteProperties> * _portraitEffectsMatteProperties;
    <NURAWImageProperties> * _rawProperties;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property long long alphaInfo;
@property struct CGColorSpace { }*colorSpace;
@property long long componentInfo;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <NUDepthProperties> *depthProperties;
@property (readonly, copy) NSString *description;
@property (retain) NSString *fileUTI;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *metadata;
@property long long orientation;
@property (retain) <NUPortraitEffectsMatteProperties> *portraitEffectsMatteProperties;
@property (retain) <NURAWImageProperties> *rawProperties;
@property struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)alphaInfo;
- (struct CGColorSpace { }*)colorSpace;
- (long long)componentInfo;
- (id)depthProperties;
- (id)description;
- (id)fileUTI;
- (id)metadata;
- (long long)orientation;
- (id)portraitEffectsMatteProperties;
- (id)rawProperties;
- (void)setAlphaInfo:(long long)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setComponentInfo:(long long)arg1;
- (void)setDepthProperties:(id)arg1;
- (void)setFileUTI:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPortraitEffectsMatteProperties:(id)arg1;
- (void)setRawProperties:(id)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })size;

@end
