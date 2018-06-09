/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageHealthCheckPerformed : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _aliasesMatcheds;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _coarseMatcheds;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numMessages : 1; 
        unsigned int numberOfRequests : 1; 
        unsigned int numberOfResponses : 1; 
    }  _has;
    unsigned int  _numMessages;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _numMisseds;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _numOutOfOrders;
    unsigned int  _numberOfRequests;
    unsigned int  _numberOfResponses;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) unsigned int*aliasesMatcheds;
@property (nonatomic, readonly) unsigned long long aliasesMatchedsCount;
@property (nonatomic, readonly) unsigned int*coarseMatcheds;
@property (nonatomic, readonly) unsigned long long coarseMatchedsCount;
@property (nonatomic) bool hasNumMessages;
@property (nonatomic) bool hasNumberOfRequests;
@property (nonatomic) bool hasNumberOfResponses;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int numMessages;
@property (nonatomic, readonly) unsigned int*numMisseds;
@property (nonatomic, readonly) unsigned long long numMissedsCount;
@property (nonatomic, readonly) unsigned int*numOutOfOrders;
@property (nonatomic, readonly) unsigned long long numOutOfOrdersCount;
@property (nonatomic) unsigned int numberOfRequests;
@property (nonatomic) unsigned int numberOfResponses;
@property (nonatomic) unsigned long long timestamp;

- (void)addAliasesMatched:(unsigned int)arg1;
- (void)addCoarseMatched:(unsigned int)arg1;
- (void)addNumMissed:(unsigned int)arg1;
- (void)addNumOutOfOrder:(unsigned int)arg1;
- (unsigned int)aliasesMatchedAtIndex:(unsigned long long)arg1;
- (unsigned int*)aliasesMatcheds;
- (unsigned long long)aliasesMatchedsCount;
- (void)clearAliasesMatcheds;
- (void)clearCoarseMatcheds;
- (void)clearNumMisseds;
- (void)clearNumOutOfOrders;
- (unsigned int)coarseMatchedAtIndex:(unsigned long long)arg1;
- (unsigned int*)coarseMatcheds;
- (unsigned long long)coarseMatchedsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumMessages;
- (bool)hasNumberOfRequests;
- (bool)hasNumberOfResponses;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numMessages;
- (unsigned int)numMissedAtIndex:(unsigned long long)arg1;
- (unsigned int*)numMisseds;
- (unsigned long long)numMissedsCount;
- (unsigned int)numOutOfOrderAtIndex:(unsigned long long)arg1;
- (unsigned int*)numOutOfOrders;
- (unsigned long long)numOutOfOrdersCount;
- (unsigned int)numberOfRequests;
- (unsigned int)numberOfResponses;
- (bool)readFrom:(id)arg1;
- (void)setAliasesMatcheds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setCoarseMatcheds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasNumMessages:(bool)arg1;
- (void)setHasNumberOfRequests:(bool)arg1;
- (void)setHasNumberOfResponses:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumMessages:(unsigned int)arg1;
- (void)setNumMisseds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNumOutOfOrders:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNumberOfRequests:(unsigned int)arg1;
- (void)setNumberOfResponses:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
