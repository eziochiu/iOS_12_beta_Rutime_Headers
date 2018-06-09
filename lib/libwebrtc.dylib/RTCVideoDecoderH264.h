/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCVideoDecoderH264 : NSObject <RTCVideoDecoder> {
    id /* block */  _callback;
    struct OpaqueVTDecompressionSession { } * _decompressionSession;
    int  _error;
    struct opaqueCMFormatDescription { } * _videoFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureDecompressionSession;
- (void)dealloc;
- (long long)decode:(id)arg1 missingFrames:(bool)arg2 fragmentationHeader:(id)arg3 codecSpecificInfo:(id)arg4 renderTimeMs:(long long)arg5;
- (void)destroyDecompressionSession;
- (id)implementationName;
- (id)init;
- (long long)releaseDecoder;
- (int)resetDecompressionSession;
- (void)setCallback:(id /* block */)arg1;
- (void)setError:(int)arg1;
- (void)setVideoFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end
