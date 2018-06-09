/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFQuoteLevelPopoverViewController : UITableViewController <UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    id /* block */  _decisionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ decisionBlock;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_optionsStrings;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)dealloc;
- (id /* block */)decisionBlock;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDecisionBlock:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
