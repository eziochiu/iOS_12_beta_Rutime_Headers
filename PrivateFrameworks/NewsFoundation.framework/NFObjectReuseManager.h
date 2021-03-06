/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFObjectReuseManager : NSObject {
    NSMutableDictionary * _inuseObjects;
    id /* block */  _reuseFactory;
    NSMutableDictionary * _reuseableObjects;
}

@property (nonatomic, copy) NSMutableDictionary *inuseObjects;
@property (nonatomic, copy) id /* block */ reuseFactory;
@property (nonatomic, copy) NSMutableDictionary *reuseableObjects;

- (void).cxx_destruct;
- (id)dequeueObjectForIdentifier:(id)arg1;
- (id)initWithObjectConstructor:(id /* block */)arg1;
- (id)inuseObjects;
- (bool)isInUse:(id)arg1;
- (void)prepareObjectForReuse:(id)arg1;
- (void)purgeObjectForIdentifier:(id)arg1;
- (id /* block */)reuseFactory;
- (id)reuseableObjects;
- (void)setInuseObjects:(id)arg1;
- (void)setReuseFactory:(id /* block */)arg1;
- (void)setReuseableObjects:(id)arg1;

@end
