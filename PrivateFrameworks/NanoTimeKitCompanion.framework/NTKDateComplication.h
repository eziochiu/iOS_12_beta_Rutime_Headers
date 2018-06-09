/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDateComplication : NTKComplication {
    unsigned long long  _dateStyle;
}

@property (nonatomic, readonly) unsigned long long dateStyle;

+ (id)complicationWithDateStyle:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_migrateFromSkiHillWithCoder:(id)arg1;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKey;
- (unsigned long long)dateStyle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end
