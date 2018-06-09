/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroductionModel : NSObject {
    STAllowance * _allowance;
    STDeviceBedtime * _bedtime;
    NSString * _parentalControlsPasscode;
}

@property (retain) STAllowance *allowance;
@property (retain) STDeviceBedtime *bedtime;
@property (retain) NSString *parentalControlsPasscode;

- (void).cxx_destruct;
- (id)allowance;
- (id)bedtime;
- (id)parentalControlsPasscode;
- (void)setAllowance:(id)arg1;
- (void)setBedtime:(id)arg1;
- (void)setParentalControlsPasscode:(id)arg1;

@end
