/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumDropSessionContext : NSObject {
    PHAssetCollection * _assetCollection;
    unsigned long long  _numberOfAssets;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)contextWithViewController:(id)arg1 assetCollection:(id)arg2 numberOfAssets:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)assetCollection;
- (unsigned long long)numberOfAssets;
- (id)viewController;

@end
