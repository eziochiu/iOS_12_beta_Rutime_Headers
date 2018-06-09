/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderEditView : CNContactHeaderView <CNPropertyGroupItemDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _editingGroups;
    UITableView * _editingTable;
    <CNPropertyCellDelegate> * _namePropertyDelegate;
    bool  _pinToReadableContentGuide;
    NSLayoutConstraint * _tableToTrailingEdgeConstraint;
    NSLayoutConstraint * _tableToTrailingReadableGuideConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *editingGroups;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CNPropertyCellDelegate> *namePropertyDelegate;
@property (nonatomic) bool pinToReadableContentGuide;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *tableToTrailingEdgeConstraint;
@property (nonatomic, retain) NSLayoutConstraint *tableToTrailingReadableGuideConstraint;

+ (id)contactHeaderViewWithContact:(id)arg1 editingGroups:(id)arg2 shouldAllowTakePhotoAction:(bool)arg3 delegate:(id)arg4;
+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(bool)arg2 shouldAllowImageDrops:(bool)arg3;

- (void).cxx_destruct;
- (id)_phoneticNameForValue:(id)arg1 property:(id)arg2;
- (bool)becomeFirstResponder;
- (id)editingGroups;
- (bool)hasPhoto;
- (id)initWithContact:(id)arg1 editingGroups:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 shouldAllowTakePhotoAction:(bool)arg4 delegate:(id)arg5;
- (id)namePropertyDelegate;
- (bool)photoIsModified;
- (bool)pinToReadableContentGuide;
- (void)propertyItem:(id)arg1 willChangeValue:(id)arg2;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)saveContactPhoto;
- (id)selectEditingGroupAtIndex:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setEditingGroups:(id)arg1;
- (void)setEditingGroups:(id)arg1 withUpdate:(bool)arg2;
- (void)setNamePropertyDelegate:(id)arg1;
- (void)setPinToReadableContentGuide:(bool)arg1;
- (void)setTableToTrailingEdgeConstraint:(id)arg1;
- (void)setTableToTrailingReadableGuideConstraint:(id)arg1;
- (id)tableToTrailingEdgeConstraint;
- (id)tableToTrailingReadableGuideConstraint;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateConstraints;
- (void)updateFontSizes;

@end
