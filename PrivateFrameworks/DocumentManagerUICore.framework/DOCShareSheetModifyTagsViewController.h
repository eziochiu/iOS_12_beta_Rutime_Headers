/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCShareSheetModifyTagsViewController : DOCShareSheetBaseViewController {
    NSLayoutConstraint * _loadingHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _shareUISize;
    NSLayoutConstraint * _tagEditorTopConstraint;
    DOCTagEditorViewController * _tagEditorViewController;
}

@property (nonatomic, readonly) NSLayoutConstraint *loadingHeightConstraint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } shareUISize;
@property (nonatomic, readonly) NSLayoutConstraint *tagEditorTopConstraint;
@property (nonatomic) DOCTagEditorViewController *tagEditorViewController;

- (void).cxx_destruct;
- (id)initWithHost:(id)arg1 itemLoader:(id)arg2 fileProviderMonitor:(id)arg3 shareUISize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithHost:(id)arg1 itemLoader:(id)arg2 shareUISize:(struct CGSize { double x1; double x2; })arg3;
- (void)loadView;
- (id)loadingHeightConstraint;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setTagEditorViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })shareUISize;
- (id)tagEditorTopConstraint;
- (id)tagEditorViewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
