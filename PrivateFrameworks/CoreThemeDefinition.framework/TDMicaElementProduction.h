/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>

@property (nonatomic, retain) TDMicaAsset *asset;

- (id)associatedFileURLWithDocument:(id)arg1;
- (id)baseKeySpec;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)dataFromAttributes;
- (void)dealloc;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(bool)arg2;
- (bool)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id*)arg3;
- (id)relativePath;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)setAttributesFromData:(id)arg1;

@end
