/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationIntent : NSObject {
    bool  _opensInNewTab;
    long long  _preferredTabOrder;
    unsigned long long  _type;
    id  _value;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) WBSCloudTab *cloudTab;
@property (nonatomic, readonly, copy) NSArray *navigationIntents;
@property (nonatomic) bool opensInNewTab;
@property (nonatomic, readonly, copy) NSString *privacyPreservingDescription;
@property (nonatomic, readonly) bool shouldOrderToForeground;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_navigationIntentForMKMapItem:(id)arg1;
+ (id)_navigationIntentWithItems:(id)arg1;
+ (bool)canCreateNavigationIntentForDropSession:(id)arg1;
+ (void)navigationIntentForDropSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)navigationIntentForItemProviders:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)navigationIntentWithBookmark:(id)arg1;
+ (id)navigationIntentWithCloudTab:(id)arg1;
+ (id)navigationIntentWithHistoryURL:(id)arg1;
+ (id)navigationIntentWithMultipleIntents:(id)arg1;
+ (id)navigationIntentWithText:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)bookmark;
- (id)cloudTab;
- (id)description;
- (id)navigationIntents;
- (bool)opensInNewTab;
- (id)privacyPreservingDescription;
- (void)setOpensInNewTab:(bool)arg1;
- (void)setPreferredTabOrder:(long long)arg1;
- (bool)shouldOrderToForeground;
- (id)text;
- (unsigned long long)type;

@end
