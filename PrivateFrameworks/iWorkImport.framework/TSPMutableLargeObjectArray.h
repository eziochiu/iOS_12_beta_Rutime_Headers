/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMutableLargeObjectArray : TSPAbstractMutableLargeArray

+ (Class)arraySegmentClass;

- (id)convertElementToSegmentElement:(id)arg1;
- (id)convertSegmentElementToElement:(id)arg1;
- (void)loadFromMessage:(const struct LargeObjectArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct LargeArray {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct LargeObjectArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct LargeArray {} *x5; }*)arg1 archiver:(id)arg2;

@end
