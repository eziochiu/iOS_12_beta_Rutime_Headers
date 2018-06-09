/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest {
    UIImage * _image;
    SSUIServiceOptions * _options;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) SSUIServiceOptions *options;

+ (id)entitlement;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)image;
- (id)initWithXPCDictionary:(id)arg1;
- (id)options;
- (void)setImage:(id)arg1;
- (void)setOptions:(id)arg1;

@end
