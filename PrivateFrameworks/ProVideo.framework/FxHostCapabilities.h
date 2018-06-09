/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface FxHostCapabilities : NSObject {
    struct FxHostCapabilitiesPriv { id x1; id x2; } * _hostCapPriv;
}

- (void)dealloc;
- (bool)formatsFloatRGBABitmapsAsARGB;
- (id)glContextPixelFormatAttributes;
- (id)hostID;
- (bool)hostIsFCE;
- (bool)hostIsFCP;
- (bool)hostIsMotion;
- (unsigned int)hostVersionNumber;
- (id)initWithAPIManager:(id)arg1;
- (bool)notifiesParameterChangedForGenerators;
- (bool)parameterChangedUsableForAllParameters;
- (bool)supportsDisabledParameters;
- (bool)supportsGroupParameters;
- (bool)supportsHiddenParameters;
- (bool)supportsTemporalBitmaps;
- (unsigned long long)timeBase;
- (bool)upscalesFields;

@end
