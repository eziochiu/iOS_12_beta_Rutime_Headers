/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILink : NSObject <SSMetricsEventFieldProvider> {
    SKUICountdown * _countdown;
    SKUIItem * _item;
    NSNumber * _itemIdentifier;
    NSString * _target;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (getter=isActionable, nonatomic, readonly) bool actionable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) NSNumber *itemIdentifier;
@property (nonatomic, readonly) NSDictionary *linkDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *targetString;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)URL;
- (void)_setItem:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithLinkDictionary:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 targetString:(id)arg3;
- (bool)isActionable;
- (id)item;
- (id)itemIdentifier;
- (id)linkDictionary;
- (id)targetString;
- (id)title;
- (id)valueForMetricsField:(id)arg1;

@end
