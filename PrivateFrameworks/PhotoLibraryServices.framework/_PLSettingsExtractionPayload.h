/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLSettingsExtractionPayload : NSObject {
    PFAdjustment * _adjustmentData;
    double  _baseDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _baseImageSize;
    long long  _baseOrientation;
    PLPhotoEditMutableModel * _model;
}

@property (nonatomic, retain) PFAdjustment *adjustmentData;
@property (nonatomic) double baseDuration;
@property (nonatomic) struct CGSize { double x1; double x2; } baseImageSize;
@property (nonatomic) long long baseOrientation;
@property (nonatomic, retain) PLPhotoEditMutableModel *model;

- (void).cxx_destruct;
- (id)adjustmentData;
- (double)baseDuration;
- (struct CGSize { double x1; double x2; })baseImageSize;
- (long long)baseOrientation;
- (id)model;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseDuration:(double)arg1;
- (void)setBaseImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBaseOrientation:(long long)arg1;
- (void)setModel:(id)arg1;

@end
