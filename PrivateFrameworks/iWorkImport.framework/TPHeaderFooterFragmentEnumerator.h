/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator {
    long long  _fragmentIndex;
    long long  _headerFooterType;
    TPPageMaster * _pageMaster;
}

@property (nonatomic) long long fragmentIndex;
@property (nonatomic) long long headerFooterType;
@property (nonatomic, retain) TPPageMaster *pageMaster;

- (void).cxx_destruct;
- (long long)fragmentIndex;
- (long long)headerFooterType;
- (id)initWithPageMaster:(id)arg1;
- (id)nextObject;
- (void)p_incrementFragmentIndex;
- (void)p_incrementHeaderFooterType;
- (id)pageMaster;
- (void)setFragmentIndex:(long long)arg1;
- (void)setHeaderFooterType:(long long)arg1;
- (void)setPageMaster:(id)arg1;

@end
