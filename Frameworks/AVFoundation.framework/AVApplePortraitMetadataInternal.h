/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVApplePortraitMetadataInternal : NSObject {
    float  apertureFocalRatio;
    NSData * faceObservationsData;
    int  faceOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  focusRectangle;
    NSIndexSet * indexesOfShallowDepthOfFieldObservations;
    float  luminanceNoiseAmplitude;
    float  minimumApertureFocalRatio;
    int  version;
}

@property (nonatomic) float apertureFocalRatio;
@property (nonatomic, retain) NSData *faceObservationsData;
@property (nonatomic) int faceOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusRectangle;
@property (nonatomic, retain) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (nonatomic) float luminanceNoiseAmplitude;
@property (nonatomic) float minimumApertureFocalRatio;
@property (nonatomic) int version;

- (float)apertureFocalRatio;
- (void)dealloc;
- (id)faceObservationsData;
- (int)faceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusRectangle;
- (id)indexesOfShallowDepthOfFieldObservations;
- (id)init;
- (float)luminanceNoiseAmplitude;
- (float)minimumApertureFocalRatio;
- (void)setApertureFocalRatio:(float)arg1;
- (void)setFaceObservationsData:(id)arg1;
- (void)setFaceOrientation:(int)arg1;
- (void)setFocusRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndexesOfShallowDepthOfFieldObservations:(id)arg1;
- (void)setLuminanceNoiseAmplitude:(float)arg1;
- (void)setMinimumApertureFocalRatio:(float)arg1;
- (void)setVersion:(int)arg1;
- (int)version;

@end
