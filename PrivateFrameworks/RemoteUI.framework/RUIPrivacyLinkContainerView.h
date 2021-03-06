/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter> {
    NSDictionary * _attributes;
    OBPrivacyLinkController * _linkController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) OBPrivacyLinkController *linkController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureInPage:(id)arg1;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)linkController;

@end
