/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPseudoContactKey : NSObject <SGEntityKey> {
    SGIdentityKey * _identityKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SGIdentityKey *identityKey;
@property (readonly) Class superclass;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identityKey;
- (id)initWithEmail:(id)arg1;
- (id)initWithIdentityKey:(id)arg1;
- (id)initWithNormalizedEmail:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPseudoContactKey:(id)arg1;
- (id)serialize;

@end
