/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMutableLargeStringToObjectDictionary : TSPAbstractMutableLargeDictionary

+ (Class)dictionarySegmentClass;

- (id)convertObjectToSegmentObject:(id)arg1;
- (id)convertSegmentObjectToObject:(id)arg1;
- (void)loadFromMessage:(const struct LargeStringToObjectDictionary { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct LargeDictionary {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct LargeStringToObjectDictionary { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct LargeDictionary {} *x5; }*)arg1 archiver:(id)arg2;

@end
