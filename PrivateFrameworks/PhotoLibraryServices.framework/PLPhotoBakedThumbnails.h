/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoBakedThumbnails : NSObject {
    unsigned long long  _count;
    bool  _dataIsMutable;
    int  _format;
    bool  _missingHeader;
    NSMutableDictionary * _options;
    bool  _optionsAccessed;
    NSData * _optionsData;
    int  _singleThumbnailImageLength;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSData * _thumbnailData;
    NSMutableArray * _thumbnailImages;
}

@property (nonatomic, readonly) unsigned int bitmapInfo;
@property (nonatomic, readonly) int bitsPerComponent;
@property (nonatomic, readonly) int bytesPerPixel;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRect;
@property (nonatomic, readonly, retain) NSMutableDictionary *options;
@property (nonatomic, readonly, retain) NSData *optionsData;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (bool)_transformForImage:(struct CGImage { }*)arg1 isCropped:(bool)arg2 captureOrientation:(int)arg3 sizeInOut:(struct CGSize { double x1; double x2; }*)arg4 contextSizeOut:(struct CGSize { double x1; double x2; }*)arg5 transformOut:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg6;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(int)arg2;

- (id)_thumbnailData;
- (unsigned int)bitmapInfo;
- (int)bitsPerComponent;
- (int)bytesPerPixel;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (int)format;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2 readOnly:(bool)arg3;
- (id)initWithData:(id)arg1 format:(int)arg2;
- (id)initWithData:(id)arg1 format:(int)arg2 readOnly:(bool)arg3;
- (id)initWithImages:(id)arg1 format:(int)arg2 orientation:(int*)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)options;
- (id)optionsData;
- (bool)saveToFile:(id)arg1;
- (id)serializedData;
- (struct CGSize { double x1; double x2; })size;
- (char *)thumbnailBytesAtIndex:(long long)arg1;
- (id)thumbnailDataAtIndex:(long long)arg1;
- (struct CGImage { }*)thumbnailImageAtIndex:(long long)arg1;
- (bool)writeBorderedThumbnailOfImage:(struct CGImage { }*)arg1 toBuffer:(void*)arg2 orientation:(int*)arg3 format:(int)arg4 formatInfo:(const struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; unsigned int x5; int x6; int x7; double x8[4]; double x9[4]; unsigned int x10; }*)arg5 delegate:(id)arg6;

@end
