/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICFauxFlamesView : UIView {
    struct { 
        double imageHeight; 
        double imageWidth; 
        int frameCount; 
        char *fileName; 
    }  _sequenceAttributes;
    long long  _style;
    double  _width;
}

+ (id)_frameImagesForSequence:(struct { double x1; double x2; int x3; char *x4; })arg1;

- (void)_cleanupView;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 screenSize:(long long)arg2;
- (bool)isAnimating;
- (void)setHidden:(bool)arg1;
- (void)start:(bool)arg1;
- (void)stop:(bool)arg1;

@end
