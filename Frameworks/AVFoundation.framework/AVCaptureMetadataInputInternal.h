/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataInputInternal : NSObject {
    struct OpaqueCMClock { } * clock;
    struct opaqueCMFormatDescription { } * desc;
    struct OpaqueCMBlockBuffer { } * emptyBoxedMetadata;
    AVCaptureInputPort * metadataPort;
    NSString * sourceID;
}

@end
