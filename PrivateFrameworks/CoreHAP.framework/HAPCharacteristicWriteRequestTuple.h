/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicWriteRequestTuple : HMFObject {
    NSData * _authorizationData;
    HAPCharacteristic * _characteristic;
    NSNumber * _enableEvents;
    bool  _includeResponseValue;
    bool  _timedWrite;
    id  _value;
    unsigned long long  _writeType;
}

@property (nonatomic, retain) NSData *authorizationData;
@property (nonatomic, retain) HAPCharacteristic *characteristic;
@property (nonatomic, retain) NSNumber *enableEvents;
@property (nonatomic) bool includeResponseValue;
@property (nonatomic) bool timedWrite;
@property (nonatomic, retain) id value;
@property (nonatomic) unsigned long long writeType;

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(bool)arg4 responseValue:(bool)arg5 type:(unsigned long long)arg6;

- (void).cxx_destruct;
- (id)authorizationData;
- (id)characteristic;
- (id)enableEvents;
- (bool)includeResponseValue;
- (void)setAuthorizationData:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setEnableEvents:(id)arg1;
- (void)setIncludeResponseValue:(bool)arg1;
- (void)setTimedWrite:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setWriteType:(unsigned long long)arg1;
- (bool)timedWrite;
- (id)value;
- (unsigned long long)writeType;

@end
