/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPopoverSizingTableViewController : UITableViewController {
    bool  _didHaveTranslucentAppearance;
    bool  _didUpdateTranslucentAppearanceAtLeastOnce;
}

@property (nonatomic, readonly) bool hasTranslucentAppearance;

- (double)_totalContentHeightForPreferredContentSize;
- (void)_updateTranslucentAppearanceIfNeeded;
- (id)backgroundColorUsingTranslucentAppearance:(bool)arg1;
- (bool)hasTranslucentAppearance;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)updateTranslucentAppearance;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
