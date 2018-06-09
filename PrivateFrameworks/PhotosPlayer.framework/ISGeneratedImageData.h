/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISGeneratedImageData : NSObject <NSCopying> {
    id  _contents;
    struct __CVBuffer { } * _imageBuffer;
    struct CGImage { } * _imageRef;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredTransform;
}

@property (nonatomic, readonly) id contents;
@property (nonatomic, readonly) struct __CVBuffer { }*imageBuffer;
@property (nonatomic, readonly) struct CGImage { }*imageRef;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;

- (void).cxx_destruct;
- (id)_initWithImageContent:(id)arg1;
- (id)contents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __CVBuffer { }*)imageBuffer;
- (struct CGImage { }*)imageRef;
- (id)init;
- (id)initWithCGImageRef:(struct CGImage { }*)arg1;
- (id)initWithImageBuffer:(struct __CVBuffer { }*)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
