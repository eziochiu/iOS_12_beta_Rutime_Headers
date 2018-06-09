/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImage : NSObject {
    unsigned long long  _bytesPerRow;
    NSData * _data;
    unsigned long long  _dataHeight;
    unsigned long long  _dataOffset;
    unsigned long long  _dataWidth;
    int  _format;
    unsigned long long  _height;
    bool  _isPlaceholder;
    UIImage * _uiImage;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long dataHeight;
@property (nonatomic, readonly) unsigned long long dataOffset;
@property (nonatomic, readonly) unsigned long long dataWidth;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) UIImage *uiImage;
@property (nonatomic, readonly) unsigned long long width;

+ (id)imageWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 dataWidth:(unsigned long long)arg5 dataHeight:(unsigned long long)arg6 dataOffset:(unsigned long long)arg7 format:(int)arg8 isPlaceholder:(bool)arg9;
+ (id)imageWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(bool)arg3;

- (void).cxx_destruct;
- (unsigned long long)bytesPerRow;
- (id)data;
- (unsigned long long)dataHeight;
- (unsigned long long)dataOffset;
- (unsigned long long)dataWidth;
- (id)description;
- (int)format;
- (unsigned long long)height;
- (id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 dataWidth:(unsigned long long)arg5 dataHeight:(unsigned long long)arg6 dataOffset:(unsigned long long)arg7 format:(int)arg8 isPlaceholder:(bool)arg9;
- (id)initWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(bool)arg3;
- (bool)isPlaceholder;
- (id)uiImage;
- (unsigned long long)width;

@end
