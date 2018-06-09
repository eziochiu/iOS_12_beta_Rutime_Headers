/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICoreTelephonyCarrierBundleCache : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    NSMutableDictionary * _carrierBundleVersionDict;
    NSObject<OS_dispatch_group> * _carrierBundleVersionGroup;
    bool  _carrierBundleVersionInitialized;
    NSMutableDictionary * _carrierNameDict;
    CoreTelephonyClient * _client;
}

@property (retain) NSMutableDictionary *carrierBundleVersionDict;
@property (retain) NSObject<OS_dispatch_group> *carrierBundleVersionGroup;
@property bool carrierBundleVersionInitialized;
@property (retain) NSMutableDictionary *carrierNameDict;
@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)activeDataCarrierName;
- (void)beginPrefetchingCarrierBundleVersion;
- (void)carrierBundleChange:(id)arg1;
- (id)carrierBundleVersion:(id)arg1;
- (id)carrierBundleVersionDict;
- (id)carrierBundleVersionGroup;
- (bool)carrierBundleVersionInitialized;
- (id)carrierName:(id)arg1;
- (id)carrierNameDict;
- (id)client;
- (void)fetchCarrierName;
- (id)init;
- (id)initPrivate;
- (void)setCarrierBundleVersionDict:(id)arg1;
- (void)setCarrierBundleVersionGroup:(id)arg1;
- (void)setCarrierBundleVersionInitialized:(bool)arg1;
- (void)setCarrierNameDict:(id)arg1;
- (void)setClient:(id)arg1;

@end
