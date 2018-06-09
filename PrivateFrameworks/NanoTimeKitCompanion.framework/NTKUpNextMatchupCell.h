/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextMatchupCell : NTKUpNextBaseCell {
    NTKColoringLabel * _awayDescriptionLabel;
    UIImageView * _awayLogoIamgeView;
    NTKColoringLabel * _awayNameLabel;
    CLKFont * _boldMatchupFont;
    UILayoutGuide * _contentLayoutGuide;
    bool  _dateEnabled;
    NTKColoringLabel * _dateLabel;
    NTKColoringLabel * _homeDescriptionLabel;
    UIImageView * _homeLogoImageView;
    NTKColoringLabel * _homeNameLabel;
    UILayoutGuide * _logoLayoutGuide;
    bool  _logosEnabled;
    CLKFont * _regularMatchupFont;
    CLKFont * _statusFont;
    NTKColoringLabel * _statusLabel;
    NTKColoringLabel * _timeLabel;
    NSArray * _withDateLayoutConstraints;
    NSArray * _withLogoLayoutConstraints;
    NSArray * _withoutDateLayoutConstraints;
    NSArray * _withoutLogoLayoutConstraints;
}

+ (id)_timeStringForFetchDate:(id)arg1;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
