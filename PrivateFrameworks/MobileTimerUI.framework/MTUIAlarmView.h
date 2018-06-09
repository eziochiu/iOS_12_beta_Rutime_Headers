/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

@interface MTUIAlarmView : UIView {
    id  _contentSizeFontAdjustObserver;
    NSArray * _currentConstraints;
    UILabel * _detailLabel;
    UISwitch * _enabledSwitch;
    NSString * _name;
    UIFont * _nameFont;
    UIFont * _repeatFont;
    NSString * _repeatText;
    bool  _shouldAddLayoutConstraints;
    long long  _style;
    bool  _switchVisible;
    MTUIDigitalClockLabel * _timeLabel;
}

@property (nonatomic, retain) NSArray *currentConstraints;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) UISwitch *enabledSwitch;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UIFont *nameFont;
@property (nonatomic, retain) UIFont *repeatFont;
@property (nonatomic, copy) NSString *repeatText;
@property (nonatomic) bool shouldAddLayoutConstraints;
@property (nonatomic) long long style;
@property (getter=isSwitchVisible, nonatomic) bool switchVisible;
@property (nonatomic, readonly) MTUIDigitalClockLabel *timeLabel;
@property (nonatomic, readonly) NSDictionary *viewsByIdentifier;

- (void).cxx_destruct;
- (void)_loadFontsWithTextStyles;
- (id)currentConstraints;
- (id)detailLabel;
- (id)enabledSwitch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSwitchVisible;
- (id)name;
- (id)nameFont;
- (id)repeatFont;
- (id)repeatText;
- (void)setCurrentConstraints:(id)arg1;
- (void)setName:(id)arg1;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)setNameFont:(id)arg1;
- (void)setRepeatFont:(id)arg1;
- (void)setRepeatText:(id)arg1;
- (void)setShouldAddLayoutConstraints:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSwitchVisible:(bool)arg1;
- (bool)shouldAddLayoutConstraints;
- (long long)style;
- (void)tearDownContentSizeChangeObserver;
- (id)timeLabel;
- (void)updateConstraints;
- (void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
- (id)viewsByIdentifier;

@end
