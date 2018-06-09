/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRawImage : NSObject {
    const float * _contents;
    int  _height;
    int  _width;
}

@property (nonatomic, readonly) const float*contents;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) int width;

+ (id)rawImageWithImage:(id)arg1 width:(int)arg2 height:(int)arg3;

- (const float*)contents;
- (void)dealloc;
- (int)height;
- (id)initWithContent:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 width:(int)arg2 height:(int)arg3;
- (id)scaleToWidth:(int)arg1 height:(int)arg2;
- (int)width;
- (void)write:(id)arg1;

@end
