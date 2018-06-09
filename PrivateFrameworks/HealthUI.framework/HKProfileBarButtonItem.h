/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKProfileBarButtonItem : UIBarButtonItem {
    UIButton * _button;
}

@property (nonatomic, retain) UIButton *button;

+ (id)new;

- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg1;
- (void)setProfileIconObserver:(id)arg1;

@end
