/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTPopUpMenuModel : TSPObject <NSCopying, TSUMultipleChoiceListChoiceProviding> {
    unsigned long long  _count;
    NSArray * _items;
}

+ (bool)needsObjectUUID;
+ (id)p_PopUpMenuModelDefaultWithContext:(id)arg1 locale:(id)arg2;
+ (void)p_appendChoices:(id)arg1 uniquelyToChoices:(id)arg2;
+ (id)p_cellValueFromCell:(id)arg1 locale:(id)arg2;
+ (id)p_cellValueFromCellWithCustomFormat:(id)arg1 locale:(id)arg2;
+ (id)popupMenuModelDeletingItemFromModel:(id)arg1 index:(unsigned long long)arg2;
+ (id)popupMenuModelEditingItemInModel:(id)arg1 index:(unsigned long long)arg2 newContent:(id)arg3;
+ (id)popupMenuModelFromTable:(id)arg1 region:(id)arg2 initialValue:(int*)arg3 overflow:(bool*)arg4;
+ (id)popupMenuModelReorderingModel:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

- (void).cxx_destruct;
- (bool)booleanAtIndex:(unsigned long long)arg1;
- (id)choices;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateAtIndex:(unsigned long long)arg1;
- (id)description;
- (void)didInitFromSOS;
- (id)displayStringAtIndex:(unsigned long long)arg1;
- (id)formatAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithItems:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChoices:(id)arg1;
- (void)loadFromArchive:(const struct PopUpMenuModel { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TST::PopUpMenuModel_CellValue> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSCE::CellValueArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (double)numberAtIndex:(unsigned long long)arg1;
- (bool)p_booleanForListItem:(id)arg1;
- (id)p_dateForListItem:(id)arg1;
- (id)p_listItemAtIndex:(unsigned long long)arg1;
- (int)p_mcListTypeForArgType:(int)arg1;
- (int)p_mcListTypeOfListItem:(id)arg1;
- (double)p_numberForListItem:(id)arg1;
- (id)p_stringForListItem:(id)arg1;
- (id)popUpItemFromBoolean:(bool)arg1;
- (id)popUpItemFromDate:(id)arg1 format:(id)arg2;
- (id)popUpItemFromNumber:(double)arg1 format:(id)arg2;
- (id)popUpItemFromString:(id)arg1;
- (void)saveToArchive:(struct PopUpMenuModel { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TST::PopUpMenuModel_CellValue> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSCE::CellValueArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (int)valueTypeOfItemAtIndex:(unsigned long long)arg1;

@end
