/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSpecialEventsItem : PBCodable <NSCopying> {
    NSString * _actionTitle;
    NSString * _actionUrl;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _title;
    int  _type;
}

@property (nonatomic, retain) NSString *actionTitle;
@property (nonatomic, retain) NSString *actionUrl;
@property (nonatomic, readonly) bool hasActionTitle;
@property (nonatomic, readonly) bool hasActionUrl;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int type;

- (id)actionTitle;
- (id)actionUrl;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionTitle;
- (bool)hasActionUrl;
- (bool)hasIdentifier;
- (bool)hasTitle;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setActionUrl:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)title;
- (int)type;
- (void)writeTo:(id)arg1;

@end
