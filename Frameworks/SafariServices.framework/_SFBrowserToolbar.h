/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserToolbar : _SFToolbar <_SFBarRegistrationObserving> {
    <_SFBarRegistrationToken> * _barRegistration;
    <_SFBrowserToolbarDataSource> * _dataSource;
}

@property (nonatomic) <_SFBrowserToolbarDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double differenceBetweenWidthsOfLeadingAndTrailingItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)URLFieldHorizontalMargin;
- (double)_contentMargin;
- (id)_toolbarItems;
- (double)_totalWidthOfLeadingItems;
- (double)_totalWidthOfTrailingItems;
- (id)dataSource;
- (void)didCompleteBarRegistrationWithToken:(id)arg1;
- (double)differenceBetweenWidthsOfLeadingAndTrailingItems;
- (bool)isMinibar;
- (void)layoutSubviews;
- (id)popoverSourceInfoForBarItem:(long long)arg1;
- (void)setDataSource:(id)arg1;

@end
