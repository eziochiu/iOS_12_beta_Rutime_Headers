/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDTextureRenditionSpec : TDRenditionSpec

@property (nonatomic, retain) TDThemeCompressionType *compressionType;
@property (nonatomic) bool cubeMap;
@property (nonatomic, retain) NSSet *mipLevels;
@property (nonatomic, retain) TDTexturePixelFormat *pixelFormat;

- (bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

@end
