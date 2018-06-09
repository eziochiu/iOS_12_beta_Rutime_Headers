/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageDataHelper : NSObject {
    TSPData * _imageData;
}

@property (nonatomic, readonly) TSPData *imageData;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;

+ (id)thumbnailImageDataForImageData:(id)arg1;

- (void).cxx_destruct;
- (void)generateThumbnailImageDataWithCompletionHandler:(id /* block */)arg1;
- (id)imageData;
- (id)initWithImageData:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;

@end
