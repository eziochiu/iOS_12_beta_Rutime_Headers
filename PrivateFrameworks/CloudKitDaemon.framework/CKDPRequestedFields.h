/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRequestedFields : PBCodable <NSCopying> {
    NSMutableArray * _fields;
}

@property (nonatomic, retain) NSMutableArray *fields;

+ (Class)fieldsType;

- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)addFields:(id)arg1;
- (void)clearFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFields:(id)arg1;
- (void)writeTo:(id)arg1;

@end
