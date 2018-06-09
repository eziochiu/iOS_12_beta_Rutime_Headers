/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEErrorCellValue : TSCECellValue {
    /* Warning: unhandled struct encoding: '{TSCEErrorValue=^^?{ObjcSharedPtr<TSCEError>=@}}' */ struct TSCEErrorValue { int (**x1)(); struct ObjcSharedPtr<TSCEError> { id x_2_1_1; } x2; } * _errorValue;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct ErrorCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; double x8; }*)arg1;
- (/* Warning: unhandled struct encoding: '{TSCEErrorValue=^^?{ObjcSharedPtr<TSCEError>=@}}' */ struct TSCEErrorValue { int (**x1)(); struct ObjcSharedPtr<TSCEError> { id x_2_1_1; } x2; }*)errorValue;
- (id)format;
- (id)initWithArchive:(const struct ErrorCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; double x8; }*)arg1 locale:(id)arg2;
- (id)initWithErrorValue:(/* Warning: unhandled struct encoding: '{TSCEErrorValue=^^?{ObjcSharedPtr<TSCEError>=@}}' */ struct TSCEErrorValue { int (**x1)(); struct ObjcSharedPtr<TSCEError> { id x_2_1_1; } x2; }*)arg1 locale:(id)arg2;
- (bool)isEqualToCellValue:(id)arg1;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })tsceValue;

@end
