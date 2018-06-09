/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCENumberCellValue : TSCECellValue {
    struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { int x_4_1_1; bool x_4_1_2; void *x_4_1_3; } x4; bool x5; } * _numberValue;
}

- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct NumberCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; int x7; bool x8; struct FormatStructArchive {} *x9; }*)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct NumberCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; int x7; bool x8; struct FormatStructArchive {} *x9; }*)arg1 locale:(id)arg2;
- (id)initWithDouble:(double)arg1 locale:(id)arg2;
- (id)initWithNumberValue:(struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { int x_4_1_1; bool x_4_1_2; void *x_4_1_3; } x4; bool x5; }*)arg1 locale:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellValue:(id)arg1;
- (struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { int x_4_1_1; bool x_4_1_2; void *x_4_1_3; } x4; bool x5; }*)numberValue;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })tsceValue;

@end
