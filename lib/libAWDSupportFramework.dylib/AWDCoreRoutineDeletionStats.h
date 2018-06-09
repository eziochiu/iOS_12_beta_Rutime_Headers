/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineDeletionStats : PBCodable <NSCopying> {
    unsigned int  _deleteType;
    NSMutableArray * _groups;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deleteType : 1; 
        unsigned int syncEnabled : 1; 
    }  _has;
    bool  _syncEnabled;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int deleteType;
@property (nonatomic, retain) NSMutableArray *groups;
@property (nonatomic) bool hasDeleteType;
@property (nonatomic) bool hasSyncEnabled;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool syncEnabled;
@property (nonatomic) unsigned long long timestamp;

+ (Class)groupsType;

- (void)addGroups:(id)arg1;
- (void)clearGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deleteType;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groups;
- (id)groupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupsCount;
- (bool)hasDeleteType;
- (bool)hasSyncEnabled;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeleteType:(unsigned int)arg1;
- (void)setGroups:(id)arg1;
- (void)setHasDeleteType:(bool)arg1;
- (void)setHasSyncEnabled:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSyncEnabled:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)syncEnabled;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
