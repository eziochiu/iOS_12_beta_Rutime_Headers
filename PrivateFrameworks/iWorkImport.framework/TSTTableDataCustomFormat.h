/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTTableDataCustomFormat : TSTTableDataObject {
    /* Warning: unhandled struct encoding: '{TSUCustomFormat={ObjcSharedPtr<NSString>=@}i{?=@@@@@db8CCCCCCCb1b1b1b1b1b1}{vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> >=^{?}^{?}{__compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> >=^{?}}}}' */ struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; int x_1_1_2; struct { id x_3_2_1; id x_3_2_2; id x_3_2_3; unsigned int x_3_2_4 : 8; unsigned char x_3_2_5; unsigned char x_3_2_6; unsigned char x_3_2_7; unsigned char x_3_2_8; unsigned char x_3_2_9; unsigned char x_3_2_10; unsigned char x_3_2_11; unsigned int x_3_2_12 : 1; unsigned int x_3_2_13 : 1; unsigned int x_3_2_14 : 1; unsigned int x_3_2_15 : 1; unsigned int x_3_2_16 : 1; unsigned int x_3_2_17 : 1; } x_1_1_3; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_4_2_1; struct { /* ? */ } *x_4_2_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_3_1; } x_4_2_3; } x_1_1_4; } x1; } * mCustomFormat;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithCustomFormat:(/* Warning: unhandled struct encoding: '{TSUCustomFormat={ObjcSharedPtr<NSString>=@}i{?=@@@@@db8CCCCCCCb1b1b1b1b1b1}{vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> >=^{?}^{?}{__compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> >=^{?}}}}' */ struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; int x_1_1_2; struct { id x_3_2_1; id x_3_2_2; id x_3_2_3; unsigned int x_3_2_4 : 8; unsigned char x_3_2_5; unsigned char x_3_2_6; unsigned char x_3_2_7; unsigned char x_3_2_8; unsigned char x_3_2_9; unsigned char x_3_2_10; unsigned char x_3_2_11; unsigned int x_3_2_12 : 1; unsigned int x_3_2_13 : 1; unsigned int x_3_2_14 : 1; unsigned int x_3_2_15 : 1; unsigned int x_3_2_16 : 1; unsigned int x_3_2_17 : 1; } x_1_1_3; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_4_2_1; struct { /* ? */ } *x_4_2_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_3_1; } x_4_2_3; } x_1_1_4; } x1; }*)arg1;
- (bool)isEqual:(id)arg1;

@end
