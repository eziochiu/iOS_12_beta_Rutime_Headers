/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdDocumentStateManager : NSObject <SXAdDocumentStateManager, SXViewportChangeListener> {
    NSPointerArray * _observers;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSPointerArray *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)initWithViewport:(id)arg1;
- (id)observers;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;

@end
