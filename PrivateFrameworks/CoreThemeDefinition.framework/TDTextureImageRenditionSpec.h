/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDTextureImageRenditionSpec : TDRenditionSpec

@property (nonatomic, retain) TDTextureAsset *asset;
@property (nonatomic, retain) TDThemeCompressionType *compressionType;
@property (nonatomic) bool flipped;
@property (nonatomic, readonly) TDTextureRenditionSpec *texture;
@property (nonatomic, readonly) long long textureFormat;
@property (nonatomic, retain) TDTextureMipLevel *textureLevelAssignment;

- (struct CGImage { }*)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int*)arg3;
- (int)_pixelFormatOfCGImage:(struct CGImage { }*)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (bool)isCubeMap;
- (id)texture;
- (id)textureFacesWithDocument:(id)arg1;
- (long long)textureFormat;
- (bool)updatePackingPropertiesWithDocument:(id)arg1;

@end
