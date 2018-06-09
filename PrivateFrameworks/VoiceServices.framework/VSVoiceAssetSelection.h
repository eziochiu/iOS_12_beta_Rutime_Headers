/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSVoiceAssetSelection : NSObject {
    ASAsset * _asset;
    NSString * _builtInVoicePath;
    VSVoiceAsset * _voiceData;
    NSString * _voicePath;
}

@property (retain) ASAsset *asset;
@property (retain) NSString *builtInVoicePath;
@property (retain) VSVoiceAsset *voiceData;
@property (nonatomic, retain) NSString *voicePath;

- (void).cxx_destruct;
- (id)asset;
- (id)builtInVoicePath;
- (id)descriptiveKey;
- (bool)isDownloading;
- (bool)isInstalled;
- (id)key;
- (void)setAsset:(id)arg1;
- (void)setBuiltInVoicePath:(id)arg1;
- (void)setVoiceData:(id)arg1;
- (void)setVoicePath:(id)arg1;
- (unsigned long long)size;
- (id)voiceData;
- (id)voicePath;

@end
