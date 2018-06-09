/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying> {
    bool  _buttonDown;
    struct { 
        unsigned int usage : 1; 
        unsigned int usagePage : 1; 
        unsigned int buttonDown : 1; 
    }  _has;
    unsigned int  _usage;
    unsigned int  _usagePage;
}

@property (nonatomic) bool buttonDown;
@property (nonatomic) bool hasButtonDown;
@property (nonatomic) bool hasUsage;
@property (nonatomic) bool hasUsagePage;
@property (nonatomic) unsigned int usage;
@property (nonatomic) unsigned int usagePage;

- (bool)buttonDown;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasButtonDown;
- (bool)hasUsage;
- (bool)hasUsagePage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtonDown:(bool)arg1;
- (void)setHasButtonDown:(bool)arg1;
- (void)setHasUsage:(bool)arg1;
- (void)setHasUsagePage:(bool)arg1;
- (void)setUsage:(unsigned int)arg1;
- (void)setUsagePage:(unsigned int)arg1;
- (unsigned int)usage;
- (unsigned int)usagePage;
- (void)writeTo:(id)arg1;

@end
