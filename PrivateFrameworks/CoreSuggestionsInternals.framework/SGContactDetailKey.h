/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactDetailKey : NSObject <SGEntityKey> {
    SGIdentityKey * _identityKey;
    NSString * _label;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SGIdentityKey *identityKey;
@property (nonatomic, readonly) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *value;

+ (bool)isSupportedEntityType:(long long)arg1;
+ (id)prefixForForIdentityKey:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identityKey;
- (id)initWithIdentityKey:(id)arg1 label:(id)arg2 normalizedValue:(id)arg3;
- (id)initWithSerialized:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactDetailKey:(id)arg1;
- (id)label;
- (id)serialize;
- (id)value;

@end
