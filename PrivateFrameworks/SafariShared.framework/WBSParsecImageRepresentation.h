/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecImageRepresentation : WBSParsecModel {
    NSNumber * _baselineOffset;
    NSString * _dataString;
    NSObject<OS_dispatch_group> * _downloadGroup;
    NSString * _identifier;
    UIImage * _image;
    NSString * _imageURLString;
    NSNumber * _roundCornerRadius;
    bool  _template;
}

@property (nonatomic, readonly) NSNumber *baselineOffset;
@property (nonatomic, readonly) NSNumber *roundCornerRadius;

+ (id)_bagImageDataCache;
+ (id)schema;

- (void).cxx_destruct;
- (void)_fetchImageData;
- (void)_fetchImageDataUsingBlock:(id /* block */)arg1;
- (id)_imageWithData:(id)arg1;
- (id)_templateImageWithImage:(id)arg1;
- (id)baselineOffset;
- (unsigned long long)hash;
- (id)imageWithScaleFactor:(double)arg1;
- (id)imageWithSession:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)roundCornerRadius;
- (id)test_data;
- (id)test_identifier;
- (id)test_imageURLString;
- (bool)test_isTemplate;

@end
