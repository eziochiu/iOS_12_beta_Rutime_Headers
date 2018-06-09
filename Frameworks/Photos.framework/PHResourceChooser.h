/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceChooser : NSObject {
    PHRecyclableObjectVendor * _bagVendor;
}

+ (id)sharedResourceChooser;

- (void).cxx_destruct;
- (short)_resourceVersionFromVideoRequestVersion:(long long)arg1 assetHasAdjustments:(bool)arg2;
- (id)_resourceVersionsFromImageRequestVersion:(long long)arg1 assetHasAdjustments:(bool)arg2;
- (id)chooseFromHintsForAsset:(id)arg1 pixelSize:(struct CGSize { double x1; double x2; })arg2 version:(long long)arg3 choosingPolicy:(long long)arg4 loadingMode:(long long)arg5 excludingKeys:(id)arg6;
- (void)chooseResourceForAsset:(id)arg1 pixelSize:(struct CGSize { double x1; double x2; })arg2 version:(long long)arg3 loadingMode:(long long)arg4 resourceRecipeID:(unsigned int*)arg5 resourceIdentity:(id*)arg6 resourceBagIfLocal:(id*)arg7;
- (id)init;
- (void)recycleBag:(id)arg1;

@end
