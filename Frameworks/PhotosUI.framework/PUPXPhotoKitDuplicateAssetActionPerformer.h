/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer {
    long long  _action;
    PUDuplicateActionController * _duplicateActionController;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
}

@property (nonatomic) long long action;
@property (nonatomic, retain) PUDuplicateActionController *duplicateActionController;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageTime;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void).cxx_destruct;
- (long long)action;
- (id)duplicateActionController;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setAction:(long long)arg1;
- (void)setDuplicateActionController:(id)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageTime;

@end
