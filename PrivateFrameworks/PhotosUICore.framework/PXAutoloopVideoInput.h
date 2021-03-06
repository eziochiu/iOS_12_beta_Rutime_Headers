/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopVideoInput : NSObject {
    AVAsset * _asset;
    NSURL * _imageURL;
    PXAutoloopVideoRecipe * _recipe;
}

@property (nonatomic, readonly, copy) AVAsset *asset;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) PXAutoloopVideoRecipe *recipe;

+ (id)inputWithAsset:(id)arg1 imageURL:(id)arg2 recipe:(id)arg3;

- (void).cxx_destruct;
- (id)asset;
- (id)imageURL;
- (id)initWithAsset:(id)arg1 imageURL:(id)arg2 recipe:(id)arg3;
- (id)recipe;

@end
