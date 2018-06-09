/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForTimersIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchForTimersIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _timers;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *timers;
@property (nonatomic, readonly) unsigned long long timersCount;

+ (Class)timersType;

- (void).cxx_destruct;
- (void)addTimers:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setTimers:(id)arg1;
- (id)timers;
- (id)timersAtIndex:(unsigned long long)arg1;
- (unsigned long long)timersCount;
- (void)writeTo:(id)arg1;

@end
