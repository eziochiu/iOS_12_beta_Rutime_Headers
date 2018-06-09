/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationSampleData : NSObject <NSSecureCoding> {
    NSString * _applicationID;
    NSString * _clientID;
    NSMutableDictionary * _familyToTemplate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _supportedFamilies;
}

@property (copy) NSString *applicationID;
@property (copy) NSString *clientID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)applicationID;
- (id)clientID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedFamilies:(id)arg1;
- (id)loadedFamilies;
- (void)setApplicationID:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setTemplate:(id)arg1 forFamily:(long long)arg2;
- (id)supportedFamilies;
- (id)templateForFamily:(long long)arg1;

@end
