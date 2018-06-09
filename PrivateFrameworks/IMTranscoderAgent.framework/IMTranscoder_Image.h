/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMTranscoder_Image : IMTranscoder {
    double  _overrideJPEGCompressionQuality;
    bool  _stripImageMetadata;
}

@property (nonatomic) double overrideJPEGCompressionQuality;
@property (nonatomic) bool stripImageMetadata;

+ (bool)_canConvertPNGToJPEG:(struct CGImage { }*)arg1;
+ (id)excludedUTIs;
+ (id)supportedUTIs;

- (id)_checkAndSaveImageData:(id)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString { }*)arg3 withMaxByteSize:(unsigned long long)arg4 actualSize:(unsigned long long*)arg5 usedLengthIndex:(int*)arg6 currentIndex:(int)arg7;
- (unsigned long long)_getImageWidth:(struct CGImageSource { }*)arg1;
- (id)_getScaleFactorArray:(id)arg1 transferURL:(id)arg2 outputURLs:(id)arg3;
- (bool)_isHEIFImageFormat:(struct CGImageSource { }*)arg1;
- (bool)_isWideGamutImage:(struct CGImageSource { }*)arg1;
- (id)_newGeneratedImage:(struct CGImageSource { }*)arg1 target:(long long)arg2 hardwareEncoder:(id)arg3 inFormat:(struct __CFString { }*)arg4 fromFormat:(struct __CFString { }*)arg5 withMaxLength:(unsigned long long)arg6 withMaxCount:(unsigned long long)arg7 withCompressionQuality:(double)arg8 enforceMaxes:(bool)arg9 subsampling:(int)arg10;
- (void)_setWideGamutProperties:(id)arg1 scaledImage:(struct CGImage { }*)arg2 imageDestination:(struct CGImageDestination { }*)arg3 index:(unsigned long long)arg4;
- (id)_writeHEIFImage:(struct CGImageSource { }*)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString { }*)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long*)arg6 startingLengthIndex:(int)arg7 usedLengthIndex:(int*)arg8 telemetry:(id)arg9;
- (id)_writeImage:(struct CGImageSource { }*)arg1 sourceURL:(id)arg2 target:(long long)arg3 hardwareEncoder:(id)arg4 inFormat:(struct __CFString { }*)arg5 fromFormat:(struct __CFString { }*)arg6 withMaxByteSize:(unsigned long long)arg7 maxDimension:(unsigned long long)arg8 actualSize:(unsigned long long*)arg9 startingLengthIndex:(int)arg10 usedLengthIndex:(int*)arg11 estimator:(id)arg12 telemetry:(id)arg13;
- (id)_writeImageData:(id)arg1 inFormat:(struct __CFString { }*)arg2 sourceURL:(id)arg3;
- (id)_writeRepresentationsForImage:(struct CGImageSource { }*)arg1 target:(long long)arg2 sourceURL:(id)arg3 sizes:(id)arg4 maxDimension:(unsigned long long)arg5 srcUTI:(struct __CFString { }*)arg6 inFormat:(struct __CFString { }*)arg7 estimator:(id)arg8 telemetry:(id)arg9;
- (id)_writeWideGamutImage:(struct CGImageSource { }*)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString { }*)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long*)arg6 startingLengthIndex:(int)arg7 usedLengthIndex:(int*)arg8 telemetry:(id)arg9;
- (double)overrideJPEGCompressionQuality;
- (void)setOverrideJPEGCompressionQuality:(double)arg1;
- (void)setStripImageMetadata:(bool)arg1;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (bool)stripImageMetadata;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(id /* block */)arg9;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(id /* block */)arg3;

@end
