/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBActivity : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBActivity> {
    NSArray * _activityDescriptors;
    _INPBString * _activityType;
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *activityDescriptors;
@property (nonatomic, readonly) unsigned long long activityDescriptorsCount;
@property (nonatomic, retain) _INPBString *activityType;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActivityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)activityDescriptorsType;

- (void).cxx_destruct;
- (id)activityDescriptors;
- (id)activityDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityDescriptorsCount;
- (id)activityType;
- (void)addActivityDescriptors:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearActivityDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasActivityType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityDescriptors:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)writeTo:(id)arg1;

@end
