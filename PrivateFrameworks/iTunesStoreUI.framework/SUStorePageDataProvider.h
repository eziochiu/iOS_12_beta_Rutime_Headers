/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStorePageDataProvider : ISDataProvider {
    SUClientInterface * _clientInterface;
    long long  _outputType;
    ISPropertyListProvider * _propertyListDataProvider;
}

@property (retain) SUClientInterface *clientInterface;
@property long long outputType;
@property (copy) ISPropertyListProvider *propertyListDataProvider;
@property (readonly) bool shouldProcessTouchIDDialogs;

- (void).cxx_destruct;
- (void)_loadPersonalizedStoreOffersForPage:(id)arg1;
- (id)clientInterface;
- (long long)outputType;
- (bool)parseData:(id)arg1 returningError:(id*)arg2;
- (id)propertyListDataProvider;
- (void)setClientInterface:(id)arg1;
- (void)setOutputType:(long long)arg1;
- (void)setPropertyListDataProvider:(id)arg1;
- (bool)shouldProcessTouchIDDialogs;

@end
