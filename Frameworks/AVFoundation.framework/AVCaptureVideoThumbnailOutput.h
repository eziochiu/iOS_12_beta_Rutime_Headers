/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput {
    AVCaptureVideoThumbnailOutputInternal * _internal;
}

@property (nonatomic, copy) NSArray *filters;
@property (nonatomic) <AVCaptureVideoThumbnailContentsDelegate> *thumbnailContentsDelegate;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectForFilterAtIndex:(unsigned long long)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2 filterCount:(unsigned long long)arg3;
+ (void)initialize;

- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_signalInvalidationOfPropagatedContentsIfNecessary;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)filters;
- (id)init;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)setFilters:(id)arg1;
- (void)setThumbnailContentsDelegate:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailContentsDelegate;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
