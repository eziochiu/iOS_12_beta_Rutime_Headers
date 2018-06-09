/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NAIdentityBuilder : NSObject <NSCopying> {
    NAIdentity * _builtIdentity;
    NSMutableArray * _characteristics;
}

@property (nonatomic, retain) NAIdentity *builtIdentity;
@property (nonatomic, retain) NSMutableArray *characteristics;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)buildPointerIdentity;
+ (id)builder;
+ (id)builderWithIdentity:(id)arg1;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)appendCharacteristic:(id /* block */)arg1;
- (id)appendCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;
- (id)appendCharacteristic:(id /* block */)arg1 withRole:(long long)arg2 comparatorBlock:(id /* block */)arg3 hashBlock:(id /* block */)arg4;
- (id)appendDoubleCharacteristic:(id /* block */)arg1;
- (id)appendDoubleCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;
- (id)appendFloatCharacteristic:(id /* block */)arg1;
- (id)appendFloatCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;
- (id)appendIntegerCharacteristic:(id /* block */)arg1;
- (id)appendIntegerCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;
- (id)appendRangeCharacteristic:(id /* block */)arg1;
- (id)appendRangeCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;
- (id)appendUnsignedIntegerCharacteristic:(id /* block */)arg1;
- (id)appendUnsignedIntegerCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;
- (id)build;
- (id)builtIdentity;
- (id)characteristics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashOfObject:(id)arg1;
- (id)init;
- (id)initWithIdentity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isObject:(id)arg1 equalToObject:(id)arg2;
- (void)setBuiltIdentity:(id)arg1;
- (void)setCharacteristics:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

- (id)appendCGFloatCharacteristic:(id /* block */)arg1;
- (id)appendCGFloatCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;
- (id)appendCGPointCharacteristic:(id /* block */)arg1;
- (id)appendCGPointCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;
- (id)appendCGRectCharacteristic:(id /* block */)arg1;
- (id)appendCGRectCharacteristic:(id /* block */)arg1 withRole:(long long)arg2;

@end
