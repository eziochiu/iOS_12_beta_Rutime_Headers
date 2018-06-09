/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

@interface MTUITimeView : UILabel {
    double  _time;
}

@property (nonatomic) double time;

- (void)handleLocaleChange;
- (void)setTime:(double)arg1;
- (double)time;

@end
