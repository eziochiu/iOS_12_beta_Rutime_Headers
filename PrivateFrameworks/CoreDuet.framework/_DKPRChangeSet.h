/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPRChangeSet : PBCodable <NSCopying> {
    NSMutableArray * _deleteEventIDs;
    NSMutableArray * _events;
}

@property (nonatomic, retain) NSMutableArray *deleteEventIDs;
@property (nonatomic, retain) NSMutableArray *events;

+ (Class)deleteEventIDType;
+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addDeleteEventID:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)clearDeleteEventIDs;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteEventIDAtIndex:(unsigned long long)arg1;
- (id)deleteEventIDs;
- (unsigned long long)deleteEventIDsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeleteEventIDs:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
