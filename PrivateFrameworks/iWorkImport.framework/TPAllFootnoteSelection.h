/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPAllFootnoteSelection : TSKSelection

+ (Class)archivedSelectionClass;

- (id)initWithArchive:(const struct AllFootnoteSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct AllFootnoteSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; }*)arg1 archiver:(id)arg2;

@end
