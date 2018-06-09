/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject <CNUIPRLikenessProvider> {
    CNCache * _cache;
    <CNScheduler> * _resourceLock;
}

@property (nonatomic, readonly) CNCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *resourceLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGImage { }*)_cnui_circularImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_cnui_likenessForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_cnui_likenessForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage { }*)_cnui_roundedRectImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)cache;
- (id)init;
- (struct CGImage { }*)renderCircularImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGImage { }*)renderRoundedRectImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)resourceLock;

@end
