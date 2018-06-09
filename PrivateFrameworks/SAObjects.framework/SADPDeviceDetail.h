/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADPDeviceDetail : SADomainObject <SAAceSerializable>

@property (nonatomic) bool canPlaySound;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *deviceLocality;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) bool foundNearby;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAPerson *owner;
@property (nonatomic, copy) NSString *productName;
@property (readonly) Class superclass;
@property (nonatomic) bool thisDevice;

+ (id)deviceDetail;
+ (id)deviceDetailWithDictionary:(id)arg1 context:(id)arg2;

- (bool)canPlaySound;
- (id)deviceClass;
- (id)deviceId;
- (id)deviceLocality;
- (id)deviceName;
- (id)encodedClassName;
- (bool)foundNearby;
- (id)groupIdentifier;
- (id)owner;
- (id)productName;
- (void)setCanPlaySound:(bool)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setDeviceLocality:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setFoundNearby:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setThisDevice:(bool)arg1;
- (bool)thisDevice;

@end
