/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBGradedTagID : PBCodable <NSCopying> {
    int  _grade;
    struct { 
        unsigned int grade : 1; 
        unsigned int source : 1; 
    }  _has;
    int  _source;
    NSString * _tagId;
}

@property (nonatomic) int grade;
@property (nonatomic) bool hasGrade;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) bool hasTagId;
@property (nonatomic) int source;
@property (nonatomic, retain) NSString *tagId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)grade;
- (bool)hasGrade;
- (bool)hasSource;
- (bool)hasTagId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGrade:(int)arg1;
- (void)setHasGrade:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(int)arg1;
- (void)setTagId:(id)arg1;
- (int)source;
- (id)tagId;
- (void)writeTo:(id)arg1;

@end
