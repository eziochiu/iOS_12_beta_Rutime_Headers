/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSAssetUpdateListener : NSObject {
    PCPersistentTimer * _assetCleanupTimer;
    bool  _isListening;
}

+ (id)sharedListener;

- (id)_initShared;
- (bool)assetDownloadStatus:(id)arg1 progress:(float*)arg2 size:(long long*)arg3;
- (int)assetStatusForLanguage:(id)arg1;
- (void)downloadAssetForLanguage:(id)arg1;
- (id)downloadingAssetLanguage;
- (id)init;
- (void)removeAssetForLanguage:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end
