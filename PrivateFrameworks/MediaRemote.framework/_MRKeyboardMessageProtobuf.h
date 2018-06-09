/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying> {
    _MRTextEditingAttributesProtobuf * _attributes;
    NSData * _encryptedTextCyphertext;
    struct { 
        unsigned int state : 1; 
    }  _has;
    int  _state;
}

@property (nonatomic, retain) _MRTextEditingAttributesProtobuf *attributes;
@property (nonatomic, retain) NSData *encryptedTextCyphertext;
@property (nonatomic, readonly) bool hasAttributes;
@property (nonatomic, readonly) bool hasEncryptedTextCyphertext;
@property (nonatomic) bool hasState;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (id)attributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedTextCyphertext;
- (bool)hasAttributes;
- (bool)hasEncryptedTextCyphertext;
- (bool)hasState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setEncryptedTextCyphertext:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
