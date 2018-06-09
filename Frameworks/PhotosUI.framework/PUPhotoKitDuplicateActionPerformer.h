/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitDuplicateActionPerformer : PUPhotoKitActionPerformer {
    long long  _action;
    PUDuplicateActionController * _duplicateActionController;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _newStillImageTime;
}

@property (nonatomic) long long action;
@property (nonatomic, retain) PUDuplicateActionController *duplicateActionController;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } newStillImageTime;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (long long)action;
- (id)duplicateActionController;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })newStillImageTime;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setAction:(long long)arg1;
- (void)setDuplicateActionController:(id)arg1;
- (void)setNewStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
