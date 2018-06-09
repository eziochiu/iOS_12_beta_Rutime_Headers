/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotResolutionMulticardinalResult : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBIntentSlotResolutionMulticardinalResult> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _resolutionResults;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *resolutionResults;
@property (nonatomic, readonly) unsigned long long resolutionResultsCount;
@property (readonly) Class superclass;

+ (Class)resolutionResultsType;

- (void).cxx_destruct;
- (void)addResolutionResults:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearResolutionResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolutionResults;
- (id)resolutionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resolutionResultsCount;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setResolutionResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
