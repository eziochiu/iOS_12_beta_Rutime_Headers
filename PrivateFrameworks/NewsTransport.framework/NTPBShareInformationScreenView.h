/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBShareInformationScreenView : PBCodable <NSCopying> {
    bool  _arrivedFromAd;
    NSString * _articleId;
    NSData * _articleViewingSessionId;
    NSString * _errorCode;
    NSString * _errorMessage;
    struct { 
        unsigned int paidSubscriptionConversionPointType : 1; 
        unsigned int parentFeedType : 1; 
        unsigned int resultType : 1; 
        unsigned int userAction : 1; 
        unsigned int arrivedFromAd : 1; 
        unsigned int subscriptionOnlyArticlePreview : 1; 
    }  _has;
    NSString * _iadQtoken;
    int  _paidSubscriptionConversionPointType;
    int  _parentFeedType;
    int  _resultType;
    NSString * _sectionId;
    NSString * _sourceChannelId;
    bool  _subscriptionOnlyArticlePreview;
    int  _userAction;
}

@property (nonatomic) bool arrivedFromAd;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic) bool hasArrivedFromAd;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic, readonly) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorMessage;
@property (nonatomic, readonly) bool hasIadQtoken;
@property (nonatomic) bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) bool hasParentFeedType;
@property (nonatomic) bool hasResultType;
@property (nonatomic, readonly) bool hasSectionId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) bool hasSubscriptionOnlyArticlePreview;
@property (nonatomic) bool hasUserAction;
@property (nonatomic, retain) NSString *iadQtoken;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) int resultType;
@property (nonatomic, retain) NSString *sectionId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic) bool subscriptionOnlyArticlePreview;
@property (nonatomic) int userAction;

- (void).cxx_destruct;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (bool)arrivedFromAd;
- (id)articleId;
- (id)articleViewingSessionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorCode;
- (id)errorMessage;
- (bool)hasArrivedFromAd;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionId;
- (bool)hasErrorCode;
- (bool)hasErrorMessage;
- (bool)hasIadQtoken;
- (bool)hasPaidSubscriptionConversionPointType;
- (bool)hasParentFeedType;
- (bool)hasResultType;
- (bool)hasSectionId;
- (bool)hasSourceChannelId;
- (bool)hasSubscriptionOnlyArticlePreview;
- (bool)hasUserAction;
- (unsigned long long)hash;
- (id)iadQtoken;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)paidSubscriptionConversionPointType;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (int)parentFeedType;
- (id)parentFeedTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (id)sectionId;
- (void)setArrivedFromAd:(bool)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setHasArrivedFromAd:(bool)arg1;
- (void)setHasPaidSubscriptionConversionPointType:(bool)arg1;
- (void)setHasParentFeedType:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setHasSubscriptionOnlyArticlePreview:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setIadQtoken:(id)arg1;
- (void)setPaidSubscriptionConversionPointType:(int)arg1;
- (void)setParentFeedType:(int)arg1;
- (void)setResultType:(int)arg1;
- (void)setSectionId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setSubscriptionOnlyArticlePreview:(bool)arg1;
- (void)setUserAction:(int)arg1;
- (id)sourceChannelId;
- (bool)subscriptionOnlyArticlePreview;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end
