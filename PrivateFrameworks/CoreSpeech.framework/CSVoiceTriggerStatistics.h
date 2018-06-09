/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _triggerCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)clearTriggerCount;
- (void)increaseTriggerCount;
- (id)init;
- (unsigned long long)triggerCount;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;

@end
