/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableEnumValue : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _displayNameLocID;
    long long  _index;
    NSString * _name;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameLocID;
@property (nonatomic) long long index;
@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)displayNameLocID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLocID:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setName:(id)arg1;

@end
