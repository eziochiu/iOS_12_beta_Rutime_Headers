/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKObject : NSObject <TLKObservable, TLKObserver> {
    bool  inBatchUpdate;
    <TLKObserver> * observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool inBatchUpdate;
@property <TLKObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)inBatchUpdate;
- (id)observer;
- (void)propertiesDidChange;
- (void)setInBatchUpdate:(bool)arg1;
- (void)setObserver:(id)arg1;

@end
