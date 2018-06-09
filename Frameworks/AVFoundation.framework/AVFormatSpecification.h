/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFormatSpecification : NSObject {
    AVOutputSettings * _outputSettings;
    struct opaqueCMFormatDescription { } * _sourceFormatDescription;
}

+ (id)formatSpecificationWithOutputSettings:(id)arg1 sourceFormatDescription:(struct opaqueCMFormatDescription { }*)arg2;

- (void)dealloc;
- (id)initWithOutputSettings:(id)arg1 sourceFormatDescription:(struct opaqueCMFormatDescription { }*)arg2;
- (id)outputSettings;
- (struct opaqueCMFormatDescription { }*)sourceFormatDescription;

@end
