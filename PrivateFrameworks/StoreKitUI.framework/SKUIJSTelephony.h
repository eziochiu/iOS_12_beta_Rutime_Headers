/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIJSTelephony : IKJSObject <SKUIJSTelephony> {
    bool  _isObserving;
    NSObject<OS_dispatch_queue> * _telephonyQueue;
    struct __CTServerConnection { } * _telephonyServer;
}

@property (getter=isCellularRoaming, nonatomic, readonly) bool cellularRoaming;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *mobileCountryCode;
@property (nonatomic, readonly) NSString *mobileNetworkCode;
@property (nonatomic, readonly) NSString *operatorName;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *providerName;

- (void).cxx_destruct;
- (struct __CTServerConnection { }*)_telephonyServer;
- (void)beginObserving;
- (id)countryCode;
- (void)dealloc;
- (id)formattedPhoneNumber:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (bool)isCellularRoaming;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (id)operatorName;
- (id)phoneNumber;
- (id)providerName;
- (void)sendSMSWithBodyText:(id)arg1 :(id)arg2 :(id)arg3;

@end
