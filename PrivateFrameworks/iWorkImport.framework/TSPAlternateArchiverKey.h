/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAlternateArchiverKey : NSObject <NSCopying> {
    const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; } * _fieldPath;
    unsigned long long  _version;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{FieldPath=^^?{UnknownFieldSet=^{vector<google::protobuf::UnknownField' */ struct *fieldPath; /* unknown property attribute:  std::__1::allocator<google::protobuf::UnknownField> >}}[1I]i{RepeatedField<unsigned int>=^Iii}i} */
@property (nonatomic, readonly) unsigned long long version;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)fieldPath;
- (unsigned long long)hash;
- (id)init;
- (id)initWithVersion:(unsigned long long)arg1 fieldPath:(const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)version;

@end
