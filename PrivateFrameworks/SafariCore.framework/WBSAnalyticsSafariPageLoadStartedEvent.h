/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariPageLoadStartedEvent : PBCodable <NSCopying> {
    unsigned long long  _configurationID;
    struct { 
        unsigned int configurationID : 1; 
        unsigned int pageID : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _pageID;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long configurationID;
@property (nonatomic) bool hasConfigurationID;
@property (nonatomic) bool hasPageID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long pageID;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)configurationID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfigurationID;
- (bool)hasPageID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)pageID;
- (bool)readFrom:(id)arg1;
- (void)setConfigurationID:(unsigned long long)arg1;
- (void)setHasConfigurationID:(bool)arg1;
- (void)setHasPageID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPageID:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
