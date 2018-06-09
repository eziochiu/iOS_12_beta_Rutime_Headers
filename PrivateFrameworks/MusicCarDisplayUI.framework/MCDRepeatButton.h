/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDRepeatButton : MCDPlayModeButton {
    UIImage * _repeatImage;
    UIImage * _repeatOneImage;
}

@property (nonatomic, retain) UIImage *repeatImage;
@property (nonatomic, retain) UIImage *repeatOneImage;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)repeatImage;
- (id)repeatOneImage;
- (void)setRepeatImage:(id)arg1;
- (void)setRepeatOneImage:(id)arg1;
- (void)setRepeatType:(long long)arg1;

@end
