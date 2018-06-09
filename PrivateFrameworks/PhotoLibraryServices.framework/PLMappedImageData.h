/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMappedImageData : NSMutableData {
    void * _bytes;
    bool  _freeBytes;
    unsigned long long  _length;
    PLImageTableSegment * _segment;
}

@property (nonatomic) unsigned int imageHeight;
@property (nonatomic) unsigned int imageWidth;
@property (nonatomic, copy) NSString *photoUUID;

- (struct PLImageTableEntryFooter_s { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned char x_1_1_5; unsigned char x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; unsigned char x_1_1_15; unsigned char x_1_1_16; } x1; unsigned int x2; unsigned int x3; int x4; }*)_footer;
- (id)brokencopy;
- (const void*)bytes;
- (void)dealloc;
- (unsigned int)imageHeight;
- (unsigned int)imageWidth;
- (id)initWithEntryLength:(unsigned long long)arg1;
- (id)initWithImageTableSegment:(id)arg1 bytes:(void*)arg2 length:(unsigned long long)arg3;
- (unsigned long long)length;
- (unsigned long long)lengthIncludingFooter;
- (void*)mutableBytes;
- (id)photoUUID;
- (unsigned long long)pl_advisoryLength;
- (bool)pl_writeToPath:(id)arg1;
- (void)setImageHeight:(unsigned int)arg1;
- (void)setImageWidth:(unsigned int)arg1;
- (void)setPhotoUUID:(id)arg1;
- (bool)uuidIsEqual:(id)arg1;

@end
