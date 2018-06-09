/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTexture : NSObject <MDLNamed> {
    bool  _alphaValuesSet;
    NSData * _bottomLeftOriginData;
    long long  _channelEncoding;
    bool  _hasAlphaValues;
    NSString * _name;
    bool  _selfCreating;
    struct MDLTextureData { 
        char *topLeftBytesForMip[16]; 
        char *bottomLeftBytesForMip[16]; 
        int channelCount; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*dimensions; 
    }  _textureData;
    NSData * _topLeftOriginData;
}

@property (nonatomic, readonly) unsigned long long channelCount;
@property (nonatomic, readonly) long long channelEncoding;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic) bool hasAlphaValues;
@property (nonatomic) bool isCube;
@property (nonatomic, readonly) unsigned long long mipLevelCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) long long rowStride;

+ (id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2;
+ (id)irradianceTextureCubeWithTexture:(void *)arg1 name:(void *)arg2 dimensions:(void *)arg3; // needs 3 arg types, found 2: id, id
+ (id)irradianceTextureCubeWithTexture:(void *)arg1 name:(void *)arg2 dimensions:(void *)arg3 roughness:(void *)arg4; // needs 4 arg types, found 3: id, id, float
+ (id)textureCubeWithImagesNamed:(id)arg1;
+ (id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2;
+ (id)textureFromResource:(id)arg1;
+ (id)textureNamed:(id)arg1;
+ (id)textureNamed:(id)arg1 assetResolver:(id)arg2;
+ (id)textureNamed:(id)arg1 bundle:(id)arg2;
+ (id)textureWithURL:(id)arg1;
+ (id)textureWithURL:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)allocateDataAtLevel:(long long)arg1;
- (unsigned long long)channelCount;
- (long long)channelEncoding;
- (void)clearTexelData;
- (void)dimensions;
- (id)generateDataAtLevel:(long long)arg1;
- (bool)hasAlphaValues;
- (struct CGImage { }*)imageFromTexture;
- (struct CGImage { }*)imageFromTextureAtLevel:(unsigned long long)arg1;
- (id)init;
- (id)initWithData:(void *)arg1 topLeftOrigin:(void *)arg2 name:(void *)arg3 dimensions:(void *)arg4 rowStride:(void *)arg5 channelCount:(void *)arg6 channelEncoding:(void *)arg7 isCube:(void *)arg8; // needs 8 arg types, found 7: id, bool, id, long long, unsigned long long, long long, bool
- (bool)isCube;
- (void)loadDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(bool)arg2;
- (void)loadDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(bool)arg2;
- (unsigned long long)mipLevelCount;
- (id)name;
- (long long)rowStride;
- (void)setHasAlphaValues:(bool)arg1;
- (void)setIsCube:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(long long)arg2;
- (void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(long long)arg2;
- (id)texelDataWithBottomLeftOrigin;
- (id)texelDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(bool)arg2;
- (id)texelDataWithTopLeftOrigin;
- (id)texelDataWithTopLeftOrigin:(unsigned long long)arg1;
- (id)texelDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(bool)arg2;
- (struct MDLTextureData { char *x1[16]; char *x2[16]; int x3; unsigned long long x4; bool x5; }*)textureData;
- (bool)writeToURL:(id)arg1;
- (bool)writeToURL:(id)arg1 level:(unsigned long long)arg2;
- (bool)writeToURL:(id)arg1 type:(struct __CFString { }*)arg2;
- (bool)writeToURL:(id)arg1 type:(struct __CFString { }*)arg2 level:(unsigned long long)arg3;

@end
