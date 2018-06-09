/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFGenericAccessoryItemProvider : HFItemProvider {
    id /* block */  _filter;
    NSMutableSet * _genericItems;
    HMHome * _home;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) NSMutableSet *genericItems;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (bool)_isAccessorySupported:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)genericItems;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setGenericItems:(id)arg1;

@end