/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerAssetChangeMonitor : NSObject {
    <CSVoiceTriggerAssetChangeDelegate> * _delegate;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CSVoiceTriggerAssetChangeDelegate> *delegate;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startMonitoring;

@end