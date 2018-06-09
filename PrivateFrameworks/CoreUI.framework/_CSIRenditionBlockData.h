/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CSIRenditionBlockData : NSObject {
    unsigned int  _allocateMemory;
    char * _data;
    unsigned int  _dataPixelFormat;
    unsigned char  _imageBlockReleaseCount;
    unsigned long long  _imageBytes;
    unsigned int  _mmappedData;
    BOOL  _name;
    unsigned int  _nrows;
    int  _pixelFormat;
    unsigned long long  _rowbytes;
    unsigned long long  _sourceRowbytes;
}

+ (id)sharedCache;

- (void)_allocateImageBytes;
- (void)_freeImageBytes;
- (void)_makeReadOnly;
- (const char *)bytes;
- (void)dealloc;
- (void)expandCSIBitmapData:(struct _csibitmap { unsigned int x1; union { unsigned int x_2_1_1; struct _csibitmapflags { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 30; } x_2_1_2; } x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; }*)arg1 fromSlice:(struct _slice { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 makeReadOnly:(bool)arg3;
- (unsigned long long)imageBytes;
- (id)initWithBytes:(void*)arg1 pixelWidth:(unsigned int)arg2 pixelHeight:(unsigned int)arg3 sourceRowbytes:(unsigned long long)arg4 pixelFormat:(int)arg5;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2 sourceRowbytes:(unsigned long long)arg3 pixelFormat:(int)arg4;
- (unsigned int)nrows;
- (int)pixelFormat;
- (unsigned long long)rowbytes;
- (void)setRowBytes:(unsigned long long)arg1;
- (void)tallyImageBlockRelease;
- (void)updateFromCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (bool)wasUsedTransiently;

@end
