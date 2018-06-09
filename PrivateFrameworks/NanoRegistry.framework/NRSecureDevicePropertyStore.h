/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRSecureDevicePropertyStore : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _IDToProperty;
    bool  _dirty;
    NSObject<OS_dispatch_queue> * _dirtyQueue;
    NSMutableDictionary * _propertyToID;
}

@property (nonatomic, readonly) bool dirty;

+ (id)classTypes;
+ (id)enclosedClassTypes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allSecurePropertyIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (bool)dirty;
- (void)encodeWithCoder:(id)arg1;
- (void)forceImportSecureProperties:(id)arg1;
- (void)forceWriteSecurePropertyID:(id)arg1 withValue:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeSecureProperty:(id)arg1;
- (id)securePropertyForID:(id)arg1;
- (id)storeSecureProperty:(id)arg1;

@end