/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager {
    NSString * _queryString;
    unsigned long long  _state;
}

@property (nonatomic, readonly) PXRecipientSearchDataSource *dataSource;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)queryString;
- (void)queryStringDidChange;
- (void)setQueryString:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end