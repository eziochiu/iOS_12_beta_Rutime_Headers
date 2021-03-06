/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSDataItem : IKJSObject <IKJSDataItem, NSObject, _IKJSDataItem, _IKJSDataItemProxy> {
    NSString * _identifier;
    JSManagedValue * _managedObject;
    NSMutableArray * _observerRecords;
    bool  _observersEnabled;
    IKJSDataItem * _parent;
    NSArray * _parentAccessorSequence;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool observersEnabled;
@property (nonatomic, readonly) IKJSDataItem *parent;
@property (nonatomic, readonly, copy) NSArray *parentAccessorSequence;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (id)boxObject:(id)arg1;

- (void).cxx_destruct;
- (id)_clonedObserverRecords;
- (bool)_isBoxed;
- (void)_notifyObserversForPathString:(id)arg1;
- (void)_notifyObserversForSubpathString:(id)arg1 inDataItem:(id)arg2;
- (void)_setParent:(id)arg1 accessorSequence:(id)arg2;
- (id)_valueForAccessorSequence:(id)arg1 closestParent:(id*)arg2 accessorSequenceFromClosestParent:(id*)arg3;
- (void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2;
- (void)addObserver:(id)arg1 forSubscriptsOfPropertyPathWithString:(id)arg2;
- (id)asPrivateIKJSDataItem;
- (id)getPropertyPath:(id)arg1;
- (id)identifier;
- (id)initWithObject:(id)arg1;
- (id)initWithType:(id)arg1 :(id)arg2;
- (bool)observersEnabled;
- (id)parent;
- (id)parentAccessorSequence;
- (void)removeObserver:(id)arg1;
- (void)resetValueForPropertyPath:(id)arg1;
- (void)setObserversEnabled:(bool)arg1;
- (void)setPropertyPath:(id)arg1 :(id)arg2;
- (void)setValue:(id)arg1 forPropertyPath:(id)arg2;
- (void)touchPropertyPath:(id)arg1;
- (id)type;
- (id)unbox;
- (id)valueForPropertyPath:(id)arg1;
- (id)valuesForSubscripts:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofPropertyPath:(id)arg2;

@end
