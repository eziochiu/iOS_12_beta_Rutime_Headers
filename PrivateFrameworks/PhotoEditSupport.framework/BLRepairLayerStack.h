/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRepairLayerStack : BLBaseLayerStack {
    UIImage * _analysisImage;
    int  _mode;
    UIImage * _redEyeSourceImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _redEyeSourceSize;
    UIImage * _repairSourceImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _repairSourceSize;
    UIImage * _sourceImage;
}

@property (nonatomic, retain) UIImage *analysisImage;
@property (nonatomic) int mode;
@property (nonatomic) UIImage *redEyeRepairedImage;
@property (nonatomic, retain) UIImage *redEyeSourceImage;
@property (nonatomic) struct CGSize { double x1; double x2; } redEyeSourceSize;
@property (nonatomic, retain) UIImage *repairSourceImage;
@property (nonatomic) struct CGSize { double x1; double x2; } repairSourceSize;
@property (nonatomic, retain) UIImage *sourceImage;

+ (id)addAutoRedEyeCorrection:(id)arg1 toCurrentStrokesDataDictionary:(id)arg2 forSourceSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)layerStack;
+ (int)maxEdgeSize;

- (void).cxx_destruct;
- (id)analysisImage;
- (void)dealloc;
- (bool)hasRedEye;
- (bool)hasRepair;
- (bool)haveLayerMask;
- (id)imagePatchListForLayerStack;
- (id)init;
- (int)mode;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (struct CGImage { }*)newImageForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (bool)readyToDraw;
- (bool)readyToDrawForMode:(int)arg1;
- (void)redEyeChanged;
- (id)redEyeRepairedImage;
- (id)redEyeSourceImage;
- (struct CGSize { double x1; double x2; })redEyeSourceSize;
- (void)repairChanged;
- (id)repairSourceImage;
- (struct CGSize { double x1; double x2; })repairSourceSize;
- (void)setAnalysisImage:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setRedEyeRepairedImage:(id)arg1;
- (void)setRedEyeSourceImage:(id)arg1;
- (void)setRedEyeSourceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRepairSourceImage:(id)arg1;
- (void)setRepairSourceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceImage:(id)arg1;
- (void)setStrokesDataDictionary:(id)arg1;
- (id)sourceImage;
- (id)strokesDataDictionary;
- (double)timestamp;

@end
