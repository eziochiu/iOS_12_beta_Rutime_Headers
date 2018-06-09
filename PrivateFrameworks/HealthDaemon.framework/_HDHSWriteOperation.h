/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHSWriteOperation : NSObject {
    HDHealthServiceCharacteristic * _characteristic;
    id /* block */  _completion;
    bool  _expectResponse;
}

@property (nonatomic, retain) HDHealthServiceCharacteristic *characteristic;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool expectResponse;

- (void).cxx_destruct;
- (id)characteristic;
- (id /* block */)completion;
- (bool)expectResponse;
- (void)setCharacteristic:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setExpectResponse:(bool)arg1;

@end
