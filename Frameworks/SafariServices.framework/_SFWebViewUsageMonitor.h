/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebViewUsageMonitor : NSObject {
    NSString * _hostAppIdentifier;
    bool  _urlHasIDFA;
    bool  _urlHasQueryString;
    bool  _userInteracted;
    bool  _viewControllerViewIsHidden;
}

@property (nonatomic, readonly) bool shouldAudit;
@property (nonatomic, readonly) NSString *stringAsAuditKey;
@property (nonatomic) bool urlHasIDFA;
@property (nonatomic) bool urlHasQueryString;
@property (nonatomic) bool userInteracted;
@property (nonatomic) bool viewControllerViewIsHidden;

- (void).cxx_destruct;
- (void)auditUsageIfNeeded;
- (void)checkURL:(id)arg1;
- (id)initWithHostAppIdentifier:(id)arg1;
- (void)setUrlHasIDFA:(bool)arg1;
- (void)setUrlHasQueryString:(bool)arg1;
- (void)setUserInteracted:(bool)arg1;
- (void)setViewControllerViewIsHidden:(bool)arg1;
- (bool)shouldAudit;
- (id)stringAsAuditKey;
- (bool)urlHasIDFA;
- (bool)urlHasQueryString;
- (bool)userInteracted;
- (bool)viewControllerViewIsHidden;

@end
