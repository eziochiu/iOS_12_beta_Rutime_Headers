/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate> {
    CBPeripheralManager * peripheralManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)advertiseMIDIService;
- (void)dealloc;
- (id)init;
- (bool)isAdvertising;
- (bool)isLECapableHardware;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)stopAdvertisingMIDIService;

@end
