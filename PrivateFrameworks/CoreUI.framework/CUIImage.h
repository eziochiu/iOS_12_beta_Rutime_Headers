/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIImage : NSObject <NSCopying> {
    struct CGImage { } * _cgImage;
}

@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)imageWithCGImage:(struct CGImage { }*)arg1;

- (struct CGImage { }*)cgImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
