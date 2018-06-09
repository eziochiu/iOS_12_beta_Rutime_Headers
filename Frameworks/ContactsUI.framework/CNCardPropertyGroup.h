/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNCardPropertyGroup : CNCardGroup {
    CNContactStore * _contactStore;
    NSArray * _deletedItems;
    NSArray * _displayItems;
    NSArray * _editingItems;
    bool  _isAdded;
    NSDictionary * _linkedPolicies;
    NSArray * _originalEditingItems;
    CNPolicy * _policy;
    NSString * _property;
    NSArray * _propertyItems;
    bool  _showActionsWhenEmpty;
}

@property (nonatomic, readonly) bool allowsAdding;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, retain) NSArray *deletedItems;
@property (nonatomic, retain) NSArray *editingItems;
@property (getter=isFixedValue, nonatomic, readonly) bool fixedValue;
@property (nonatomic) bool isAdded;
@property (nonatomic, readonly) NSDictionary *linkedPolicies;
@property (nonatomic, readonly) bool modified;
@property (getter=isMultiLine, nonatomic, readonly) bool multiLine;
@property (getter=isMultiValue, nonatomic, readonly) bool multiValue;
@property (nonatomic, readonly) CNPolicy *policy;
@property (nonatomic, readonly) NSString *property;
@property (nonatomic, readonly) NSArray *propertyItems;
@property (nonatomic) bool showActionsWhenEmpty;

+ (id)groupForProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5;

- (void).cxx_destruct;
- (bool)_arrayContainsMaxAllowedItems:(id)arg1;
- (id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(long long*)arg4;
- (id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(bool)arg3;
- (id)_loadPropertyItems;
- (id)_mergeItems:(id)arg1 forEditing:(bool)arg2;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableLabel;
- (id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2;
- (id)_nextAvailableSocialService;
- (bool)_shouldShowGroupWhenEditing:(bool)arg1;
- (void)_updateNameValuesForItems:(id)arg1;
- (bool)addEditingItem;
- (bool)allowsAdding;
- (bool)canAddEditingItem;
- (id)contactStore;
- (id)deletedItems;
- (id)description;
- (id)displayItems;
- (id)editingItems;
- (id)initWithProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5;
- (bool)isAdded;
- (bool)isFixedValue;
- (bool)isMultiLine;
- (bool)isMultiValue;
- (bool)isRequired;
- (bool)labelsAreUnique;
- (id)labelsForItem:(id)arg1;
- (id)linkedPolicies;
- (bool)modified;
- (id)nextAvailableLabel;
- (id)policy;
- (id)policyForItem:(id)arg1;
- (id)property;
- (id)propertyItems;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)removeEditingItem:(id)arg1;
- (void)saveChanges;
- (void)saveChangesForItems:(id)arg1;
- (void)setDeletedItems:(id)arg1;
- (void)setEditingItems:(id)arg1;
- (void)setIsAdded:(bool)arg1;
- (void)setShowActionsWhenEmpty:(bool)arg1;
- (bool)showActionsWhenEmpty;

@end
