/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCreationOptions : NSObject {
    bool  _copyStillPhotoFromLivePhoto;
    id /* block */  _destinationAssetAvailabilityHandler;
    bool  _resetUserSpecificMetadata;
    bool  _shouldDownloadOrCloudReReferenceMissingResources;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillSourceTime;
}

@property (nonatomic) bool copyStillPhotoFromLivePhoto;
@property (nonatomic, copy) id /* block */ destinationAssetAvailabilityHandler;
@property (nonatomic) bool resetUserSpecificMetadata;
@property (nonatomic) bool shouldDownloadOrCloudReReferenceMissingResources;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillSourceTime;

- (void).cxx_destruct;
- (bool)copyStillPhotoFromLivePhoto;
- (id /* block */)destinationAssetAvailabilityHandler;
- (id)init;
- (bool)resetUserSpecificMetadata;
- (void)setCopyStillPhotoFromLivePhoto:(bool)arg1;
- (void)setDestinationAssetAvailabilityHandler:(id /* block */)arg1;
- (void)setResetUserSpecificMetadata:(bool)arg1;
- (void)setShouldDownloadOrCloudReReferenceMissingResources:(bool)arg1;
- (void)setStillSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)shouldDownloadOrCloudReReferenceMissingResources;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillSourceTime;

@end
