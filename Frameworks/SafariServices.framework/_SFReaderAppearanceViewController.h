/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFReaderAppearanceViewController : UIViewController <UINavigationControllerDelegate> {
    <SFReaderAppearanceViewControllerDelegate> * _delegate;
    SFReaderAppearanceMainViewController * _mainViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFReaderAppearanceViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSReaderFont *selectedFont;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *themeName;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithInitialReaderConfiguration:(id)arg1 fontManager:(id)arg2;
- (void)loadView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)selectedFont;
- (void)setDelegate:(id)arg1;
- (id)themeName;

@end
