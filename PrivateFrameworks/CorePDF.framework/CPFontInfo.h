/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFontInfo : NSObject <CPDisposable> {
    const char * dataPtr;
    struct __CFData { } * fontData;
    unsigned int  fontDataLength;
    unsigned int  offset;
    bool  valid;
}

- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (bool)getDescriptor:(struct { double x1; double x2; unsigned int x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; }*)arg1;
- (id)initWithFontData:(struct __CFData { }*)arg1;
- (int)kernUnitsPerEm;
- (struct __CFData { }*)newKernData;
- (unsigned char)readByte;
- (float)readFloat;
- (int)readLong;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })readRect;
- (unsigned int)readUnsignedLong;

@end
