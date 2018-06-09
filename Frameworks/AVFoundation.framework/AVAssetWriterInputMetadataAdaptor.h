/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputMetadataAdaptor : NSObject {
    AVAssetWriterInputMetadataAdaptorInternal * _internal;
}

@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;

+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;
+ (void)initialize;

- (bool)appendTimedMetadataGroup:(id)arg1;
- (id)assetWriterInput;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithAssetWriterInput:(id)arg1;

@end
