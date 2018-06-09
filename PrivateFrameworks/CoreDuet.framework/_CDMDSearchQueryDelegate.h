/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDMDSearchQueryDelegate : NSObject <MDSearchQueryDelegate> {
    NSObject<OS_dispatch_semaphore> * _mdQuerySem;
    NSMutableArray * _recentMDSearchQueryResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *mdQuerySem;
@property (nonatomic, retain) NSMutableArray *recentMDSearchQueryResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)mdQuerySem;
- (id)recentMDSearchQueryResults;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)setMdQuerySem:(id)arg1;
- (void)setRecentMDSearchQueryResults:(id)arg1;

@end
