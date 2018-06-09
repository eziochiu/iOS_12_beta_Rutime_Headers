/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicReadResponse : NSObject <NAIdentifiable> {
    HMCharacteristic * _characteristic;
    NSError * _error;
    NSSet * _readTraits;
    id  _value;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *readTraits;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id value;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)characteristic;
- (id)description;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)arg1 readTraits:(id)arg2 value:(id)arg3 error:(id)arg4;
- (id)initWithHomeKitResponse:(id)arg1 value:(id)arg2 readTraits:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)readTraits;
- (id)value;
- (id)valueWithExpectedClass:(Class)arg1;

@end
