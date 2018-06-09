/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleFaceTileImageManagerRequest : NSObject {
    PHAsset * _asset;
    PHFace * _face;
    PHPerson * _person;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) PHFace *face;
@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)asset;
- (id)face;
- (id)initWithPerson:(id)arg1;
- (id)initWithPerson:(id)arg1 face:(id)arg2 asset:(id)arg3;
- (id)person;

@end
