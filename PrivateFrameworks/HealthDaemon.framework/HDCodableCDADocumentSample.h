/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying> {
    NSString * _authorName;
    NSString * _custodianName;
    NSData * _documentData;
    struct { 
        unsigned int omittedContent : 1; 
    }  _has;
    int  _omittedContent;
    NSString * _patientName;
    HDCodableSample * _sample;
    NSString * _title;
}

@property (nonatomic, retain) NSString *authorName;
@property (nonatomic, retain) NSString *custodianName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *documentData;
@property (nonatomic, readonly) bool hasAuthorName;
@property (nonatomic, readonly) bool hasCustodianName;
@property (nonatomic, readonly) bool hasDocumentData;
@property (nonatomic) bool hasOmittedContent;
@property (nonatomic, readonly) bool hasPatientName;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) int omittedContent;
@property (nonatomic, retain) NSString *patientName;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (int)StringAsOmittedContent:(id)arg1;
- (bool)applyToObject:(id)arg1;
- (id)authorName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianName;
- (id)description;
- (id)dictionaryRepresentation;
- (id)documentData;
- (bool)hasAuthorName;
- (bool)hasCustodianName;
- (bool)hasDocumentData;
- (bool)hasOmittedContent;
- (bool)hasPatientName;
- (bool)hasSample;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)omittedContent;
- (id)omittedContentAsString:(int)arg1;
- (id)patientName;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setAuthorName:(id)arg1;
- (void)setCustodianName:(id)arg1;
- (void)setDocumentData:(id)arg1;
- (void)setHasOmittedContent:(bool)arg1;
- (void)setOmittedContent:(int)arg1;
- (void)setPatientName:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
