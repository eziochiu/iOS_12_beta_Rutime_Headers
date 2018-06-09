/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRMutableDeviceProperty : NRMutableStateBase {
    NRPBMutableDeviceProperty * _protobuf;
    <NSObject><NSCopying> * _value;
}

@property (nonatomic, retain) NRPBMutableDeviceProperty *protobuf;
@property (nonatomic, readonly, retain) <NSObject><NSCopying> *value;

+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)enclosedClassTypes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applyDiff:(id)arg1 upOnly:(bool)arg2 notifyParent:(bool)arg3 unconditional:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (void)setProtobuf:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end