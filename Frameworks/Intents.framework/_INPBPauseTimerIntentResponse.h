/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPauseTimerIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPauseTimerIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _pausedTimers;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *pausedTimers;
@property (nonatomic, readonly) unsigned long long pausedTimersCount;
@property (readonly) Class superclass;

+ (Class)pausedTimersType;

- (void).cxx_destruct;
- (void)addPausedTimers:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearPausedTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)pausedTimers;
- (id)pausedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)pausedTimersCount;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setPausedTimers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
