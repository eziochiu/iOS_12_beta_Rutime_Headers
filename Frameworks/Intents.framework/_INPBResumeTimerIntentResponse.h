/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBResumeTimerIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBResumeTimerIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _resumedTimers;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *resumedTimers;
@property (nonatomic, readonly) unsigned long long resumedTimersCount;
@property (readonly) Class superclass;

+ (Class)resumedTimersType;

- (void).cxx_destruct;
- (void)addResumedTimers:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearResumedTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resumedTimers;
- (id)resumedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)resumedTimersCount;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setResumedTimers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
