/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineDeletionGroupStats : PBCodable <NSCopying> {
    struct { 
        unsigned int itemType : 1; 
        unsigned int oldestRecordAgeInDays : 1; 
    }  _has;
    unsigned int  _itemType;
    unsigned int  _oldestRecordAgeInDays;
    NSMutableArray * _records;
}

@property (nonatomic) bool hasItemType;
@property (nonatomic) bool hasOldestRecordAgeInDays;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) unsigned int oldestRecordAgeInDays;
@property (nonatomic, retain) NSMutableArray *records;

+ (Class)recordsType;

- (void)addRecords:(id)arg1;
- (void)clearRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasItemType;
- (bool)hasOldestRecordAgeInDays;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)itemType;
- (void)mergeFrom:(id)arg1;
- (unsigned int)oldestRecordAgeInDays;
- (bool)readFrom:(id)arg1;
- (id)records;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)setHasItemType:(bool)arg1;
- (void)setHasOldestRecordAgeInDays:(bool)arg1;
- (void)setItemType:(unsigned int)arg1;
- (void)setOldestRecordAgeInDays:(unsigned int)arg1;
- (void)setRecords:(id)arg1;
- (void)writeTo:(id)arg1;

@end
