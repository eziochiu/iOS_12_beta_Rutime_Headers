/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ExFATCameraFile : ICCameraFile {
    void * _exFATCameraFileProperties;
}

@property int bitsPerPixel;
@property (copy) NSString *exifCreationDateTime;
@property (copy) NSString *exifModificationDateTime;
@property (readonly) struct timespec { long long x1; long long x2; } fsCreationTime;
@property (readonly) struct timespec { long long x1; long long x2; } fsModificationTime;
@property (readonly) long long fsSize;
@property int imgHeight;
@property int imgWidth;
@property (readonly) id object;
@property int thmHeight;
@property int thmOffset;
@property int thmSize;
@property int thmWidth;
@property unsigned int type;
@property bool updatedBasicMetadata;

- (int)bitsPerPixel;
- (struct CGImage { }*)copyImageThumbnailForPixelWidth:(unsigned int)arg1;
- (struct CGImage { }*)copyMovieThumbnailForPixelWidth:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })cropThumbSize:(struct CGSize { double x1; double x2; })arg1 originalSize:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (struct CGDataProviderDirectCallbacks { unsigned int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); })dirCallbacks;
- (long long)dpOffset;
- (id)exifCreationDateTime;
- (id)exifModificationDateTime;
- (struct timespec { long long x1; long long x2; })fsCreationTime;
- (struct timespec { long long x1; long long x2; })fsModificationTime;
- (long long)fsSize;
- (id)fsStream;
- (unsigned long long)getBytes:(void*)arg1 ofSize:(unsigned long long)arg2 atOffset:(unsigned long long)arg3;
- (bool)hasValidInformation:(id)arg1;
- (int)imgHeight;
- (int)imgWidth;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 object:(id)arg4 fsCreationTime:(struct timespec { long long x1; long long x2; })arg5 fsModificationTime:(struct timespec { long long x1; long long x2; })arg6 fsSize:(long long)arg7;
- (bool)isRAW;
- (void)loadSourceProperties;
- (id)metadataDict;
- (id)object;
- (void)releaseProvider;
- (struct CGImage { }*)removeLetterboxedThumbnails:(struct CGImage { }*)arg1 fullSize:(struct CGSize { double x1; double x2; })arg2;
- (void)rewind;
- (struct CGDataProviderSequentialCallbacks { unsigned int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); })seqCallbacks;
- (void)setBitsPerPixel:(int)arg1;
- (void)setExifCreationDateTime:(id)arg1;
- (void)setExifModificationDateTime:(id)arg1;
- (void)setImgHeight:(int)arg1;
- (void)setImgWidth:(int)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setThmHeight:(int)arg1;
- (void)setThmOffset:(int)arg1;
- (void)setThmSize:(int)arg1;
- (void)setThmWidth:(int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUpdatedBasicMetadata:(bool)arg1;
- (void)setdpOffset:(long long)arg1;
- (long long)skipBytes:(long long)arg1;
- (int)thmHeight;
- (int)thmOffset;
- (int)thmSize;
- (int)thmWidth;
- (id)thumbData;
- (id)thumbnailUsingMetadataOffsets;
- (id)thumbnailUsingSidecarFiles;
- (id)thumbnaillForPixelWidth:(unsigned int)arg1;
- (unsigned int)type;
- (void)updateBasicMetadata;
- (bool)updatedBasicMetadata;
- (int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3;

@end
