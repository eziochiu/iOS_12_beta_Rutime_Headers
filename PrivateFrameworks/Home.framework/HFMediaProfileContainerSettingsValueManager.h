/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaProfileContainerSettingsValueManager : NSObject {
    HMHome * _home;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    HMAccessorySettings * _settings;
    NSMutableDictionary * _transactionStacks;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) NSSet *pendingWrites;
@property (nonatomic, retain) HMAccessorySettings *settings;
@property (nonatomic, retain) NSMutableDictionary *transactionStacks;

- (void).cxx_destruct;
- (void)_clearTransaction:(id)arg1;
- (void)_dispatchDidWriteValueForSettings:(id)arg1 failedSettings:(id)arg2;
- (void)_dispatchWillWriteValueForSettings:(id)arg1;
- (void)_executeNextPendingWriteForSetting:(id)arg1;
- (id)_valueForSetting:(id)arg1 logRead:(bool)arg2;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2 changeType:(unsigned long long)arg3;
- (id)home;
- (id)initWithSettings:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)mediaProfileContainer;
- (id)pendingWrites;
- (void)setSettings:(id)arg1;
- (void)setTransactionStacks:(id)arg1;
- (id)settings;
- (id)transactionStacks;
- (id)valueForSetting:(id)arg1;
- (id)valueForSettingAtKeyPath:(id)arg1;

@end
