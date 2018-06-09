/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDraggingItemLocalObject : NSObject {
    PHAsset * _asset;
    NSIndexPath * _hintIndexPath;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSIndexPath *hintIndexPath;

- (void).cxx_destruct;
- (id)asset;
- (id)hintIndexPath;
- (id)initWithAsset:(id)arg1 hintIndexPath:(id)arg2;

@end
