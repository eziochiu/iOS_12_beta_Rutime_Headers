/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFlushableCachedImage : OITSUFlushableObject {
    id  _delegate;
    SEL  _delegateCreateImageSelector;
    struct CGImage { } * _image;
}

- (void)dealloc;
- (bool)hasFlushableContent;
- (id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2;
- (struct CGImage { }*)newImage;
- (void)unload;

@end
