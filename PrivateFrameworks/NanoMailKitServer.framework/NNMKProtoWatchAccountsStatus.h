/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoWatchAccountsStatus : PBCodable <NSCopying> {
    NSMutableArray * _accountsStatus;
}

@property (nonatomic, retain) NSMutableArray *accountsStatus;

+ (Class)accountsStatusType;

- (void).cxx_destruct;
- (id)accountsStatus;
- (id)accountsStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountsStatusCount;
- (void)addAccountsStatus:(id)arg1;
- (void)clearAccountsStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountsStatus:(id)arg1;
- (void)writeTo:(id)arg1;

@end
