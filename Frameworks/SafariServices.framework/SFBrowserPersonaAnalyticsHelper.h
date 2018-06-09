/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBrowserPersonaAnalyticsHelper : NSObject {
    bool  _hasReportedPresentingFromHostApp;
    unsigned long long  _persona;
}

- (void)didDismissWithMethod:(int)arg1;
- (void)didLongTapToolbarButton:(int)arg1;
- (void)didPresentFromHostApp:(id)arg1;
- (void)didTapToolbarButton:(int)arg1;
- (id)initWithPersona:(unsigned long long)arg1;

@end
