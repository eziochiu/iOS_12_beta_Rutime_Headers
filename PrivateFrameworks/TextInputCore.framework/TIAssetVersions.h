/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAssetVersions : NSObject {
    NSMutableSet * _assets;
    TIAssetAttributes * _attributes;
    TIAsset * _currentAsset;
}

@property (nonatomic, readonly) NSMutableSet *assets;
@property (nonatomic, readonly) TIAssetAttributes *attributes;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) TIAsset *currentAsset;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)assetContentItemsMatching:(id)arg1;
- (id)assets;
- (id)attributes;
- (unsigned long long)count;
- (id)currentAsset;
- (id)initWithAttributes:(id)arg1;
- (bool)isEmpty;
- (bool)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (id)recursiveDescription;
- (void)setCurrentAsset:(id)arg1;

@end
