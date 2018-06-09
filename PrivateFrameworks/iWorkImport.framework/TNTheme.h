/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNTheme : TSATheme {
    NSArray * mTablePrototypes;
}

@property (nonatomic, retain) NSArray *tablePrototypes;

+ (void)initialize;

- (void)bootstrapBlackHardCodedTheme;
- (void)bootstrapWhiteHardCodedTheme;
- (void)loadFromArchive:(const struct ThemeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ThemeArchive {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_initDefaultHardCodedStyles;
- (void)saveToArchive:(struct ThemeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ThemeArchive {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setTablePrototypes:(id)arg1;
- (id)tablePrototypes;

@end