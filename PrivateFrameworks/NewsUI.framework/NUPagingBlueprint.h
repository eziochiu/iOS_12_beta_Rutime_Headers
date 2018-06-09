/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUPagingBlueprint : NSObject <NUPaging> {
    NSOrderedSet * _blueprintItems;
}

@property (nonatomic, readonly) NSArray *allPages;
@property (nonatomic, retain) NSOrderedSet *blueprintItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUPage> *firstPage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUPage> *lastPage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allPages;
- (id)blueprintItems;
- (id)firstPage;
- (void)forEachPage:(id /* block */)arg1;
- (id)initWithPages:(id)arg1;
- (id)lastPage;
- (id)pageAfterIdentifier:(id)arg1;
- (id)pageBeforeForIdentifier:(id)arg1;
- (id)pageForIdentifier:(id)arg1;
- (void)setBlueprintItems:(id)arg1;

@end
