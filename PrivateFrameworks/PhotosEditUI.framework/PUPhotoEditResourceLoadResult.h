/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditResourceLoadResult : NSObject {
    <PUEditableAsset> * _asset;
    bool  _assetLoadingAsRaw;
    PLPhotoEditMutableModel * _editModel;
    UIImage * _image;
    NSURL * _imageURL;
    NSString * _imageUTI;
    PUPhotoEditIrisModel * _livePhotoModel;
    long long  _penultimateAvailability;
    long long  _retrievedVersion;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoComplementDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoComplementStillImageTime;
    NSURL * _videoComplementURL;
}

@property (setter=_setAsset:, nonatomic, retain) <PUEditableAsset> *asset;
@property (setter=_setAssetLoadingAsRaw:, nonatomic) bool assetLoadingAsRaw;
@property (setter=_setEditModel:, nonatomic, retain) PLPhotoEditMutableModel *editModel;
@property (setter=_setImage:, nonatomic, retain) UIImage *image;
@property (setter=_setImageURL:, nonatomic, retain) NSURL *imageURL;
@property (setter=_setImageUTI:, nonatomic, retain) NSString *imageUTI;
@property (setter=_setLivePhotoModel:, nonatomic, retain) PUPhotoEditIrisModel *livePhotoModel;
@property (setter=_setPenultimateAvailability:, nonatomic) long long penultimateAvailability;
@property (getter=isPenultimateAvailable, nonatomic, readonly) bool penultimateAvailable;
@property (setter=_setRetrievedVersion:, nonatomic) long long retrievedVersion;
@property (setter=_setVideoComplementDuration:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoComplementDuration;
@property (setter=_setVideoComplementStillImageTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoComplementStillImageTime;
@property (setter=_setVideoComplementURL:, nonatomic, retain) NSURL *videoComplementURL;

+ (id)resultWithAdjustmentsLoadResult:(id)arg1;

- (void).cxx_destruct;
- (void)_setAsset:(id)arg1;
- (void)_setAssetLoadingAsRaw:(bool)arg1;
- (void)_setEditModel:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageURL:(id)arg1;
- (void)_setImageUTI:(id)arg1;
- (void)_setLivePhotoModel:(id)arg1;
- (void)_setPenultimateAvailability:(long long)arg1;
- (void)_setRetrievedVersion:(long long)arg1;
- (void)_setVideoComplementDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoComplementStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoComplementURL:(id)arg1;
- (id)asset;
- (bool)assetLoadingAsRaw;
- (id)editModel;
- (id)editSource;
- (id)image;
- (id)imageURL;
- (id)imageUTI;
- (bool)isPenultimateAvailable;
- (id)livePhotoModel;
- (long long)penultimateAvailability;
- (long long)retrievedVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoComplementDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoComplementStillImageTime;
- (id)videoComplementURL;

@end
