/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (nonatomic, retain) NSOrderedSet *layerReferences;
@property (nonatomic, retain) TDRadiosityImageRenditionSpec *radiosityImage;

- (void)addLayerReferencesObject:(id)arg1;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)drawFlattenedImageIntoContext:(struct CGContext { }*)arg1 document:(id)arg2;
- (bool)updatePackingPropertiesWithDocument:(id)arg1;

@end
