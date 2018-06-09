/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARModifiedImageData : ARImageData {
    ARImageData * _originalImage;
}

@property (nonatomic, readonly) ARImageData *originalImage;

- (void).cxx_destruct;
- (id)initWithImageData:(id)arg1;
- (id)originalImage;

@end
