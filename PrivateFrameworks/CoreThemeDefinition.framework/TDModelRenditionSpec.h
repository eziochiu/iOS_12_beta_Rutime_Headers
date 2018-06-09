/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDModelRenditionSpec : TDRenditionSpec

@property (nonatomic, retain) TDModelAsset *asset;
@property (nonatomic, retain) NSSet *childRenditions;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)processMesh:(id)arg1 withParent:(id)arg2 parentKeySpec:(id)arg3 inDocument:(id)arg4;
- (void)processSubModelObjectsInDocument:(id)arg1;

@end
