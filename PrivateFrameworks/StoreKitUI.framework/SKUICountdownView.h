/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICountdownView : UIView {
    SKUIClientContext * _clientContext;
    SKUICountdown * _countdown;
    UILabel * _dateDescriptionLabelDay;
    UILabel * _dateDescriptionLabelHour;
    UILabel * _dateDescriptionLabelMinute;
    UILabel * _dateDescriptionLabelSecond;
    NSMutableArray * _dateFlapLabels;
    UILabel * _dateLabelDay;
    UILabel * _dateLabelHour;
    UILabel * _dateLabelMinute;
    UILabel * _dateLabelSecond;
    double  _factor;
    UIImageView * _imageView;
    NSMutableArray * _numberFlapLabels;
    NSNumberFormatter * _numberFormatter;
    UILabel * _numberLabel;
    NSMutableArray * _numberSeparatorLabels;
    NSOperationQueue * _operationQueue;
    NSTimer * _timer;
    SKUICountdownViewTimerTarget * _timerTarget;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) SKUICountdown *countdown;

- (void).cxx_destruct;
- (void)_currentRemainingDays:(long long*)arg1 hours:(long long*)arg2 minutes:(long long*)arg3 seconds:(long long*)arg4;
- (long long)_currentValue;
- (id)_newDateDescriptionLabel;
- (id)_newDateLabel;
- (id)_newFlapLabelWithPosition:(long long)arg1;
- (id)_newNumberSeparatorLabel;
- (void)_reload;
- (void)_reloadDateDescriptions:(bool)arg1;
- (void)_reloadFontSizes;
- (void)_reloadNumber;
- (void)_reloadNumberFlapped;
- (void)_reloadTime;
- (void)_reloadTimeFlapped;
- (void)_setCountdownWithResponse:(id)arg1 error:(id)arg2;
- (id)backgroundImage;
- (id)clientContext;
- (id)countdown;
- (void)dealloc;
- (id)initWithCountdown:(id)arg1 clientContext:(id)arg2;
- (void)layoutSubviews;
- (void)setBackgroundImage:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)start;
- (void)stop;

@end
