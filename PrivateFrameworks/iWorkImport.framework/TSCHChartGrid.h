/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGrid : NSObject <NSCopying, TSDMixing> {
    bool  mAddingMultipleCols;
    bool  mAddingMultipleRows;
    NSMutableArray * mColumnIds;
    NSMutableArray * mColumnNames;
    int  mDirection;
    bool  mDirty;
    <TSCHNotifyOnModify> * mModifyDelegate;
    unsigned long long  mNextColNumber;
    unsigned long long  mNextRowNumber;
    NSMutableArray * mRowIds;
    NSMutableArray * mRowNames;
    bool  mSkipUUIDAssertions;
    unsigned long long  mTransitionLevel;
    NSMutableArray * mValues;
}

@property (nonatomic, readonly, copy) NSArray *columnIds;
@property (nonatomic) int direction;
@property (nonatomic) bool dirty;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic) <TSCHNotifyOnModify> *objectToNotify;
@property (nonatomic, readonly, copy) NSArray *rowIds;

- (void)addingMultipleCols:(bool)arg1;
- (void)addingMultipleRows:(bool)arg1;
- (void)adjustRowAndColumnNameListLength;
- (id)columnIdForColumn:(unsigned long long)arg1;
- (id)columnIds;
- (unsigned long long)columnIndexForColumnId:(id)arg1;
- (bool)contentsEqualToGrid:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createUUID;
- (id)createUUIDArrayWithCount:(unsigned long long)arg1;
- (void)dealloc;
- (void)decrementTransitionLevel;
- (id)description;
- (int)direction;
- (bool)dirty;
- (id)extractColumnNames:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 returningColumnIds:(id*)arg2 valueColumns:(id*)arg3;
- (id)extractGridValuesReturningRowNames:(id*)arg1 rowIds:(id*)arg2 columnNames:(id*)arg3 columnIds:(id*)arg4;
- (id)extractRowNames:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 returningRowIds:(id*)arg2 valueRows:(id*)arg3;
- (void)generateRowColumnIdMaps;
- (id)getNewColumnNameForLocale:(id)arg1;
- (id)getNewRowNameForLocale:(id)arg1;
- (id)gridAdapterForColumn:(unsigned long long)arg1;
- (id)gridAdapterForColumnConstant;
- (id)gridAdapterForColumnCount;
- (id)gridAdapterForRow:(unsigned long long)arg1;
- (id)gridAdapterForRowConstant;
- (id)gridAdapterForRowCount;
- (void)incrementTransitionLevel;
- (id)init;
- (void)insertColumn:(unsigned long long)arg1 withName:(id)arg2;
- (void)insertColumn:(unsigned long long)arg1 withName:(id)arg2 withId:(id)arg3;
- (void)insertColumnNames:(id)arg1 at:(unsigned long long)arg2 withIds:(id)arg3;
- (void)insertColumnsAt:(unsigned long long)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4;
- (void)insertRow:(unsigned long long)arg1 withName:(id)arg2;
- (void)insertRow:(unsigned long long)arg1 withName:(id)arg2 withId:(id)arg3;
- (void)insertRowsAt:(unsigned long long)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4;
- (void)insertRowsNames:(id)arg1 at:(unsigned long long)arg2 withIds:(id)arg3;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)loadFromPreUFFArchive:(const struct ChartGridArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; int x7; bool x8; struct RepeatedPtrField<TSCH::PreUFF::ChartGridArchive_ValueRow> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1;
- (void)loadFromUnityArchive:(const struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 chartInfo:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)moveColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 afterColumn:(long long)arg2;
- (void)moveRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 afterRow:(long long)arg2;
- (id)nameForColumn:(unsigned long long)arg1;
- (id)nameForRow:(unsigned long long)arg1;
- (unsigned long long)noAssertNumberOfColumns;
- (unsigned long long)noAssertNumberOfRows;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (id)objectToNotify;
- (void)p_adjustNameListLength:(bool)arg1;
- (bool)p_name:(id)arg1 isInArray:(id)arg2;
- (id)p_uuidsForColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)p_uuidsForRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeColumn:(unsigned long long)arg1;
- (void)removeRow:(unsigned long long)arg1;
- (id)rowIdForRow:(unsigned long long)arg1;
- (id)rowIds;
- (unsigned long long)rowIndexForRowId:(id)arg1;
- (void)saveToUnityArchive:(struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 forCopy:(bool)arg2;
- (void)setColumnIds:(id)arg1;
- (void)setDirection:(int)arg1;
- (void)setDirty:(bool)arg1;
- (void)setNameForColumn:(unsigned long long)arg1 toName:(id)arg2;
- (void)setNameForRow:(unsigned long long)arg1 toName:(id)arg2;
- (void)setObjectToNotify:(id)arg1;
- (void)setRowIds:(id)arg1;
- (void)setValue:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (void)takeDataFromDictionary:(id)arg1;
- (void)takeDataFromDictionary:(id)arg1 rowIds:(id)arg2 columnIds:(id)arg3;
- (void)validateRowColumnIdMapsAndFix:(bool)arg1;
- (id)valueForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id*)valuesForRow:(unsigned long long)arg1 columns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id*)valuesForRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 column:(unsigned long long)arg2;
- (void)willModify;

@end
