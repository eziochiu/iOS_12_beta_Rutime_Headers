/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCLightDocumentManagerViewController : DOCBaseDocumentBrowserViewController {
    DOCBrowserViewController * _browserViewController;
    NSString * _sourceIdentifier;
}

@property (nonatomic, retain) NSArray *additionalLeadingNavigationBarButtonItems;
@property (nonatomic, retain) NSArray *additionalToolbarButtonItems;
@property (nonatomic, retain) NSArray *additionalTrailingNavigationBarButtonItems;
@property (nonatomic) <DOCLightDocumentManagerDelegate> *delegate;
@property (nonatomic, retain) NSString *sourceIdentifier;

- (void).cxx_destruct;
- (id)additionalLeadingNavigationBarButtonItems;
- (id)additionalToolbarButtonItems;
- (id)additionalTrailingNavigationBarButtonItems;
- (id)effectiveBrowserViewController;
- (id)initForBrowsingFilesFromSourceIdentifier:(id)arg1 applicationBundleIdentifier:(id)arg2;
- (id)initForBrowsingFilesFromSourceIdentifier:(id)arg1 applicationBundleIdentifier:(id)arg2 inProcess:(bool)arg3;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)sourceIdentifier;
- (void)updateAppearance:(id)arg1;
- (void)viewDidLoad;

@end
