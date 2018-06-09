/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAssetsForInputModeLevel : NSObject {
    NSMutableDictionary * _assetsByAttributes;
    NSString * _inputModeLevel;
    long long  _numberOfAssertions;
}

@property (nonatomic, readonly) NSString *inputModeLevel;

- (void).cxx_destruct;
- (void)addAssertion;
- (void)addAsset:(id)arg1;
- (id)assetContentItemsMatching:(id)arg1;
- (id)assetVersionsForAttributes:(id)arg1;
- (void)gatherStatistics:(id)arg1;
- (bool)hasAssertions;
- (id)initWithInputModeLevel:(id)arg1;
- (id)inputModeLevel;
- (bool)isEmpty;
- (bool)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (id)recursiveDescription;
- (void)removeAssertion;
- (void)removeEmptyAssets;

@end
