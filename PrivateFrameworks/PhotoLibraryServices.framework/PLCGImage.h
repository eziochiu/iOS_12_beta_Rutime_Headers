/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCGImage : NSObject {
    struct CGImage { } * _imageRef;
}

@property (nonatomic, readonly) struct CGImage { }*imageRef;

- (void)dealloc;
- (struct CGImage { }*)imageRef;
- (id)initWithCGImage:(struct CGImage { }*)arg1;

@end