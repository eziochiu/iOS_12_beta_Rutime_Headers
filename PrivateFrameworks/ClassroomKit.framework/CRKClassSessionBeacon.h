/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassSessionBeacon : NSObject <CBPeripheralManagerDelegate> {
    DMFControlSessionIdentifier * _advertisedIdentifier;
    unsigned short  _flags;
    bool  _isAdvertising;
    NSDictionary * mBeaconAdvertisement;
    CBPeripheralManager * mPeripheralManager;
}

@property (nonatomic, copy) DMFControlSessionIdentifier *advertisedIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short flags;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAdvertising;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)advertisedIdentifier;
- (unsigned short)flags;
- (bool)isAdvertising;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)setAdvertisedIdentifier:(id)arg1;
- (void)setFlags:(unsigned short)arg1;
- (void)setIsAdvertising:(bool)arg1;
- (void)startAdvertisingClassSessionWithIdentifier:(id)arg1;
- (void)stopAdvertising;

@end
