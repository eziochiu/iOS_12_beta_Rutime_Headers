/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshotSortDescriptor : NSObject <BSDescriptionProviding> {
    bool  _ascending;
    id /* block */  _comparator;
    unsigned long long  _key;
}

@property (nonatomic, readonly) NSSortDescriptor *NSSortDescriptor;
@property (nonatomic) bool ascending;
@property (nonatomic, copy) id /* block */ comparator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long key;
@property (readonly) Class superclass;

+ (id)_propertyKeyForSnapshotKey:(unsigned long long)arg1 overriddenForNil:(bool*)arg2;
+ (id)sortDescriptorWithKey:(unsigned long long)arg1 ascending:(bool)arg2 comparator:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)NSSortDescriptor;
- (id)_stringForKey:(unsigned long long)arg1;
- (bool)ascending;
- (id /* block */)comparator;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithKey:(unsigned long long)arg1 ascending:(bool)arg2 comparator:(id /* block */)arg3;
- (unsigned long long)key;
- (void)setAscending:(bool)arg1;
- (void)setComparator:(id /* block */)arg1;
- (void)setKey:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
