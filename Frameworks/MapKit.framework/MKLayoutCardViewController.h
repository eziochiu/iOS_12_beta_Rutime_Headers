/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLayoutCardViewController : MKStackingViewController {
    NSMutableDictionary * _cacheModuleType;
    NSMutableDictionary * _cacheVC;
    MKMapItem * _mapItem;
}

@property (nonatomic, retain) NSMutableDictionary *cacheModuleType;
@property (nonatomic, retain) NSMutableDictionary *cacheVC;
@property (nonatomic, retain) MKMapItem *mapItem;

- (void).cxx_destruct;
- (struct UIViewController { Class x1; }*)_cachedViewControllerForModule:(int)arg1;
- (void)_createModuleLayout:(id)arg1;
- (struct UIViewController { Class x1; }*)_createViewControllerForModule:(id)arg1;
- (id)_layoutModuleForMapItem;
- (id)cacheModuleType;
- (id)cacheVC;
- (bool)isLayoutDynamic;
- (bool)isTransitItem;
- (id)mapItem;
- (void)setCacheModuleType:(id)arg1;
- (void)setCacheVC:(id)arg1;
- (void)setMapItem:(id)arg1;

@end