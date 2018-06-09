/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFGasQueryProxy : NSObject <WFWiFiGasProxy> {
    struct __WiFiDeviceClient { } * _device;
    id /* block */  _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct __WiFiDeviceClient { }*device;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_processGasResults:(id)arg1 error:(int)arg2;
- (struct __WiFiDeviceClient { }*)device;
- (void)gasQueryForRecords:(id)arg1 request:(id)arg2 handler:(id /* block */)arg3;
- (id /* block */)handler;
- (void)setDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
