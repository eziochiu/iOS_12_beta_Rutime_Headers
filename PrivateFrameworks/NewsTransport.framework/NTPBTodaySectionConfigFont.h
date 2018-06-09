/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodaySectionConfigFont : PBCodable <NSCopying> {
    NSString * _name;
    NSString * _urlString;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasUrlString;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *urlString;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasUrlString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)URL;

@end
