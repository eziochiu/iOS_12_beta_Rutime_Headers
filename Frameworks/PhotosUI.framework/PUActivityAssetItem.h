/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivityAssetItem : NSObject {
    PHAsset * _asset;
    bool  _useStillImage;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic) bool useStillImage;

+ (id)itemsForAssets:(id)arg1;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActivityAssetItem:(id)arg1;
- (id)localIdentifier;
- (void)setUseStillImage:(bool)arg1;
- (bool)useStillImage;

@end
