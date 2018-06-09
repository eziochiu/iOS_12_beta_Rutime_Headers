/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable <NSCopying> {
    NSString * _composedMessageId;
    struct { 
        unsigned int progress : 1; 
    }  _has;
    int  _progress;
}

@property (nonatomic, retain) NSString *composedMessageId;
@property (nonatomic, readonly) bool hasComposedMessageId;
@property (nonatomic) bool hasProgress;
@property (nonatomic) int progress;

- (void).cxx_destruct;
- (id)composedMessageId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComposedMessageId;
- (bool)hasProgress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)progress;
- (bool)readFrom:(id)arg1;
- (void)setComposedMessageId:(id)arg1;
- (void)setHasProgress:(bool)arg1;
- (void)setProgress:(int)arg1;
- (void)writeTo:(id)arg1;

@end
