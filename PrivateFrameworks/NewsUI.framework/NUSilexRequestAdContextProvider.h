/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUSilexRequestAdContextProvider : NSObject <NUAdContextProvider> {
    SXAdRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXAdRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)creativeTypeFromBannerType:(unsigned long long)arg1;
- (id)initWithAdRequest:(id)arg1;
- (id)request;

@end
