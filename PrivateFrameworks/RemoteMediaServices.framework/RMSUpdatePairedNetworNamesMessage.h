/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSUpdatePairedNetworNamesMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    NSMutableArray * _pairedNetworkNames;
    int  _sessionIdentifier;
}

@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic, retain) NSMutableArray *pairedNetworkNames;
@property (nonatomic) int sessionIdentifier;

+ (Class)pairedNetworkNamesType;

- (void).cxx_destruct;
- (void)addPairedNetworkNames:(id)arg1;
- (void)clearPairedNetworkNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairedNetworkNames;
- (id)pairedNetworkNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairedNetworkNamesCount;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setPairedNetworkNames:(id)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end