/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKClockIconView : UIView {
    double  _fullDiameter;
    bool  _paused;
}

@property (nonatomic) double fullDiameter;
@property (nonatomic) bool paused;

- (id)borrowCircleView;
- (id)borrowTimeView;
- (double)fullDiameter;
- (bool)paused;
- (void)restoreBorrowedViews;
- (void)setFullDiameter:(double)arg1;
- (void)setPaused:(bool)arg1;

@end
