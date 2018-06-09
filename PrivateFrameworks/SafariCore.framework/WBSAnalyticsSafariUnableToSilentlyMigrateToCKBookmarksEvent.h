/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariUnableToSilentlyMigrateToCKBookmarksEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _reasons;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) int*reasons;
@property (nonatomic, readonly) unsigned long long reasonsCount;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsReasons:(id)arg1;
- (void)addReason:(int)arg1;
- (void)clearReasons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reasonAtIndex:(unsigned long long)arg1;
- (int*)reasons;
- (id)reasonsAsString:(int)arg1;
- (unsigned long long)reasonsCount;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReasons:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
