/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSCoreSpeechServices : NSObject

+ (id)getCoreSpeechServiceConnection;
+ (id)getCoreSpeechXPCConnection;
+ (long long)getFirstPassRunningMode;
+ (void)requestUpdatedSATAudio;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(id /* block */)arg5;

@end
