/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutomaticPasswordSheet : UIViewController <_SFAutomaticPasswordSheetPresentationProtocol> {
    UIViewController * _contentViewController;
    UINavigationController * _navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContentViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredSheetSizeForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)sheetContainerIgnoresDirectTouchEvents;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
