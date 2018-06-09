/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationRenderResult : NSObject {
    NSDictionary * _analysisResult;
    PHAsset * _asset;
    PLPhotoEditModel * _editModel;
    NSError * _error;
    bool  _fullsizeRender;
    UIImage * _image;
    NSURL * _imageURL;
    bool  _success;
    long long  _variationType;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
    NSURL * _videoURL;
}

@property (nonatomic, readonly, copy) NSDictionary *analysisResult;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly, copy) PLPhotoEditModel *editModel;
@property (nonatomic, readonly) NSError *error;
@property (getter=isFullsizeRender, nonatomic) bool fullsizeRender;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) long long variationType;
@property (nonatomic, retain) AVAsset *videoAsset;
@property (nonatomic, retain) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) NSURL *videoURL;

- (void).cxx_destruct;
- (id)analysisResult;
- (id)asset;
- (id)description;
- (id)editModel;
- (id)error;
- (id)image;
- (id)imageURL;
- (id)init;
- (id)initWithAsset:(id)arg1 variationType:(long long)arg2 imageURL:(id)arg3 videoURL:(id)arg4 analysisResult:(id)arg5 editModel:(id)arg6 success:(bool)arg7 error:(id)arg8;
- (bool)isFullsizeRender;
- (void)setFullsizeRender:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setVideoAsset:(id)arg1;
- (void)setVideoComposition:(id)arg1;
- (bool)success;
- (long long)variationType;
- (id)videoAsset;
- (id)videoComposition;
- (id)videoURL;

@end
