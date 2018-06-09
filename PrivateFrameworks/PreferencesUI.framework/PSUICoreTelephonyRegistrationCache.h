/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICoreTelephonyRegistrationCache : NSObject <CoreTelephonyClientRegistrationDelegate> {
    CoreTelephonyClient * _client;
    NSObject<OS_dispatch_group> * _imsStatusGroup;
    bool  _imsStatusInitialized;
    NSMutableDictionary * _imsStatusSMSDict;
    NSMutableDictionary * _imsStatusVoiceDict;
    NSMutableDictionary * _maxDataRateDict;
    NSMutableDictionary * _operatorNameDict;
    NSMutableDictionary * _rejectCauseCodeDict;
    NSMutableDictionary * _supportedDataRatesDict;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_group> *imsStatusGroup;
@property bool imsStatusInitialized;
@property (retain) NSMutableDictionary *imsStatusSMSDict;
@property (retain) NSMutableDictionary *imsStatusVoiceDict;
@property (retain) NSMutableDictionary *maxDataRateDict;
@property (retain) NSMutableDictionary *operatorNameDict;
@property (retain) NSMutableDictionary *rejectCauseCodeDict;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *supportedDataRatesDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)IMSStatusSMS:(id)arg1;
- (bool)IMSStatusVoice:(id)arg1;
- (void)beginPrefetchingIMSStatus;
- (id)client;
- (void)fetchLocalizedOperatorName;
- (void)fetchMaxDataRate;
- (void)fetchRejectCauseCode;
- (void)fetchSupportedDataRates;
- (id)imsStatusGroup;
- (bool)imsStatusInitialized;
- (id)imsStatusSMSDict;
- (id)imsStatusVoiceDict;
- (id)init;
- (id)initPrivate;
- (id)localizedOperatorName:(id)arg1;
- (long long)maxDataRate:(id)arg1;
- (id)maxDataRateDict;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (id)operatorNameDict;
- (id)rejectCauseCode:(id)arg1;
- (id)rejectCauseCodeDict;
- (void)setClient:(id)arg1;
- (void)setImsStatusGroup:(id)arg1;
- (void)setImsStatusInitialized:(bool)arg1;
- (void)setImsStatusSMSDict:(id)arg1;
- (void)setImsStatusVoiceDict:(id)arg1;
- (void)setMaxDataRate:(id)arg1 dataRate:(long long)arg2;
- (void)setMaxDataRateDict:(id)arg1;
- (void)setOperatorNameDict:(id)arg1;
- (void)setRejectCauseCodeDict:(id)arg1;
- (void)setSupportedDataRatesDict:(id)arg1;
- (id)supportedDataRates:(id)arg1;
- (id)supportedDataRatesDict;
- (void)willEnterForeground;

@end
