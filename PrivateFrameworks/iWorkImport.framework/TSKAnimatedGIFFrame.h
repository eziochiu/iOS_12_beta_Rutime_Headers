/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnimatedGIFFrame : NSObject {
    struct CGImage { } * mImage;
    double  mTime;
}

@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) double time;

- (void)dealloc;
- (id)description;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1 time:(double)arg2;
- (double)time;

@end
