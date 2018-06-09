/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMultiPaneScrollingContext : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _previousContentInsetAdditions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousContentOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _previousContentScrollInsetAdditions;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _previousExternalContentInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _previousMaximumContentSizeScrollIndicatorInsetAdditions;
    double  _previousMaximumHeaderHeight;
    double  _previousStabilizingBottomAdditions;
    long long  _snapDecelerationVeloctiyOverrideState;
    double  _snapDownContentOffset;
    long long  _snapState;
    double  _snapUpContentOffset;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previousContentInsetAdditions;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousContentOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previousContentScrollInsetAdditions;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previousExternalContentInset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previousMaximumContentSizeScrollIndicatorInsetAdditions;
@property (nonatomic) double previousMaximumHeaderHeight;
@property (nonatomic) double previousStabilizingBottomAdditions;
@property (nonatomic) long long snapDecelerationVeloctiyOverrideState;
@property (nonatomic) double snapDownContentOffset;
@property (nonatomic) long long snapState;
@property (nonatomic) double snapUpContentOffset;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previousContentInsetAdditions;
- (struct CGPoint { double x1; double x2; })previousContentOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previousContentScrollInsetAdditions;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previousExternalContentInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previousMaximumContentSizeScrollIndicatorInsetAdditions;
- (double)previousMaximumHeaderHeight;
- (double)previousStabilizingBottomAdditions;
- (void)setPreviousContentInsetAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreviousContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousContentScrollInsetAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreviousExternalContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreviousMaximumContentSizeScrollIndicatorInsetAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreviousMaximumHeaderHeight:(double)arg1;
- (void)setPreviousStabilizingBottomAdditions:(double)arg1;
- (void)setSnapDecelerationVeloctiyOverrideState:(long long)arg1;
- (void)setSnapDownContentOffset:(double)arg1;
- (void)setSnapState:(long long)arg1;
- (void)setSnapUpContentOffset:(double)arg1;
- (long long)snapDecelerationVeloctiyOverrideState;
- (double)snapDownContentOffset;
- (long long)snapState;
- (double)snapUpContentOffset;

@end
