/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCRtpFragmentationHeader : NSObject {
    NSArray * _fragmentationLength;
    NSArray * _fragmentationOffset;
    NSArray * _fragmentationPlType;
    NSArray * _fragmentationTimeDiff;
}

@property (nonatomic, retain) NSArray *fragmentationLength;
@property (nonatomic, retain) NSArray *fragmentationOffset;
@property (nonatomic, retain) NSArray *fragmentationPlType;
@property (nonatomic, retain) NSArray *fragmentationTimeDiff;

- (void).cxx_destruct;
- (struct unique_ptr<webrtc::RTPFragmentationHeader, std::__1::default_delete<webrtc::RTPFragmentationHeader> > { struct __compressed_pair<webrtc::RTPFragmentationHeader *, std::__1::default_delete<webrtc::RTPFragmentationHeader> > { struct RTPFragmentationHeader {} *x_1_1_1; } x1; })createNativeFragmentationHeader;
- (id)fragmentationLength;
- (id)fragmentationOffset;
- (id)fragmentationPlType;
- (id)fragmentationTimeDiff;
- (id)initWithNativeFragmentationHeader:(const struct RTPFragmentationHeader { unsigned short x1; unsigned long long *x2; unsigned long long *x3; unsigned short *x4; char *x5; }*)arg1;
- (void)setFragmentationLength:(id)arg1;
- (void)setFragmentationOffset:(id)arg1;
- (void)setFragmentationPlType:(id)arg1;
- (void)setFragmentationTimeDiff:(id)arg1;

@end
