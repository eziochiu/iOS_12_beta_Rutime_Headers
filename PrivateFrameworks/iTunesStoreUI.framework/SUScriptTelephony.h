/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptTelephony : SUScriptObject {
    NSObject<OS_dispatch_queue> * _telephonyQueue;
    struct __CTServerConnection { } * _telephonyServer;
}

@property (getter=isCellularRoaming, nonatomic, readonly) id cellularRoaming;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *mobileCountryCode;
@property (nonatomic, readonly) NSString *mobileNetworkCode;
@property (nonatomic, readonly) NSString *operatorName;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *providerName;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (bool)_checkIfIsAllowed;
- (id)_className;
- (id)attributeKeys;
- (id)countryCode;
- (void)dealloc;
- (id)formattedPhoneNumber:(id)arg1;
- (id)init;
- (id)isCellularRoaming;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (id)operatorName;
- (id)phoneNumber;
- (id)providerName;
- (id)scriptAttributeKeys;
- (id)sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3;

@end
