/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEditorialOperation : FCOperation {
    id /* block */  _catchUpCompletionHandler;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    NSError * _error;
    NSArray * _sectionGroups;
}

@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (copy) NSArray *sectionGroups;

- (void).cxx_destruct;
- (void)_checkShouldShowEditorialWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)catchUpCompletionHandler;
- (id)configuration;
- (id)context;
- (void)enumerateEditorialSectionsByRecencyWithBlock:(id /* block */)arg1;
- (id)error;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)sectionGroups;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSectionGroups:(id)arg1;
- (bool)validateOperation;

@end
