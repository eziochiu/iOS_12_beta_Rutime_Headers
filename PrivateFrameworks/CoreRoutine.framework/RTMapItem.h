/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTMapItem : NSObject <NSCopying, NSSecureCoding> {
    RTAddress * _address;
    NSDate * _creationDate;
    RTMapItemExtendedAttributes * _extendedAttributes;
    NSData * _geoMapItemHandle;
    NSUUID * _identifier;
    RTLocation * _location;
    unsigned long long  _muid;
    NSString * _name;
    long long  _resultProviderID;
    unsigned long long  _source;
    double  _weight;
}

@property (nonatomic, readonly) RTAddress *address;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) RTMapItemExtendedAttributes *extendedAttributes;
@property (nonatomic, readonly) NSData *geoMapItemHandle;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) RTLocation *location;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long resultProviderID;
@property (nonatomic) unsigned long long source;
@property (nonatomic, readonly) double weight;

+ (bool)hasKnownTypeItem:(id)arg1;
+ (id)sourceToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (double)weightForExtendedAttributes:(id)arg1;
+ (double)weightForSource:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)address;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedAttributes;
- (id)geoMapItemHandle;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 address:(id)arg3 location:(id)arg4 source:(unsigned long long)arg5 muid:(unsigned long long)arg6 resultProviderID:(long long)arg7 geoMapItemHandle:(id)arg8 creationDate:(id)arg9 extendedAttributes:(id)arg10;
- (id)initWithMapItemMO:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMapItem:(id)arg1;
- (id)location;
- (unsigned long long)muid;
- (id)name;
- (long long)resultProviderID;
- (void)setExtendedAttributes:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;
- (void)updateWeightWithSource:(unsigned long long)arg1 extendedAttributes:(id)arg2;
- (bool)validMUID;
- (double)weight;

@end
