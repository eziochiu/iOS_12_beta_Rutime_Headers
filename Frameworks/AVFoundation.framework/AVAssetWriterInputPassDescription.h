/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputPassDescription : NSObject {
    AVAssetWriterInputPassDescriptionInternal * _internal;
}

@property (nonatomic, readonly) NSArray *sourceTimeRanges;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithTimeRanges:(id)arg1;
- (id)sourceTimeRanges;

@end
