/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCancelWorkoutIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCancelWorkoutIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _workoutName;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasWorkoutName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *workoutName;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasWorkoutName;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setWorkoutName:(id)arg1;
- (id)workoutName;
- (void)writeTo:(id)arg1;

@end
