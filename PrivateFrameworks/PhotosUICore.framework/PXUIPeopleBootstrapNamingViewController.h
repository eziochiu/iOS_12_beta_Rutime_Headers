/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIPeopleBootstrapNamingViewController : UIViewController <PXPeopleFlowViewController, PXPeopleNamePickerViewControllerDelegate> {
    id  _context;
    PXPeopleNamePickerViewController * _namePicker;
    UIView * _pickerBackgroundView;
    NSLayoutConstraint * _pickerBackgroundViewHeightConstraint;
    PXPeopleNameSelection * _selection;
    bool  _textDidChange;
    <PXPeopleFlowViewControllerActionDelegate> * actionDelegate;
}

@property (nonatomic) <PXPeopleFlowViewControllerActionDelegate> *actionDelegate;
@property (nonatomic, readonly) PXPeopleBootstrapContext *bootstrapContext;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPeopleNamePickerViewController *namePicker;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, retain) UIView *pickerBackgroundView;
@property (nonatomic, retain) NSLayoutConstraint *pickerBackgroundViewHeightConstraint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, retain) PXPeopleNameSelection *selection;
@property (readonly) Class superclass;
@property (nonatomic) bool textDidChange;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)_captureStringSelectionIfNeeded;
- (id)_localizedTitleString;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)actionDelegate;
- (id)bootstrapContext;
- (id)context;
- (id)initWithContext:(id)arg1;
- (id)namePicker;
- (void)namePickerController:(id)arg1 didPickContact:(id)arg2;
- (void)namePickerController:(id)arg1 didPickPerson:(id)arg2;
- (void)namePickerController:(id)arg1 didPickString:(id)arg2;
- (void)namePickerControllerWillChangeText:(id)arg1;
- (id)person;
- (id)pickerBackgroundView;
- (id)pickerBackgroundViewHeightConstraint;
- (id)selection;
- (void)setActionDelegate:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setNamePicker:(id)arg1;
- (void)setPickerBackgroundView:(id)arg1;
- (void)setPickerBackgroundViewHeightConstraint:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setTextDidChange:(bool)arg1;
- (bool)textDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)type;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)willTransitionToNextInFlow;

@end
