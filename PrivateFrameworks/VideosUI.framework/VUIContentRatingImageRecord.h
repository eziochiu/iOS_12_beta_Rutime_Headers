/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIContentRatingImageRecord : NSObject {
    NSString * _resourceName;
    bool  _templatedImage;
}

@property (nonatomic, copy) NSString *resourceName;
@property (getter=isTemplatedImage, nonatomic) bool templatedImage;

- (void).cxx_destruct;
- (id)initWithResourceName:(id)arg1 isTemplatedImage:(bool)arg2;
- (bool)isTemplatedImage;
- (id)resourceName;
- (void)setResourceName:(id)arg1;
- (void)setTemplatedImage:(bool)arg1;

@end
