/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoDestinationBackgroundView : UIView {
    NSString * _destinationName;
    UILabel * _destinationSubtitleLabel;
    UILabel * _destinationTitleLabel;
    long long  _style;
    UIImageView * _videosImageView;
}

@property (nonatomic, copy) NSString *destinationName;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)destinationName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDestinationName:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
