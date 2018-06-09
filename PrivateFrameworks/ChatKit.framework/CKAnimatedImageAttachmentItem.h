/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAnimatedImageAttachmentItem : CKImageAttachmentItem {
    NSURL * _animatedPreviewURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
}

@property (nonatomic, retain) NSURL *animatedPreviewURL;
@property struct CGSize { double x1; double x2; } imageSize;

+ (id)UTITypes;
+ (bool)shouldScaleUpPreview;

- (void).cxx_destruct;
- (id)_newImageData;
- (id)_savedPreviewFromURL:(id)arg1;
- (id)animatedPreviewURL;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2;
- (void)generatePreviewWithCompletion:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setAnimatedPreviewURL:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 withImageData:(id)arg3;

@end
