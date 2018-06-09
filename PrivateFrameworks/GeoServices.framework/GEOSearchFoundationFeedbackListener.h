/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {
    NSArray * _sections;
    int  _uiTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)feedbackListenerForParsec;

- (void).cxx_destruct;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didRankSections:(id)arg1;
- (id)init;
- (id)initWithClientType:(unsigned long long)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (id)traits;

@end
