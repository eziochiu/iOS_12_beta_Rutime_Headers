/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEDateCellValue : TSCECellValue {
    struct TSCEDateValue { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; unsigned short x4; unsigned char x5; void*x6; void*x7; out const void*x8; void*x9; void*x10; void*x11; int x12; bool x13; void *x14; } * _dateValue;
}

- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct TSCEDateValue { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; unsigned short x4; unsigned char x5; void*x6; void*x7; out const void*x8; void*x9; void*x10; void*x11; int x12; bool x13; void *x14; }*)dateValue;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct DateCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct FormatStructArchive {} *x6; bool x7; }*)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct DateCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct FormatStructArchive {} *x6; bool x7; }*)arg1 locale:(id)arg2;
- (id)initWithDate:(id)arg1 locale:(id)arg2;
- (id)initWithDateValue:(struct TSCEDateValue { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; unsigned short x4; unsigned char x5; void*x6; void*x7; out const void*x8; void*x9; void*x10; void*x11; int x12; bool x13; void *x14; }*)arg1 locale:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellValue:(id)arg1;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })tsceValue;

@end
