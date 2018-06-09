/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingLabelSupportPair : PBCodable <NSCopying> {
    struct { 
        unsigned int label : 1; 
        unsigned int support : 1; 
    }  _has;
    unsigned long long  _label;
    float  _support;
}

@property (nonatomic) bool hasLabel;
@property (nonatomic) bool hasSupport;
@property (nonatomic) unsigned long long label;
@property (nonatomic) float support;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasSupport;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLabel:(bool)arg1;
- (void)setHasSupport:(bool)arg1;
- (void)setLabel:(unsigned long long)arg1;
- (void)setSupport:(float)arg1;
- (float)support;
- (void)writeTo:(id)arg1;

@end
