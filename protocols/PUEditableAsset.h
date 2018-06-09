/* made by EzioChiu.
 */

@protocol PUEditableAsset <PUDisplayAsset>

@required

- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (NSDictionary *)imageProperties;
- (bool)isAdjusted;
- (bool)isContentAdjustmentAllowed;
- (bool)isHighFramerateVideo;
- (bool)isInPlaceVideoTrimAllowed;
- (bool)isLivePhotoVisibilityAdjustmentAllowed;
- (bool)isOriginalRaw;
- (bool)isResourceDownloadPossible;
- (unsigned long long)livePhotoVisibilityState;
- (unsigned long long)mediaSubtypes;
- (int)originalEXIFOrientation;
- (unsigned long long)originalResourceChoice;
- (NSString *)pathForOriginalImageFile;
- (NSString *)pathForOriginalVideoFile;
- (NSString *)pathForTrimmedVideoFile;
- (unsigned long long)requestContentEditingInputWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: PHContentEditingInputRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PHContentEditingInput *, NSDictionary *, void*
- (PFVideoAVObjectBuilder *)videoObjectBuilder;

@end
