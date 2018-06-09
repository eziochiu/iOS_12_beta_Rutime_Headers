/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying> {
    NPKProtoPassSyncState * _libraryPassSyncState;
    NSData * _unrecognizedReconciledStateHash;
}

@property (nonatomic, readonly) bool hasLibraryPassSyncState;
@property (nonatomic, readonly) bool hasUnrecognizedReconciledStateHash;
@property (nonatomic, retain) NPKProtoPassSyncState *libraryPassSyncState;
@property (nonatomic, retain) NSData *unrecognizedReconciledStateHash;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLibraryPassSyncState;
- (bool)hasUnrecognizedReconciledStateHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)libraryPassSyncState;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLibraryPassSyncState:(id)arg1;
- (void)setUnrecognizedReconciledStateHash:(id)arg1;
- (id)unrecognizedReconciledStateHash;
- (void)writeTo:(id)arg1;

@end
