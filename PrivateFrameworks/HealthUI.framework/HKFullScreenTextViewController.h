/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKFullScreenTextViewController : UIViewController {
    NSString * _detailText;
}

@property (nonatomic, retain) NSString *detailText;
@property (readonly) UITextView *textView;

- (void).cxx_destruct;
- (void)createTextView;
- (id)description;
- (id)detailText;
- (void)setDetailText:(id)arg1;
- (id)textView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
