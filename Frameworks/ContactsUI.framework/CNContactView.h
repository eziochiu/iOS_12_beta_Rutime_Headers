/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactView : CNMaskingTableView {
    NSDictionary * _actionTextAttributes;
    bool  _cellsLayoutCachingEnabled;
    CNContact * _contact;
    UIView * _customHeaderView;
    NSDictionary * _labelTextAttributes;
    bool  _needsUpdateVisibleCells;
    struct CGSize { 
        double width; 
        double height; 
    }  _oldSize;
    UIColor * _sectionBackgroundColor;
    UIColor * _selectedCellBackgroundColor;
    bool  _shouldUseMapTiles;
    NSDictionary * _valueTextAttributes;
}

@property (nonatomic, copy) NSDictionary *actionTextAttributes;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (getter=isCellsLayoutCachingEnabled, nonatomic) bool cellsLayoutCachingEnabled;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) UIView *customHeaderView;
@property (nonatomic) <ABContactViewDataSource> *dataSource;
@property (nonatomic, readonly) CNContactHeaderView *defaultHeaderView;
@property (nonatomic) <ABContactViewDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *labelTextAttributes;
@property (nonatomic) bool needsUpdateVisibleCells;
@property (nonatomic) struct CGSize { double x1; double x2; } oldSize;
@property (nonatomic, retain) UIColor *sectionBackgroundColor;
@property (nonatomic, retain) UIColor *selectedCellBackgroundColor;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) bool shouldUseMapTiles;
@property (nonatomic, copy) NSDictionary *valueTextAttributes;

+ (id)allCardProperties;
+ (id)cellIdentifierForActions;
+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForEditingProperty:(id)arg1;
+ (id)cellIdentifierForFaceTimeGroup;
+ (id)cellIdentifierForLinkedCardsEditingGroup;
+ (id)cellIdentifierForLinkedCardsGroup;
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (id)cellIdentifierForProperty:(id)arg1;
+ (id)cellIdentifierForPropertyPlaceholder;
+ (id)cellIdentifierForSplitActions;
+ (Class)classForCellIdentifier:(id)arg1;
+ (id)defaultCardProperties;
+ (bool)isFixedValueProperty:(id)arg1;
+ (bool)isMultiValueProperty:(id)arg1;
+ (id)nameProperties;
+ (id)namePropertiesForContact:(id)arg1;
+ (id)optionalCardProperties;
+ (id)requiredNameProperties;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (id)actionTextAttributes;
- (void)applyCellAppearance:(id)arg1;
- (id)contact;
- (id)customHeaderView;
- (id)defaultHeaderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contact:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2 contact:(id)arg3;
- (bool)isCellsLayoutCachingEnabled;
- (id)labelTextAttributes;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (bool)needsUpdateVisibleCells;
- (struct CGSize { double x1; double x2; })oldSize;
- (void)registerContactCellClass:(Class)arg1;
- (id)sectionBackgroundColor;
- (id)selectedCellBackgroundColor;
- (void)setActionTextAttributes:(id)arg1;
- (void)setAttributesFromContactView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellsLayoutCachingEnabled:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setNeedsUpdateVisibleCells;
- (void)setNeedsUpdateVisibleCells:(bool)arg1;
- (void)setOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSectionBackgroundColor:(id)arg1;
- (void)setSelectedCellBackgroundColor:(id)arg1;
- (void)setShouldUseMapTiles:(bool)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (bool)shouldUseMapTiles;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFontColors;
- (void)updateFontSizes;
- (void)updateVisibleCellsIfNeeded;
- (id)valueTextAttributes;

@end
