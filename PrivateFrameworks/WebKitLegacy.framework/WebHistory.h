/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHistory : NSObject {
    WebHistoryPrivate * _historyPrivate;
}

@property (nonatomic) int historyAgeInDaysLimit;
@property (nonatomic) int historyItemLimit;
@property (nonatomic, readonly, copy) NSArray *orderedLastVisitedDays;

+ (void)_removeAllVisitedLinks;
+ (void)_setVisitedLinkTrackingEnabled:(bool)arg1;
+ (id)optionalSharedHistory;
+ (void)setOptionalSharedHistory:(id)arg1;

- (void)_addVisitedLinksToVisitedLinkStore:(struct WebVisitedLinkStore { int (**x1)(); unsigned int x2; struct HashSet<WebCore::Page *, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct HashTable<WebCore::Page *, WebCore::Page *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct Page {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; struct HashSet<unsigned long long, WebCore::SharedStringHashHash, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WebCore::SharedStringHashHash, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> > { unsigned long long *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_4_1_1; } x4; bool x5; }*)arg1;
- (id)_data;
- (id)_itemForURLString:(id)arg1;
- (void)_sendNotification:(id)arg1 entries:(id)arg2;
- (void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(bool)arg4;
- (void)addItems:(id)arg1;
- (id)allItems;
- (bool)containsURL:(id)arg1;
- (void)dealloc;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (id)init;
- (id)itemForURL:(id)arg1;
- (bool)loadFromURL:(id)arg1 error:(id*)arg2;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)orderedLastVisitedDays;
- (void)removeAllItems;
- (void)removeItems:(id)arg1;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (void)setHistoryItemLimit:(int)arg1;
- (void)timeZoneChanged:(id)arg1;

@end
