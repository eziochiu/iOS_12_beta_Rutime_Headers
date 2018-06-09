/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeSelection : TSKSelection {
    unsigned int  _mask;
}

@property (nonatomic, readonly) unsigned int mask;

+ (Class)archivedSelectionClass;
+ (id)strokeSelectionWithMask:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithArchive:(const struct StrokeSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithStrokeVisibilityMask:(unsigned int)arg1;
- (unsigned int)mask;
- (void)saveToArchive:(struct StrokeSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; }*)arg1 archiver:(id)arg2;

@end
