/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraItemProvider : HFItemProvider {
    NSMutableSet * _cameraItems;
    id /* block */  _filter;
    HMHome * _home;
}

@property (nonatomic, retain) NSMutableSet *cameraItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)cameraItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setCameraItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;

@end
