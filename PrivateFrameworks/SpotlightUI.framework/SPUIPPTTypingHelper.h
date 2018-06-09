/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUIPPTTypingHelper : NSObject {
    id /* block */  _completion;
    NSString * _currentQueryString;
    NSString * _queryString;
    SPUISearchViewController * _searchViewController;
    double  _timeSinceLastFire;
}

@property (copy) id /* block */ completion;
@property (retain) NSString *currentQueryString;
@property (retain) NSString *queryString;
@property (retain) SPUISearchViewController *searchViewController;
@property double timeSinceLastFire;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)currentQueryString;
- (void)fire:(id)arg1;
- (id)initWithString:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (id)queryString;
- (id)searchViewController;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCurrentQueryString:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setSearchViewController:(id)arg1;
- (void)setTimeSinceLastFire:(double)arg1;
- (double)timeSinceLastFire;

@end
