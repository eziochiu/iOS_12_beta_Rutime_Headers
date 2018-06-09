/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIScrollViewScrollAnimation : UIAnimation {
    double  _accuracy;
    bool  _adjustsForContentOffsetDelta;
    CABasicAnimation * _customAnimation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetOffset;
}

- (void).cxx_destruct;
- (void)adjustForContentOffsetDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (float)progressForFraction:(float)arg1;
- (void)setProgress:(float)arg1;

@end
