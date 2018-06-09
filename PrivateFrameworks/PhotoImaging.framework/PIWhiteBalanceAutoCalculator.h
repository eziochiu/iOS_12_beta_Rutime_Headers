/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator {
    PIFaceBalanceAutoCalculator * _faceAutoCaculator;
    struct CGColor { } * _grayColor;
    struct CGColor { } * _grayColorXY;
    NUImagePropertiesClient * _imagePropertiesClient;
    bool  _isRAW;
}

- (void).cxx_destruct;
- (struct { double x1[4]; })_chooseNeutralGrayForNonSushi:(struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })arg1;
- (struct { double x1; double x2; })_chooseTempTintForSushi:(struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })arg1 RAWProperties:(id)arg2 brightness:(double)arg3;
- (struct { double x1[4]; })_correctedRGBResultFromResult:(struct { double x1[4]; })arg1;
- (bool)_useTempTint:(struct { double x1[4]; })arg1;
- (void)calculate:(id /* block */)arg1;
- (id)initWithComposition:(id)arg1;

@end
