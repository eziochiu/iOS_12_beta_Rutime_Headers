/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLineNonStyleItem : NSObject {
    TSCHReferenceLineNonStyle * mNonStyle;
    NSUUID * mUUID;
}

@property (nonatomic, retain) TSCHReferenceLineNonStyle *nonStyle;
@property (nonatomic, readonly) NSUUID *uuid;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initFromUnarchiver:(id)arg1 message:(const struct ChartReferenceLineNonStyleItem { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct UUID {} *x6; }*)arg2;
- (id)initWithNonStyle:(id)arg1 uuid:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)nonStyle;
- (void)saveToArchiver:(id)arg1 message:(struct ChartReferenceLineNonStyleItem { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct UUID {} *x6; }*)arg2;
- (void)setNonStyle:(id)arg1;
- (id)uuid;

@end
