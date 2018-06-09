/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkParticleDescriptor : NSObject {
    bool  _adjustEndCapParticleAlpha;
    double  _dynamicStep;
    long long  _particleCount;
    unsigned long long  _particleRotation;
    struct CGSize { 
        double width; 
        double height; 
    }  _particleSize;
    double  _particleSpacing;
    struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { 
        struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { 
            struct PKFunction {} *__value_; 
        } __ptr_; 
    }  _particleSpacingFunction;
    struct CGImage { } * _textureImage;
    NSString * _textureName;
}

@property (nonatomic) long long particleCount;
@property (nonatomic) unsigned long long particleRotation;
@property (nonatomic) struct CGSize { double x1; double x2; } particleSize;
@property (nonatomic) double particleSpacing;
@property (nonatomic, retain) struct CGImage { }*textureImage;
@property (nonatomic, copy) NSString *textureName;

+ (id)particleDescriptorWithName:(id)arg1 texture:(struct CGImage { }*)arg2 particleSpacing:(double)arg3 particleCount:(long long)arg4 particleSize:(struct CGSize { double x1; double x2; })arg5 particleRotation:(unsigned long long)arg6;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)adjustEndCapParticleAlpha;
- (double)dynamicStep;
- (long long)particleCount;
- (unsigned long long)particleRotation;
- (struct CGSize { double x1; double x2; })particleSize;
- (double)particleSpacing;
- (struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction {} *x_1_1_1; } x1; }*)particleSpacingFunction;
- (void)setAdjustEndCapParticleAlpha:(bool)arg1;
- (void)setDynamicStep:(double)arg1;
- (void)setParticleCount:(long long)arg1;
- (void)setParticleRotation:(unsigned long long)arg1;
- (void)setParticleSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setParticleSpacing:(double)arg1;
- (void)setParticleSpacingFunction:(struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction {} *x_1_1_1; } x1; })arg1;
- (void)setTextureImage:(struct CGImage { }*)arg1;
- (void)setTextureName:(id)arg1;
- (struct CGImage { }*)textureImage;
- (id)textureName;

@end
