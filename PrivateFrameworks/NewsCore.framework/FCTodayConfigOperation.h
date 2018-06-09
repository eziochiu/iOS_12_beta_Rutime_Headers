/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTodayConfigOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    <FCContentContext> * _context;
    NSArray * _networkEvents;
    NSObject * _resultInterestToken;
    NTPBTodayConfig * _resultTodayConfig;
    id /* block */  _todayConfigCompletionHandlerWithInterest;
    NSString * _widgetConfigID;
}

@property (copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, copy) NSObject *resultInterestToken;
@property (nonatomic, copy) NTPBTodayConfig *resultTodayConfig;
@property (nonatomic, copy) id /* block */ todayConfigCompletionHandlerWithInterest;
@property (nonatomic, copy) NSString *widgetConfigID;

- (void).cxx_destruct;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3;
- (id)configuration;
- (id)context;
- (id)init;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultInterestToken;
- (id)resultTodayConfig;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setResultInterestToken:(id)arg1;
- (void)setResultTodayConfig:(id)arg1;
- (void)setTodayConfigCompletionHandlerWithInterest:(id /* block */)arg1;
- (void)setWidgetConfigID:(id)arg1;
- (id /* block */)todayConfigCompletionHandlerWithInterest;
- (bool)validateOperation;
- (id)widgetConfigID;

@end
