/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _CSStore2DataContainer : NSObject {
    struct Data { unsigned int x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; struct Table { struct Unit { unsigned int x_1_2_1 : 30; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3; BOOL x_1_2_4[0]; } x_8_1_1; BOOL x_8_1_2[64]; unsigned int x_8_1_3; unsigned int x_8_1_4; } x8; } * p;
    unsigned int  pAllocatedLength;
}

- (void)dealloc;
- (id)init;
- (id)initWithBytesNoCopy:(struct Data { unsigned int x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; struct Table { struct Unit { unsigned int x_1_2_1 : 30; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3; BOOL x_1_2_4[0]; } x_8_1_1; BOOL x_8_1_2[64]; unsigned int x_8_1_3; unsigned int x_8_1_4; } x8; }*)arg1 length:(unsigned int)arg2;

@end
