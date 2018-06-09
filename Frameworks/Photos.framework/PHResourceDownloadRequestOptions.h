/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceDownloadRequestOptions : NSObject {
    bool  _dontAllowRAW;
    bool  _treatLivePhotoAsStill;
}

@property (nonatomic) bool dontAllowRAW;
@property (nonatomic) bool treatLivePhotoAsStill;

- (id)description;
- (bool)dontAllowRAW;
- (void)setDontAllowRAW:(bool)arg1;
- (void)setTreatLivePhotoAsStill:(bool)arg1;
- (bool)treatLivePhotoAsStill;

@end
