/* made by EzioChiu.
 */

@protocol CPTemplateProviding <NSObject>

@required

- (void)containsTemplate:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CPTemplate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)dismissAlertAnimated:(bool)arg1;
- (void)getTemplatesWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getTopTemplateWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)popTemplateAnimated:(NSNumber *)arg1;
- (void)popToRootTemplateAnimated:(NSNumber *)arg1;
- (void)popToTemplate:(CPTemplate *)arg1 animated:(NSNumber *)arg2;
- (void)presentAlert:(CPAlert *)arg1 withProxyDelegate:(id <CPAlertDelegate>)arg2;
- (void)pushGridTemplate:(CPGridTemplate *)arg1 animated:(NSNumber *)arg2 presentationStyle:(unsigned long long)arg3;
- (void)pushListTemplate:(CPListTemplate *)arg1 animated:(NSNumber *)arg2 presentationStyle:(unsigned long long)arg3;
- (void)pushMapTemplate:(CPMapTemplate *)arg1 animated:(NSNumber *)arg2 presentationStyle:(unsigned long long)arg3;
- (void)pushSearchTemplate:(CPSearchTemplate *)arg1 animated:(NSNumber *)arg2 presentationStyle:(unsigned long long)arg3;
- (void)pushVoiceTemplate:(CPVoiceControlTemplate *)arg1 animated:(NSNumber *)arg2;
- (void)requestBannerProviderWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPBannerProviding> *, void*
- (void)requestGridTemplateProviderForInterface:(void *)arg1 withProxyDelegate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CPGridTemplate *, <CPGridTemplateClientDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPGridTemplateProviding> *, void*
- (void)requestListTemplateProviderForTemplate:(void *)arg1 withProxyDelegate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CPListTemplate *, <CPListClientTemplateDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPListTemplateProviding> *, void*
- (void)requestMapTemplateProviderForTemplate:(void *)arg1 withProxyDelegate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CPMapTemplate *, <CPMapClientTemplateDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPMapTemplateProviding> *, void*
- (void)requestSearchTemplateProviderForTemplate:(void *)arg1 withProxyDelegate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CPSearchTemplate *, <CPSearchClientTemplateDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPSearchTemplateProviding> *, void*
- (void)requestVoiceControlProviderForTemplate:(void *)arg1 withProxyDelegate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CPVoiceControlTemplate *, <CPVoiceControlTemplateDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPVoiceTemplateProviding> *, void*

@end
