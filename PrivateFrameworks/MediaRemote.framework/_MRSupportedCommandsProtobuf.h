/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSupportedCommandsProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _supportedCommands;
}

@property (nonatomic, retain) NSMutableArray *supportedCommands;

+ (Class)supportedCommandType;

- (void).cxx_destruct;
- (void)addSupportedCommand:(id)arg1;
- (void)clearSupportedCommands;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommandAtIndex:(unsigned long long)arg1;
- (id)supportedCommands;
- (unsigned long long)supportedCommandsCount;
- (void)writeTo:(id)arg1;

@end
