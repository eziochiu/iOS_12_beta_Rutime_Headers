/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAdSkipButton : SVMaterialButton <SVVideoControlItem> {
    unsigned long long  _skipDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideable;
@property (nonatomic) unsigned long long skipDuration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAutoAppearance;

- (void)hide:(bool)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hideable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isVisible;
- (void)setSkipDuration:(unsigned long long)arg1;
- (unsigned long long)skipDuration;
- (bool)supportsAutoAppearance;
- (id)titleForDuration:(unsigned long long)arg1;

@end
