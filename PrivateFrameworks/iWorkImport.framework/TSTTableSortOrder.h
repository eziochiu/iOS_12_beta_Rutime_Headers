/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableSortOrder : NSObject <NSCopying> {
    NSIndexSet * mCachedIndices;
    NSArray * mRules;
    int  mType;
}

@property (nonatomic, readonly) NSIndexSet *columnIndices;
@property (nonatomic, readonly) bool empty;
@property (nonatomic, readonly) unsigned long long ruleCount;
@property (nonatomic, readonly) NSArray *rules;
@property (nonatomic, readonly) int type;

+ (id)sortOrderWithColumn:(unsigned char)arg1 direction:(int)arg2 type:(int)arg3;
+ (id)sortOrderWithRules:(id)arg1 type:(int)arg2;

- (id)columnIndices;
- (bool)containsAnyRulesInColumns:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)empty;
- (void)encodeToArchive:(struct TableSortOrderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TST::TableSortOrderArchive_SortRuleArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; int x6; }*)arg1;
- (unsigned long long)hash;
- (id)initFromArchive:(const struct TableSortOrderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TST::TableSortOrderArchive_SortRuleArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; int x6; }*)arg1;
- (id)initWithRules:(id)arg1 type:(int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)ruleCount;
- (id)rules;
- (id)sortOrderByAddingRule:(id)arg1;
- (id)sortOrderByChangingTypeTo:(int)arg1;
- (id)sortOrderByRemovingColumnIndices:(id)arg1;
- (id)sortOrderByRemovingRuleAtIndex:(unsigned long long)arg1;
- (id)sortOrderByReplacingRuleAtIndex:(unsigned long long)arg1 withRule:(id)arg2;
- (id)sortOrderByReplacingRulesWithRules:(id)arg1;
- (int)type;

@end
