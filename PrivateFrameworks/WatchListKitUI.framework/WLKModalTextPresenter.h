/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKModalTextPresenter : UIViewController {
    bool * _hideDoneButton;
    NSString * _text;
}

@property (nonatomic) bool*hideDoneButton;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)donePressed;
- (bool*)hideDoneButton;
- (id)initWithTitle:(id)arg1 text:(id)arg2;
- (id)initWithTitle:(id)arg1 text:(id)arg2 doneButton:(bool)arg3;
- (void)presentFromParentViewController:(id)arg1;
- (void)setHideDoneButton:(bool*)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
