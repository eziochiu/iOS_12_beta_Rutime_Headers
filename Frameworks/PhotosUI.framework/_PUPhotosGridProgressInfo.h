/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PUPhotosGridProgressInfo : NSObject {
    PHAsset * _asset;
    NSIndexPath * _cachedIndexPath;
    PHAssetCollection * _collection;
    NSString * _identifier;
    double  _progress;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) NSIndexPath *cachedIndexPath;
@property (nonatomic, retain) PHAssetCollection *collection;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)asset;
- (id)cachedIndexPath;
- (id)collection;
- (id)identifier;
- (double)progress;
- (void)setAsset:(id)arg1;
- (void)setCachedIndexPath:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProgress:(double)arg1;

@end
