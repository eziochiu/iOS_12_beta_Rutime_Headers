/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDeleteTimerIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDeleteTimerIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _deletedTimers;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *deletedTimers;
@property (nonatomic, readonly) unsigned long long deletedTimersCount;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)deletedTimersType;

- (void).cxx_destruct;
- (void)addDeletedTimers:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearDeletedTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedTimers;
- (id)deletedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedTimersCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDeletedTimers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
