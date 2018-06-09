/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCoverArticlesOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    NSError * _error;
    NSArray * _headlines;
    NSArray * _supplementalHeadlines;
}

@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (copy) NSArray *headlines;
@property (copy) NSArray *supplementalHeadlines;

- (void).cxx_destruct;
- (id)_supplementalCoverArticleListIDs;
- (id)configuration;
- (id)context;
- (id)error;
- (id)headlines;
- (void)performOperation;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setSupplementalHeadlines:(id)arg1;
- (id)supplementalHeadlines;
- (bool)validateOperation;

@end
