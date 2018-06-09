/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBCoverArticleWidgetExposure : PBCodable <NSCopying> {
    int  _coverArticleWidgetArticleCount;
    NSData * _coverArticleWidgetExposureSessionId;
    NSData * _feedViewExposureId;
    struct { 
        unsigned int coverArticleWidgetArticleCount : 1; 
    }  _has;
}

@property (nonatomic) int coverArticleWidgetArticleCount;
@property (nonatomic, retain) NSData *coverArticleWidgetExposureSessionId;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) bool hasCoverArticleWidgetArticleCount;
@property (nonatomic, readonly) bool hasCoverArticleWidgetExposureSessionId;
@property (nonatomic, readonly) bool hasFeedViewExposureId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)coverArticleWidgetArticleCount;
- (id)coverArticleWidgetExposureSessionId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedViewExposureId;
- (bool)hasCoverArticleWidgetArticleCount;
- (bool)hasCoverArticleWidgetExposureSessionId;
- (bool)hasFeedViewExposureId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoverArticleWidgetArticleCount:(int)arg1;
- (void)setCoverArticleWidgetExposureSessionId:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasCoverArticleWidgetArticleCount:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
