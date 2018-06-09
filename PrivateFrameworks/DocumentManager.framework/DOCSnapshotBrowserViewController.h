/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCSnapshotBrowserViewController : UIViewController <DOCNavigationBarOverwriteProtocol> {
    bool  _isTopNavigationItem;
    DOCConcreteLocation * _location;
    NSString * _overriddenTitle;
    NSString * _searchQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isTopNavigationItem;
@property (retain) DOCConcreteLocation *location;
@property (copy) NSString *overriddenTitle;
@property (copy) NSString *searchQuery;
@property (readonly) Class superclass;

+ (id)snapshotForBrowser:(id)arg1;
+ (id)snapshotForLocation:(id)arg1;

- (void).cxx_destruct;
- (bool)isTopNavigationItem;
- (id)location;
- (id)overriddenTitle;
- (id)searchQuery;
- (void)setIsTopNavigationItem:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setOverriddenTitle:(id)arg1;
- (void)setSearchQuery:(id)arg1;

@end
