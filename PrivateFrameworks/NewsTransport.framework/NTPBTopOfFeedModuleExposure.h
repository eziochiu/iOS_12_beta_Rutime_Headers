/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTopOfFeedModuleExposure : PBCodable <NSCopying> {
    NSData * _feedViewExposureId;
    struct { 
        unsigned int moduleEventType : 1; 
        unsigned int moduleItemCount : 1; 
        unsigned int moduleLocation : 1; 
    }  _has;
    int  _moduleEventType;
    NSData * _moduleExposureId;
    int  _moduleItemCount;
    int  _moduleLocation;
}

@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasModuleEventType;
@property (nonatomic, readonly) bool hasModuleExposureId;
@property (nonatomic) bool hasModuleItemCount;
@property (nonatomic) bool hasModuleLocation;
@property (nonatomic) int moduleEventType;
@property (nonatomic, retain) NSData *moduleExposureId;
@property (nonatomic) int moduleItemCount;
@property (nonatomic) int moduleLocation;

- (void).cxx_destruct;
- (int)StringAsModuleEventType:(id)arg1;
- (int)StringAsModuleLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedViewExposureId;
- (bool)hasFeedViewExposureId;
- (bool)hasModuleEventType;
- (bool)hasModuleExposureId;
- (bool)hasModuleItemCount;
- (bool)hasModuleLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)moduleEventType;
- (id)moduleEventTypeAsString:(int)arg1;
- (id)moduleExposureId;
- (int)moduleItemCount;
- (int)moduleLocation;
- (id)moduleLocationAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasModuleEventType:(bool)arg1;
- (void)setHasModuleItemCount:(bool)arg1;
- (void)setHasModuleLocation:(bool)arg1;
- (void)setModuleEventType:(int)arg1;
- (void)setModuleExposureId:(id)arg1;
- (void)setModuleItemCount:(int)arg1;
- (void)setModuleLocation:(int)arg1;
- (void)writeTo:(id)arg1;

@end