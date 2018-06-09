/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSPreferences : NSObject

+ (unsigned long long)_deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1;
+ (bool)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
+ (id)sharedPreferences;

- (id)CSSATBasePath;
- (id)_CSSATUpdatePath;
- (id)_CSSATUploadPath;
- (id)_getEnrolledLanguageList;
- (bool)_isDirectory:(id)arg1;
- (bool)_markSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (bool)_markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (bool)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2;
- (bool)_storeModeEnabled;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (bool)audioInjectionEnabled;
- (id)audioInjectionFilePath;
- (double)audioSessionActivationDelay;
- (id)baseDir;
- (bool)enableAudioInjection:(bool)arg1;
- (bool)fileLoggingIsEnabled;
- (id)fileLoggingLevel;
- (id)getUserVoiceProfileFileList;
- (id)getUserVoiceProfileUpdateDirectory;
- (id)getUserVoiceProfileUploadPath;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id*)arg1;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (unsigned long long)maxNumLoggingFiles;
- (bool)myriadFileLoggingEnabled;
- (void)notifyUserVoiceProfileUpdateReady;
- (void)notifyUserVoiceProfileUploadComplete;
- (double)remoteVoiceTriggerDelayTime;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (void)setAudioInjectionFilePath:(id)arg1;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (void)setFileLoggingLevel:(id)arg1;
- (bool)smartSiriVolumeSoftVolumeEnabled;
- (bool)speakerIdEnabled;
- (bool)twoShotNotificationEnabled;
- (id)voiceTriggerAudioLogDirectory;
- (bool)voiceTriggerEnabled;
- (bool)voiceTriggerInCoreSpeech;

@end
