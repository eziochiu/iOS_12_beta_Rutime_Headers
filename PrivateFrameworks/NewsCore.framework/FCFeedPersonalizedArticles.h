/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedPersonalizedArticles : NSObject {
    NSArray * _articlesToHide;
    NSArray * _articlesToShow;
    NSMapTable * _scoreProfiles;
}

@property (nonatomic, retain) NSArray *articlesToHide;
@property (nonatomic, retain) NSArray *articlesToShow;
@property (nonatomic, retain) NSMapTable *scoreProfiles;

- (void).cxx_destruct;
- (id)articlesToHide;
- (id)articlesToShow;
- (id)scoreProfiles;
- (void)setArticlesToHide:(id)arg1;
- (void)setArticlesToShow:(id)arg1;
- (void)setScoreProfiles:(id)arg1;

@end
