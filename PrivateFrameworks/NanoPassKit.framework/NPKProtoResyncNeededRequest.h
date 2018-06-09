/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying> {
    NPKProtoHash * _expectedHash;
    bool  _fullResyncNeeded;
    struct { 
        unsigned int resyncID : 1; 
        unsigned int fullResyncNeeded : 1; 
    }  _has;
    NSMutableArray * _manifestHashes;
    unsigned int  _resyncID;
    NSMutableArray * _uniqueIDs;
}

@property (nonatomic, retain) NPKProtoHash *expectedHash;
@property (nonatomic) bool fullResyncNeeded;
@property (nonatomic, readonly) bool hasExpectedHash;
@property (nonatomic) bool hasFullResyncNeeded;
@property (nonatomic) bool hasResyncID;
@property (nonatomic, retain) NSMutableArray *manifestHashes;
@property (nonatomic) unsigned int resyncID;
@property (nonatomic, retain) NSMutableArray *uniqueIDs;

+ (Class)manifestHashesType;
+ (Class)uniqueIDsType;

- (void).cxx_destruct;
- (void)addManifestHashes:(id)arg1;
- (void)addUniqueIDs:(id)arg1;
- (void)clearManifestHashes;
- (void)clearUniqueIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expectedHash;
- (bool)fullResyncNeeded;
- (bool)hasExpectedHash;
- (bool)hasFullResyncNeeded;
- (bool)hasResyncID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manifestHashes;
- (id)manifestHashesAtIndex:(unsigned long long)arg1;
- (unsigned long long)manifestHashesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)resyncID;
- (void)setExpectedHash:(id)arg1;
- (void)setFullResyncNeeded:(bool)arg1;
- (void)setHasFullResyncNeeded:(bool)arg1;
- (void)setHasResyncID:(bool)arg1;
- (void)setManifestHashes:(id)arg1;
- (void)setResyncID:(unsigned int)arg1;
- (void)setUniqueIDs:(id)arg1;
- (id)uniqueIDs;
- (id)uniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIDsCount;
- (void)writeTo:(id)arg1;

@end
