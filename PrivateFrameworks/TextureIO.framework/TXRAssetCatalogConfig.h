/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRAssetCatalogConfig : NSObject {
    TXRAssetCatalogFileAttributes * _baseFileAttributes;
    unsigned long long  _displayColorSpace;
    NSMutableSet * _fileAttributesList;
    unsigned long long  _graphicsFeatureSet;
    unsigned long long  _idiom;
    unsigned long long  _memory;
    unsigned long long  _mipmapOption;
    unsigned long long  _pixelFormat;
    unsigned long long  _scaleFactor;
    TXRTexture * _texture;
}

@property (nonatomic, retain) TXRAssetCatalogFileAttributes *baseFileAttributes;
@property (nonatomic) unsigned long long displayColorSpace;
@property (nonatomic, readonly) NSSet *fileAttributesList;
@property (nonatomic) unsigned long long graphicsFeatureSet;
@property (nonatomic) unsigned long long idiom;
@property (nonatomic) unsigned long long memory;
@property (nonatomic) unsigned long long mipmapOption;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long scaleFactor;
@property (nonatomic, readonly) TXRTexture *texture;

- (void).cxx_destruct;
- (void)addFileAttributesForLevel:(unsigned long long)arg1;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2 fileFormat:(unsigned long long)arg3 colorSpace:(struct CGColorSpace { }*)arg4 exifOrientation:(unsigned char)arg5;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 fileFormat:(unsigned long long)arg2 colorSpace:(struct CGColorSpace { }*)arg3 exifOrientation:(unsigned char)arg4;
- (id)baseFileAttributes;
- (unsigned long long)displayColorSpace;
- (id)fileAttributesList;
- (unsigned long long)graphicsFeatureSet;
- (unsigned long long)idiom;
- (id)initWithTexture:(id)arg1;
- (unsigned long long)memory;
- (unsigned long long)mipmapOption;
- (unsigned long long)pixelFormat;
- (unsigned long long)scaleFactor;
- (void)setBaseFileAttributes:(id)arg1;
- (void)setDisplayColorSpace:(unsigned long long)arg1;
- (void)setGraphicsFeatureSet:(unsigned long long)arg1;
- (void)setIdiom:(unsigned long long)arg1;
- (void)setMemory:(unsigned long long)arg1;
- (void)setMipmapOption:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setScaleFactor:(unsigned long long)arg1;
- (id)texture;

@end
