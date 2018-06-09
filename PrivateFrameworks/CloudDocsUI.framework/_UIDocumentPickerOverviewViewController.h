/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerOverviewViewController : _UIContainerHuggingTableViewController {
    NSArray * _allPickers;
    NSArray * _auxiliaryOptions;
    <_UIDocumentPickerOverviewDelegate> * _delegate;
    NSArray * _fileTypes;
    bool  _manage;
    unsigned long long  _mode;
}

@property (nonatomic, retain) NSArray *allPickers;
@property (nonatomic, retain) NSArray *auxiliaryOptions;
@property (nonatomic) <_UIDocumentPickerOverviewDelegate> *delegate;
@property (nonatomic, retain) NSArray *fileTypes;
@property (nonatomic) bool manage;
@property (nonatomic) unsigned long long mode;

- (void).cxx_destruct;
- (id)allPickers;
- (id)auxiliaryOptions;
- (id)delegate;
- (id)fileTypes;
- (id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(bool)arg4;
- (bool)manage;
- (unsigned long long)mode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAllPickers:(id)arg1;
- (void)setAuxiliaryOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileTypes:(id)arg1;
- (void)setManage:(bool)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContents;
- (void)updatePreferredContentSize;
- (void)viewWillAppear:(bool)arg1;

@end
