/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufDate : PBCodable <NSCopying> {
    double  _value;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) double value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)writeTo:(id)arg1;

@end
