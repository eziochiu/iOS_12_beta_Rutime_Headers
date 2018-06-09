/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPresentationAttributesManager : NSObject <SXPresentationAttributesManager> {
    NSHashTable * _observers;
    SXPresentationAttributes * _presentationAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) SXPresentationAttributes *presentationAttributes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)attributesChangedFrom:(id)arg1 to:(id)arg2;
- (id)init;
- (id)observers;
- (id)presentationAttributes;
- (void)removeObserver:(id)arg1;
- (void)updateAttributes:(id)arg1;

@end
