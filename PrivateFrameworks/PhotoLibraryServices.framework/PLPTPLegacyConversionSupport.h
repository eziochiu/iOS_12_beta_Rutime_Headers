/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport> {
    PHMediaFormatConversionManager * _mediaFormatConversionManager;
    PFMediaCapabilities * _peerMediaCapabilities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsTranscodeChoice;

- (void).cxx_destruct;
- (id)conversionResultForAsset:(id)arg1 isVideo:(bool)arg2 isRender:(bool)arg3;
- (id)init;
- (bool)supportsTranscodeChoice;

@end
