/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDuplicatePreviewViewController : UIViewController {
    NSArray * _assets;
    PUStackView * _stackView;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
}

@property (nonatomic, copy) NSArray *assets;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageTime;

- (void).cxx_destruct;
- (void)_handleImageResult:(id)arg1 info:(id)arg2 forIndex:(int)arg3;
- (void)_handleVideoResult:(id)arg1 info:(id)arg2 forIndex:(int)arg3;
- (id)assets;
- (id)initWithAssets:(id)arg1 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAssets:(id)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageTime;
- (void)viewDidLoad;

@end
