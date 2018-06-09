/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {
    long long  _backgroundStyle;
    double  _blurRadius;
    _UIBackdropView * _blurView;
    bool  _blursSelf;
    UIColor * _tintColor;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) double blurRadius;
@property (nonatomic) bool blursSelf;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)exportedInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_createAndAddBlurViewIfNecessary;
- (long long)backgroundStyle;
- (double)blurRadius;
- (bool)blursSelf;
- (void)dismiss;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setBlursSelf:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
