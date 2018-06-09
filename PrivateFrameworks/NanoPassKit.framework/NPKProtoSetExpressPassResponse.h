/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSetExpressPassResponse : PBCodable <NSCopying> {
    NSData * _actualExpressPassInformation;
    NSString * _actualUniqueID;
    bool  _cancelled;
    NSMutableArray * _currentUniqueIDs;
    struct { 
        unsigned int cancelled : 1; 
        unsigned int needsUnlock : 1; 
        unsigned int pending : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _needsUnlock;
    bool  _pending;
    bool  _success;
}

@property (nonatomic, retain) NSData *actualExpressPassInformation;
@property (nonatomic, retain) NSString *actualUniqueID;
@property (nonatomic) bool cancelled;
@property (nonatomic, retain) NSMutableArray *currentUniqueIDs;
@property (nonatomic, readonly) bool hasActualExpressPassInformation;
@property (nonatomic, readonly) bool hasActualUniqueID;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasNeedsUnlock;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool needsUnlock;
@property (nonatomic) bool pending;
@property (nonatomic) bool success;

+ (Class)currentUniqueIDsType;

- (void).cxx_destruct;
- (id)actualExpressPassInformation;
- (id)actualUniqueID;
- (void)addCurrentUniqueIDs:(id)arg1;
- (bool)cancelled;
- (void)clearCurrentUniqueIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUniqueIDs;
- (id)currentUniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentUniqueIDsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActualExpressPassInformation;
- (bool)hasActualUniqueID;
- (bool)hasCancelled;
- (bool)hasNeedsUnlock;
- (bool)hasPending;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)needsUnlock;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setActualExpressPassInformation:(id)arg1;
- (void)setActualUniqueID:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCurrentUniqueIDs:(id)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasNeedsUnlock:(bool)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setNeedsUnlock:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
