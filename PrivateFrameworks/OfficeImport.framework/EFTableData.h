/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EFTableData : NSObject {
    int  mMakeups;
    struct EFRefTok { 
        int type; 
        unsigned int dataSize; 
        unsigned char data[12]; 
    }  mRefTok;
    EDReference * mReference;
    EDTable * mTable;
}

- (void)dealloc;
- (id)initWith:(struct EFStrTok { id x1; union EFData { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; bool x_1_2_3; } x_2_1_1; struct { unsigned long long x_2_2_1; void *x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; bool x_3_2_3; bool x_3_2_4; } x_2_1_3; } x2; }*)arg1;
- (void)makeup:(id)arg1 with:(int)arg2;
- (unsigned short*)ptgData;
- (const struct EFRefTok { int x1; unsigned int x2; unsigned char x3[12]; }*)refTok;
- (id)reference;
- (id)table;

@end
