/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFMailContentProvider : NSObject {
    <_SFMailContentProviderDataSource> * _dataSource;
}

@property (nonatomic) <_SFMailContentProviderDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (void)prepareMailComposeViewController:(id)arg1 withURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDataSource:(id)arg1;

@end
