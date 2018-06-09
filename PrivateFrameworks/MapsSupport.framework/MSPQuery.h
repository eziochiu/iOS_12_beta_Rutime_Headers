/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPQuery : NSObject <MSPQuerySourceObserver> {
    id /* block */  _changeHandler;
    NSObject<OS_dispatch_queue> * _changeHandlerQueue;
    _MSPQueryState * _lastState;
    MSPQuerySource * _source;
    NSArray * _unmappedContents;
}

@property (nonatomic, readonly, copy) id /* block */ changeHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *changeHandlerQueue;
@property (readonly) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_lastState, setter=_setLastState:, retain) _MSPQueryState *lastState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *unmappedContents;
@property (getter=_visibleState, readonly) _MSPQueryState *visibleState;

- (void).cxx_destruct;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (id)_initWithSource:(id)arg1;
- (id)_lastState;
- (void)_setLastState:(id)arg1;
- (id)_visibleState;
- (id /* block */)changeHandler;
- (id)changeHandlerQueue;
- (id)contents;
- (id)originalIdentifierForObject:(id)arg1;
- (id)originalIdentifierForObjectAtIndex:(unsigned long long)arg1;
- (void)setChangeHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)unmappedContents;

@end
