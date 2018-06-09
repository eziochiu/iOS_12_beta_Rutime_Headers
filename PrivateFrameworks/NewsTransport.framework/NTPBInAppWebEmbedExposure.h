/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBInAppWebEmbedExposure : PBCodable <NSCopying> {
    NSString * _articleId;
    NSData * _feedViewExposureId;
    struct { 
        unsigned int moduleEventType : 1; 
        unsigned int moduleItemCount : 1; 
        unsigned int moduleItemPosition : 1; 
        unsigned int moduleLocation : 1; 
        unsigned int webEmbedLocation : 1; 
    }  _has;
    int  _moduleEventType;
    NSData * _moduleExposureId;
    int  _moduleItemCount;
    int  _moduleItemPosition;
    int  _moduleLocation;
    NSString * _webEmbedId;
    int  _webEmbedLocation;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasModuleEventType;
@property (nonatomic, readonly) bool hasModuleExposureId;
@property (nonatomic) bool hasModuleItemCount;
@property (nonatomic) bool hasModuleItemPosition;
@property (nonatomic) bool hasModuleLocation;
@property (nonatomic, readonly) bool hasWebEmbedId;
@property (nonatomic) bool hasWebEmbedLocation;
@property (nonatomic) int moduleEventType;
@property (nonatomic, retain) NSData *moduleExposureId;
@property (nonatomic) int moduleItemCount;
@property (nonatomic) int moduleItemPosition;
@property (nonatomic) int moduleLocation;
@property (nonatomic, retain) NSString *webEmbedId;
@property (nonatomic) int webEmbedLocation;

- (void).cxx_destruct;
- (int)StringAsModuleEventType:(id)arg1;
- (int)StringAsModuleLocation:(id)arg1;
- (int)StringAsWebEmbedLocation:(id)arg1;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedViewExposureId;
- (bool)hasArticleId;
- (bool)hasFeedViewExposureId;
- (bool)hasModuleEventType;
- (bool)hasModuleExposureId;
- (bool)hasModuleItemCount;
- (bool)hasModuleItemPosition;
- (bool)hasModuleLocation;
- (bool)hasWebEmbedId;
- (bool)hasWebEmbedLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)moduleEventType;
- (id)moduleEventTypeAsString:(int)arg1;
- (id)moduleExposureId;
- (int)moduleItemCount;
- (int)moduleItemPosition;
- (int)moduleLocation;
- (id)moduleLocationAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasModuleEventType:(bool)arg1;
- (void)setHasModuleItemCount:(bool)arg1;
- (void)setHasModuleItemPosition:(bool)arg1;
- (void)setHasModuleLocation:(bool)arg1;
- (void)setHasWebEmbedLocation:(bool)arg1;
- (void)setModuleEventType:(int)arg1;
- (void)setModuleExposureId:(id)arg1;
- (void)setModuleItemCount:(int)arg1;
- (void)setModuleItemPosition:(int)arg1;
- (void)setModuleLocation:(int)arg1;
- (void)setWebEmbedId:(id)arg1;
- (void)setWebEmbedLocation:(int)arg1;
- (id)webEmbedId;
- (int)webEmbedLocation;
- (id)webEmbedLocationAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
