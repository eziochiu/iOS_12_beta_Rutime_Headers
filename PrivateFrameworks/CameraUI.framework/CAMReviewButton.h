/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMReviewButton : UIButton {
    unsigned long long  __numberOfCaptures;
}

@property (setter=_setNumberOfCaptures:, nonatomic) unsigned long long _numberOfCaptures;

+ (id)_sharedNumberOfCapturesFormatter;

- (void)_commonCAMReviewButtonInitialization;
- (id)_localizedTitleForNumberOfCaptures;
- (unsigned long long)_numberOfCaptures;
- (void)_setNumberOfCaptures:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
