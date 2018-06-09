/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderViewController : UINavigationController {
    TKVibrationRecorderContentViewController * _vibrationRecorderContentViewController;
}

@property (nonatomic) <TKVibrationRecorderViewControllerDelegate> *vibrationRecorderViewControllerDelegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;
- (void)setVibrationRecorderViewControllerDelegate:(id)arg1;
- (id)vibrationRecorderViewControllerDelegate;

@end
