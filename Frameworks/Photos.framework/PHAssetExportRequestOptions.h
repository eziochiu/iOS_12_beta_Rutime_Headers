/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetExportRequestOptions : NSObject {
    bool  _dontAllowRAW;
    bool  _flattenSlomoVideos;
    bool  _treatLivePhotoAsStill;
    long long  _variant;
}

@property (nonatomic) bool dontAllowRAW;
@property (nonatomic) bool flattenSlomoVideos;
@property (nonatomic) bool treatLivePhotoAsStill;
@property (nonatomic) long long variant;

- (id)description;
- (bool)dontAllowRAW;
- (bool)flattenSlomoVideos;
- (void)setDontAllowRAW:(bool)arg1;
- (void)setFlattenSlomoVideos:(bool)arg1;
- (void)setTreatLivePhotoAsStill:(bool)arg1;
- (void)setVariant:(long long)arg1;
- (bool)treatLivePhotoAsStill;
- (long long)variant;

@end
