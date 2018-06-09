/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSupport : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBIntentSupport> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _intentsRestrictedWhileLockeds;
    NSArray * _intentsSupporteds;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *intentsRestrictedWhileLockeds;
@property (nonatomic, readonly) unsigned long long intentsRestrictedWhileLockedsCount;
@property (nonatomic, copy) NSArray *intentsSupporteds;
@property (nonatomic, readonly) unsigned long long intentsSupportedsCount;
@property (readonly) Class superclass;

+ (Class)intentsRestrictedWhileLockedType;
+ (Class)intentsSupportedType;

- (void).cxx_destruct;
- (void)addIntentsRestrictedWhileLocked:(id)arg1;
- (void)addIntentsSupported:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearIntentsRestrictedWhileLockeds;
- (void)clearIntentsSupporteds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
- (id)intentsRestrictedWhileLockeds;
- (unsigned long long)intentsRestrictedWhileLockedsCount;
- (id)intentsSupportedAtIndex:(unsigned long long)arg1;
- (id)intentsSupporteds;
- (unsigned long long)intentsSupportedsCount;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setIntentsRestrictedWhileLockeds:(id)arg1;
- (void)setIntentsSupporteds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
