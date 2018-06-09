/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIReferenceLibraryViewController : UIViewController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UINavigationController * _baseNavController;
    NSArray * _definitionValues;
    id /* block */  _dismissCompletionHandler;
    bool  _enableRotation;
    UIViewController * _longDefViewController;
    UITableViewController * _multiDefViewController;
    long long  _oldPopoverStyle;
    bool  _previousIgnoreOrientation;
    NSString * _term;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_backgroundColor;
+ (id)_colorAttributes;
+ (id)_defaultButtonImage;
+ (id)_dictionaryDefinitionAttributes;
+ (id)_diddlyDoViewLineColor;
+ (id)_foregroundColor;
+ (id)_localizedDictionaryTitleAttributes;
+ (id)_popoverControllerForReferenceLibraryWithString:(id)arg1;
+ (id)_pressedButtonImage;
+ (bool)_shouldShowDefineForTerm:(id)arg1;
+ (bool)_shouldShowDefineForTermOfLength:(long long)arg1;
+ (id)_viewControllerForReferenceWithString:(id)arg1 options:(unsigned long long)arg2;
+ (bool)dictionaryHasDefinitionForTerm:(id)arg1;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (id)_colorAttributes;
- (id)_defaultButtonImage;
- (id)_dictionaryDefinitionAttributes;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (id)_diddlyDoViewLineColor;
- (void)_dismissModalReferenceView:(id)arg1;
- (id)_foregroundColor;
- (void)_installDoneButtonOnViewControllerIfNeeded:(id)arg1;
- (void)_installRequiredElementsOnViewController:(id)arg1;
- (id)_localizedDictionaryTitleAttributes;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1;
- (id)_pressedButtonImage;
- (void)_searchWeb:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id /* block */)dismissCompletionHandler;
- (bool)enableRotation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTerm:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushDownloadManager:(id)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setEnableRotation:(bool)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2;

@end
