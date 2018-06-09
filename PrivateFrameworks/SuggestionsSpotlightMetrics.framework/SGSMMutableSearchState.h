/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
 */

@interface SGSMMutableSearchState : NSObject {
    unsigned char  _contactConversionCount;
    unsigned char  _contactLossCount;
    SGMContactOpportunityInSpotlight * _contactOpportunity;
    unsigned short  _contactOpportunityCount;
    SGMContactResultInSpotlight * _contactResult;
    unsigned short  _contactResultCount;
    SGMContactResultSelectedInSpotlight * _contactSelected;
    unsigned short  _curatedOrPseudoContactOpportunityCount;
    bool  _justEngaged;
    unsigned char  _nonOpportunityCount;
    SGMNoResultSelectedInSpotlight * _noneSelected;
    SGMOtherResultSelectedInSpotlight * _otherSelected;
    unsigned char  _otherSelectedCount;
    NSMutableSet * _resultsSeen;
}

- (void).cxx_destruct;
- (void)commit;
- (id)description;
- (id)init;
- (bool)isFirstTimeSeeingResult:(id)arg1;
- (bool)justEngaged;
- (void)resetConversionCounts;
- (void)resetCounts;
- (void)resetJustEngaged;
- (void)scoreAsContactConversion;
- (void)scoreAsContactLoss;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsNonOpportunity;
- (void)scoreAsOtherConversion;
- (void)setJustEngaged;

@end
