/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDateTimeRangeList : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDateTimeRangeList> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBCondition * _condition;
    NSArray * _dateRanges;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, copy) NSArray *dateRanges;
@property (nonatomic, readonly) unsigned long long dateRangesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)dateRangeType;

- (void).cxx_destruct;
- (void)addDateRange:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearDateRanges;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRangeAtIndex:(unsigned long long)arg1;
- (id)dateRanges;
- (unsigned long long)dateRangesCount;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDateRanges:(id)arg1;
- (void)writeTo:(id)arg1;

@end
