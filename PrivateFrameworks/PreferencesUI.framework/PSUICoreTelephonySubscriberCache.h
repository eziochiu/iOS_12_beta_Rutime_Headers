/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICoreTelephonySubscriberCache : NSObject {
    CoreTelephonyClient * _client;
    NSMutableDictionary * _mobileEquipmentInfoDict;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *mobileEquipmentInfoDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)client;
- (void)fetchMobileEquipmentInfo;
- (id)init;
- (id)initPrivate;
- (id)mobileEquipmentInfo:(id)arg1;
- (id)mobileEquipmentInfoDict;
- (void)setClient:(id)arg1;
- (void)setMobileEquipmentInfoDict:(id)arg1;

@end
